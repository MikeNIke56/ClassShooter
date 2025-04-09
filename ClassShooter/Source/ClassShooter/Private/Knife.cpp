// Fill out your copyright notice in the Description page of Project Settings.


#include "Knife.h"

void AKnife::Tick(float deltaTime)
{
	
}

void AKnife::Fire()
{
	Swing();
}

void AKnife::Swing()
{
	UE_LOG(LogTemp, Warning, TEXT("meleeing"));
}

void AKnife::StopSwing()
{
	UE_LOG(LogTemp, Warning, TEXT("stop meleeing"));
}
