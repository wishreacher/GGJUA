// Fill out your copyright notice in the Description page of Project Settings.


#include "GGJUA/Actors/BaseTower.h"

ABaseTower::ABaseTower()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABaseTower::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseTower::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

