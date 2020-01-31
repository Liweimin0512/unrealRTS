// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPawnBase.h"

// Sets default values
ARTSPawnBase::ARTSPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARTSPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTSPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARTSPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

