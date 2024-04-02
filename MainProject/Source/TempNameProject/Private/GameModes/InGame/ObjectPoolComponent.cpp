// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/InGame/ObjectPoolComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Camera/PlayerCameraManager.h"

// Sets default values for this component's properties
UObjectPoolComponent::UObjectPoolComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called every frame
void UObjectPoolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Called when the game starts
void UObjectPoolComponent::BeginPlay()
{
	Super::BeginPlay();

	if (PooledObjectSubclass != nullptr)
	{
		UWorld* const World = GetWorld();

		if (World != nullptr)
		{
			for (int i = 0; i < PoolSize; i++)
			{
				APooledObject* PoolableActor = World->SpawnActor<APooledObject>(PooledObjectSubclass, FVector(0, 0, 130), FRotator().ZeroRotator);
				//PoolableActor->SetActorEnableCollision(false);

				if (PoolableActor != nullptr)
				{
					PoolableActor->SetAcitve(false);
					PoolableActor->SetPoolIndex(i);
					PoolableActor->OnPooledObjectDespawn.AddDynamic(this, &UObjectPoolComponent::OnPooledObjectDespawn);
					ObjectPool.Add(PoolableActor);
				}
			}
		}
	}
}

APooledObject* UObjectPoolComponent::SpawnPooledObject()
{
	for (APooledObject* PoolableActor : ObjectPool)
	{
		if (PoolableActor != nullptr && !PoolableActor->IsActive())
		{
			//PoolableActor->SetActorEnableCollision(false);

			PoolableActor->TeleportTo(FVector(0, 0, 0), FRotator(0, 0, 0));
			PoolableActor->SetLifeSpan(PooledObjectLifeSpan);
			PoolableActor->SetAcitve(true);
			SpawnedPoolIndexs.Add(PoolableActor->GetpPoolIndex());

			//PoolableActor->SetActorEnableCollision(true);
			return PoolableActor;
		}
	}

	if (SpawnedPoolIndexs.Num() > 0)
	{
		int PooledObjectIndex = SpawnedPoolIndexs[0];
		SpawnedPoolIndexs.Remove(PooledObjectIndex);
		APooledObject* PoolableActor = ObjectPool[PooledObjectIndex];

		if (PoolableActor != nullptr)
		{
			//PoolableActor->SetActorEnableCollision(false);
			PoolableActor->SetAcitve(false);

			PoolableActor->TeleportTo(FVector(0, 0, 0), FRotator(0, 0, 0));
			PoolableActor->SetLifeSpan(PooledObjectLifeSpan);
			PoolableActor->SetAcitve(true);
			SpawnedPoolIndexs.Add(PoolableActor->GetpPoolIndex());

			//PoolableActor->SetActorEnableCollision(true);
			return PoolableActor;
		}
	}

	return nullptr;
}

void UObjectPoolComponent::OnPooledObjectDespawn(APooledObject* PoolActor)
{
	SpawnedPoolIndexs.Remove(PoolActor->GetpPoolIndex());
}