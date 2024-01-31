// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS(config = Game)
class Projectile : public AActor
{
	GENERATED_BODY()

public:
	//콜리젼 생성
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComp;

	//무브먼트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "MyProjectile")
	TObjectPtr<UStaticMeshComponent> Sphere;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Brush")
	TObjectPtr<UTexture2D> Brushtexture;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Brush")
	double Brushsize;

public:
	Projectile();

	//힛 이벤트
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	//충돌체 결과값
	USphereComponent* GetCollisionComp() const { return CollisionComp; }

	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

