// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PooledObject.generated.h"

// 하나의 매개변수를 전달하는 델리게이트를 생성합니다.
// 델리게이트를 통해서 해당 객체가 소멸될 때 객체 풀에 알리기 위해서 델리게이트를 사용합니다.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPooledObjectDespawn, APooledObject*, PoolActor);

class UProjectileMovementComponent;
class UDecalComponent;
class USphereComponent;
class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class CHARACTERPLUGIN_API APooledObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APooledObject();

	FOnPooledObjectDespawn OnPooledObjectDespawn;

	// 이제 풀링된 객체 despawn에 이름을 지정한 다음 수명 타이머가 만료될 때마다 호출을 해 비활성화 하는 함수를 생성합니다.
	UFUNCTION(BlueprintCallable, Category = "Pooled Object")
	void Deactivate();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetAcitve(bool InActive);
	void SetLifeSpan(float LifeTime);
	void SetPoolIndex(int Index);

	bool IsActive();
	int GetpPoolIndex();

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PoolObject")
	USceneComponent* SceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PoolObject")
	UDecalComponent* DecalComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PoolObject")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PoolObject")
	UProjectileMovementComponent* ProjectileMovementComponent;*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool Active;
	float LifeSpan = 0.0f;
	int PoolIndex;

	FTimerHandle LifeSpanTimer;
};
