// Fill out your copyright notice in the Description page of Project Settings.


#include "ShieldCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


AShieldCharacter::AShieldCharacter()
	:AClassShooterCharacter()
{

}

void AShieldCharacter::BeginPlay()
{
	Super::BeginPlay();
	cameraUltLerp = false;
	cameraUltLerpBack = false;
	targetUltPos = originalCamPos;
	targetUltPos.X -= 250;
	targetUltPos.Z += 50;
}

void AShieldCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == true)
		isInUltimate = true;
	else if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
		isInUltimate = false;

	if (cameraUltLerp == true)
	{
		FVector curLocation = GetFirstPersonCameraComponent()->GetRelativeLocation();
		FVector newLocation = FMath::VInterpTo(curLocation, targetUltPos,
			deltaTime, 5);
		GetFirstPersonCameraComponent()->SetRelativeLocation(newLocation);

		if (FVector::Dist(targetUltPos, newLocation) <= .05)
		{
			cameraUltLerp = false;
			cameraUltLerpBack = true;
			movementComponent->GravityScale = baseGravity;
		}
	}
	if (cameraUltLerpBack == true)
	{
		FVector curLocation = GetFirstPersonCameraComponent()->GetRelativeLocation();
		FVector newLocation = FMath::VInterpTo(curLocation, originalCamPos,
			deltaTime, 12);
		GetFirstPersonCameraComponent()->SetRelativeLocation(newLocation);

		if (FVector::Dist(originalCamPos, newLocation) <= .05)
			cameraUltLerpBack = false;
	}
}

void AShieldCharacter::StartShooting()
{
	

}

void AShieldCharacter::ADS()
{
	

}

void AShieldCharacter::StopADS()
{
	Super::StopADS();

}

void AShieldCharacter::Block()
{


}
void AShieldCharacter::ShieldThrow()
{


}

void AShieldCharacter::ShieldBash(FVector2D dir)
{
	if (dir.Length() > 0.0)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			shieldBashVFX,
			GetActorLocation(),
			GetActorRotation(),
			true  // Auto destroy
		);

		movementComponent->GroundFriction = 0.0;
		movementComponent->BrakingDecelerationWalking = 1400;

		if (dir.X > 0.0)
			movementComponent->AddImpulse(GetActorRightVector() * shieldBashDist, true);
		if (dir.X < 0.0)
			movementComponent->AddImpulse(GetActorRightVector() * -shieldBashDist, true);
		if (dir.Y > 0.0)
			movementComponent->AddImpulse(GetActorForwardVector() * shieldBashDist, true);
		if (dir.Y < 0.0)
			movementComponent->AddImpulse(GetActorForwardVector() * -shieldBashDist, true);

		FTimerHandle DelayTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, FTimerDelegate::CreateLambda([this]()
			{
				movementComponent->GroundFriction = baseGroundFriction;
				movementComponent->BrakingDecelerationWalking = baseBrakingDeceleration;
			}), .75f, false);

	}
}


void AShieldCharacter::StartUltimate()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(ultTimer) == false &&
		GetWorld()->GetTimerManager().IsTimerActive(ultCooldownTimer) == false)
	{
		isInUltimate = true;
		ultimateTriggered = true;
		SaveCurWeapons();

		FTimerHandle DelayTimerHandle1;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle1, FTimerDelegate::CreateLambda([this]()
			{
				movementComponent->GravityScale = .5f;
				movementComponent->AddImpulse(GetActorUpVector() * 500, true);
				cameraUltLerp = true;
			}), .15f, false);



		FTimerHandle DelayTimerHandle2;
		GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle2, FTimerDelegate::CreateLambda([this]()
			{
				bodyMesh->SetMaterial(0, ultimateMat);

				GetWorldTimerManager().SetTimer(ultTimer, this,
					&AShieldCharacter::StopUltimate, ultLength, false);
			}), .5f, false);
	}
}
void AShieldCharacter::StopUltimate()
{
	bodyMesh->SetMaterial(0, baseBodyMat);
	RestoreCurWeapons();

	GetWorld()->GetTimerManager().SetTimer(ultCooldownTimer, FTimerDelegate::CreateLambda([this]()
		{
			ultimateTriggered = false;
		}), .05f, false);
}

