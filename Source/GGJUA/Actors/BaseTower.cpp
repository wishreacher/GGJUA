// Fill out your copyright notice in the Description page of Project Settings.


#include "GGJUA/Actors/BaseTower.h"

ABaseTower::ABaseTower()
{
	PrimaryActorTick.bCanEverTick = true;
	BuildedTreeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tree"));
	NotBuildedTreeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Basic Mesh"));
	InteractionCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Interaction Collision"));
	RootComponent = InteractionCollision;
	NotBuildedTreeMeshComponent->SetupAttachment(GetRootComponent());
	BuildedTreeMeshComponent->SetupAttachment(GetRootComponent());
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

