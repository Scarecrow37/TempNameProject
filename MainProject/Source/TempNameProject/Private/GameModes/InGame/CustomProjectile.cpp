// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/InGame/CustomProjectile.h"

// Sets default values
ACustomProjectile::ACustomProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

