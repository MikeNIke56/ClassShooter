// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ClassShooterPlayerController.generated.h"

class UInputMappingContext;

/**
 *
 */
UCLASS()
class CLASSSHOOTER_API AClassShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	// Begin Actor interface
protected:

	virtual void BeginPlay() override;

	virtual void NotifyLoadedWorld(FName WorldPackageName, bool bFinalDest) override;


	UFUNCTION(Reliable, Server, WithValidation, SealedEvent)
	void ServerNotifyLoadedWorldWorkaround(FName WorldPackageName);
	bool ServerNotifyLoadedWorldWorkaround_Validate(FName WorldPackageName);
	void ServerNotifyLoadedWorldWorkaround_Implementation(FName WorldPackageName);

	// End Actor interface
};
