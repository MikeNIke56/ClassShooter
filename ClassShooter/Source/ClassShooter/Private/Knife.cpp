// Fill out your copyright notice in the Description page of Project Settings.


#include "Knife.h"

/*
* Tick
*/
void AKnife::Tick(float deltaTime)
{
	
}
void AKnife::Fire()
{
	Swing();
}

/*
* Plays knife swing sfx
*/
void AKnife::Swing()
{
	UGameplayStatics::PlaySoundAtLocation(this, weaponAtkSound, GetActorLocation());
}

/*
* Ends knife fire call
*/
void AKnife::StopSwing()
{
	//UE_LOG(LogTemp, Warning, TEXT("stop meleeing"));
}
