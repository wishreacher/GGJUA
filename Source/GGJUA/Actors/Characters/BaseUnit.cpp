// Fill out your copyright notice in the Description page of Project Settings.


#include "GGJUA/Actors/Characters/BaseUnit.h"

ABaseUnit::ABaseUnit()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABaseUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

