// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolComponent.h"
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

	// 게임이 시작되고 나서 만약 풀링 오브젝트의 검증을 우선 해줍니다.(크래쉬 방지)
	if (PooledObjectSubclass != nullptr)
	{
		UWorld* const World = GetWorld();

		// World 에서 풀링 오브젝트를 생성하기 때문에 World 가 존재하는지 먼저 검증해줍니다.
		if (World != nullptr)
		{
			// 이 후에 사용자가 지정한 PoolSize 만큼 풀링 오브젝트를 생성합니다.
			for (int i = 0; i < PoolSize; i++)
			{
				APooledObject* PoolableActor = World->SpawnActor<APooledObject>(PooledObjectSubclass, FVector(0, 0, 130), FRotator().ZeroRotator);

				// 풀링 오브젝트 생성에 성공해서 null 이 아니라면, 우선 처음에는 비활성화를 해주고 index 넘버를 부여합니다.
				// 이후 이 인덱스 넘버를 통해서 풀링 오브젝트를 순환하는데 사용하게 됩니다.
				// 또한, 스폰했으면 이제 이를 Despawn 할 때를 위해서 AddDynamic 을 통해서 바인딩도 걸어주고 최종적으로 오브젝트 풀링 배열에 추가해줍니다.
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


// 의미 그대로 스폰에 필요한 함수로 이를 통해서 풀링 오브젝트를 소환(스폰)합니다.
APooledObject* UObjectPoolComponent::SpawnPooledObject()
{
	// 반복문을 통해서 오브젝트 풀링 배열에 포인터로 접근합니다.
	for (APooledObject* PoolableActor : ObjectPool)
	{
		// 맨 처음 가져온 녀석이 null 이 아니며 비활성화 상태인 녀석이라면 이라는 조건에 해당하면 시작합니다.
		if (PoolableActor != nullptr && !PoolableActor->IsActive())
		{
			// 분기문을 넘었기에 액터를 스폰시키고 생명주기 설정 및 활성화를 해주고 최종적으로 인덱스 배열에 추가해줍니다.
			PoolableActor->TeleportTo(FVector(0, 0, 0), FRotator(0, 0, 0));
			PoolableActor->SetLifeSpan(PooledObjectLifeSpan);
			PoolableActor->SetAcitve(true);
			SpawnedPoolIndexs.Add(PoolableActor->GetpPoolIndex());

			return PoolableActor;
		}
	}

	// 위에서 분기문을 통과하지 못 한 경우로 즉, 모든 오브젝트가 활성화 상태일 경우 입니다.
	// 이 경우 가장 맨 처음 사용한 액터부터 순환해서 가져오게 끔 해야 합니다.(순환)
	if (SpawnedPoolIndexs.Num() > 0)
	{
		// 인덱스 배열의 첫 번째에 해당하는 요소값(오브젝트 순번)을 가져와서 내부 멤버 변수에 담아줍니다.
		// 이후 해당 요소값으로 접근해서 인덱스 배열의 요소를 삭제합니다.(가장 첫 번째 녀석을 삭제)
		// 이제 배열의 마지막에 사용할 액터를 가져오기 위해서 해당 인덱스 순서와 일치하는 오브젝트를 가져옵니다.
		int PooledObjectIndex = SpawnedPoolIndexs[0];
		SpawnedPoolIndexs.Remove(PooledObjectIndex);
		APooledObject* PoolableActor = ObjectPool[PooledObjectIndex];

		if (PoolableActor != nullptr)
		{
			// 가장 처음으로 사용했던 녀석을 우선 비활성화 시켜줍니다.
			PoolableActor->SetAcitve(false);

			// 이후에는 아래처럼 다시 시작 하는 위치로 소환 및 생명주기를 다시 잡아주고 활성화까지 해줍니다.
			PoolableActor->TeleportTo(FVector(0, 0, 0), FRotator(0, 0, 0));
			PoolableActor->SetLifeSpan(PooledObjectLifeSpan);
			PoolableActor->SetAcitve(true);

			// 이후 마지막으로 인덱스 배열에 해당 오브젝트의 순번을 가져와서 넣어줌으로써 순회가 끝납니다.
			SpawnedPoolIndexs.Add(PoolableActor->GetpPoolIndex());

			return PoolableActor;
		}
	}

	return nullptr;
}

void UObjectPoolComponent::OnPooledObjectDespawn(APooledObject* PoolActor)
{
	SpawnedPoolIndexs.Remove(PoolActor->GetpPoolIndex());
}