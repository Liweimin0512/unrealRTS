// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Navigation/PathFollowingComponent.h"
#include "CommanderBase.generated.h"

UCLASS()
class URTSMAKER_API ACommanderBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACommanderBase();

	FVector MoveToLocation;
	FRotator MoveToRotation;
	bool IsPlayOrder;
	AActor* TargetActor;

	EPathFollowingResult::Type MovementStatus;
	bool Rotateing;
	bool AtActor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoveUnitTo(FVector location,FRotator Rotation,bool isPlayOrder,AActor* Actor);

	virtual void MoveToActor(AActor* Actor);

	virtual void NewOrder();

};
