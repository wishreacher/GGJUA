// Fill out your copyright notice in the Description page of Project Settings.


#include "GGJUA/Actors/Characters/Ent.h"

AEnt::AEnt()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEnt::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = MaxHealth;
}

void AEnt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnt::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

