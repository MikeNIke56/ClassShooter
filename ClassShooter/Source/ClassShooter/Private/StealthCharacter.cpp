// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"


void AStealthCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == true)
		isInUltimate = true;
	else if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
		isInUltimate = false;
}

void AStealthCharacter::StartAbility1()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(invisTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(invisCooldownTimer) == false)
	{
		GetWorldTimerManager().SetTimer(invisTimer, this,
			&AStealthCharacter::StopAbility1, invisLength, false);

		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			invisVFX,
			GetActorLocation(),
			GetActorRotation(),
			true  // Auto destroy
		);

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, invisMat);
			}), .15f, false);
	}else
		UE_LOG(LogTemp, Warning, TEXT("ability not available"));
    
}
void AStealthCharacter::StopAbility1()
{
	bodyMesh->SetMaterial(0, baseBodyMat);

	GetWorld()->GetTimerManager().ClearTimer(invisCooldownTimer);
	GetWorld()->GetTimerManager().SetTimer(invisCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{

		}), .01f, false);
}


void AStealthCharacter::StartAbility2()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(decoyTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(decoyCooldownTimer) == false)
	{
		GetWorldTimerManager().SetTimer(decoyTimer, this,
			&AStealthCharacter::StopAbility2, decoyLength, false);

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		decoyObj = GetClass();

		FVector spawnLoc = GetActorLocation();
		spawnLoc += (GetActorForwardVector() * 100);

		FRotator spawnRot = GetActorRotation();

		AStealthCharacter* decoyCopy = GetWorld()->SpawnActor<AStealthCharacter>(decoyObj, spawnLoc,
			spawnRot, SpawnParams);

		FVector decoySpawnLoc = decoyCopy->GetActorLocation();
		decoySpawnLoc.Z -= 250;

		decoyComp = UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			decoyFloatiesVFX,
			decoySpawnLoc,
			decoyCopy->GetActorRotation(),
			false  // Auto destroy
		);

		decoyCopy->isClone = true;
		decoyCopy->GetMesh1P()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		decoyCopy->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		decoyCopy->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		decoyCopy->bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		DirectionalDodge(movementVector);
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("ability not available"));
}
void AStealthCharacter::StopAbility2()
{
	GetWorld()->GetTimerManager().ClearTimer(decoyCooldownTimer);
	GetWorld()->GetTimerManager().SetTimer(decoyCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			TArray<AStealthCharacter*> FoundActors;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(),
				AStealthCharacter::StaticClass(), reinterpret_cast<TArray<AActor*>&>(FoundActors));

			for (AStealthCharacter* stealthChar : FoundActors)
			{
				if (stealthChar->isClone == true)
					stealthChar->Destroy();
			}
			decoyObj = nullptr;

		}), .05f, false);

	TWeakObjectPtr<UParticleSystemComponent> weakParticlePtr = decoyComp;
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateLambda([weakParticlePtr]()
		{
			if (weakParticlePtr.IsValid())
				weakParticlePtr->Deactivate();
		}), .05f, false);
}
void AStealthCharacter::DirectionalDodge(FVector2D dir)
{
	if (dir.Length() > 0.0)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			decoyVFX,
			GetActorLocation(),
			GetActorRotation(),
			true  // Auto destroy
		);

		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 1400;

		if(dir.X > 0.0)
			movementComponent->AddImpulse(GetActorRightVector() * decoyDodge, true);
		if (dir.X < 0.0)
			movementComponent->AddImpulse(GetActorRightVector() * -decoyDodge, true);
		if (dir.Y > 0.0)
			movementComponent->AddImpulse(GetActorForwardVector() * decoyDodge, true);
		if (dir.Y < 0.0)
			movementComponent->AddImpulse(GetActorForwardVector() * -decoyDodge, true);

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				movementComponent->GroundFriction = baseGroundFriction;
				movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
			}), .75f, false);

	}
}


void AStealthCharacter::StartUltimate()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		ultimateTriggered = true;
		SaveCurWeapons();


		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		weaponWorldObj = knifeObj;

		FVector spawnLoc = GetActorLocation();
		FRotator spawnRot = GetActorRotation();

		AWeaponBase* ultDaggerCopy = GetWorld()->SpawnActor<AWeaponBase>(weaponWorldObj, spawnLoc,
			spawnRot, SpawnParams);

		if (ultDaggerCopy)
			PickupWeapon(ultDaggerCopy);
		else
			UE_LOG(LogTemp, Warning, TEXT("no such weapon"));
			

		GetWorldTimerManager().SetTimer(ultTimer, this,
			&AStealthCharacter::StopUltimate, ultLength, false);

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, ultimateMat);
			}), .15f, false);
	}
}
void AStealthCharacter::StopUltimate()
{
	bodyMesh->SetMaterial(0, baseBodyMat);
	RestoreCurWeapons();

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
		}), .05f, false);
}


