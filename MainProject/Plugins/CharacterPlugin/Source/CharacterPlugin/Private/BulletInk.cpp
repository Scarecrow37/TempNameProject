// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletInk.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/DecalComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABulletInk::ABulletInk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
	SetRootComponent(SceneComponent);

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	StaticMeshComponent->SetupAttachment(SceneComponent);
	//StaticMeshComponent->SetCollisionProfileName(FName("Bullet"));

	DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal"));
	DecalComponent->SetupAttachment(SceneComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovementComponent->ProjectileGravityScale = 0;
	ProjectileMovementComponent->InitialSpeed = 500;
	ProjectileMovementComponent->MaxSpeed = 500;
}

// Called when the game starts or when spawned
void ABulletInk::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABulletInk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

