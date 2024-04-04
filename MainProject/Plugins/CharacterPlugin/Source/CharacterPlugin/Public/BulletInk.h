// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PooledObject.h"
#include "BulletInk.generated.h"

class UProjectileMovementComponent;
class UDecalComponent;
class USphereComponent;
class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class CHARACTERPLUGIN_API ABulletInk : public APooledObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABulletInk();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PoolObject")
	USceneComponent* SceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PoolObject")
	UDecalComponent* DecalComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PoolObject")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PoolObject")
	UProjectileMovementComponent* ProjectileMovementComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
