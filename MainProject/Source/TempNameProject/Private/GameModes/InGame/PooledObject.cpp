// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/InGame/PooledObject.h"

// Sets default values
APooledObject::APooledObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APooledObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APooledObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APooledObject::Deactivate()
{
	// Deactivate 의미 그대로 비활성화를 목적으로 사용하는 함수입니다.
	// 그렇기에 비활성화를 하면서 동시에 SetLifeSpan 같이 생존시간 설정이 남이있지 않게 ClearAllTimersForObject 를 통해
	// 이 비활성화 할 객체와 관련된 모든 타이머 설정들을 지워줍니다.(메모리 누수 방지)
	SetAcitve(false);
	GetWorldTimerManager().ClearAllTimersForObject(this);
	OnPooledObjectDespawn.Broadcast(this);
}

void APooledObject::SetAcitve(bool InActive)
{
	// 활성화를 위한 함수로 인자로 전달받은 bool 값 InActive 를 통해서 이후 과정을 처리합니다.
	Active = InActive;
	// false 라면 비활성화 이기에 InGame 에서 숨깁니다. 이후에 타이머 설정을 지정해주도록 합니다.
	SetActorHiddenInGame(!InActive);
	GetWorldTimerManager().SetTimer(LifeSpanTimer, this, &APooledObject::Deactivate, LifeSpan, false);
}

void APooledObject::SetLifeSpan(float LifeTime)
{
	LifeSpan = LifeTime;
}

void APooledObject::SetPoolIndex(int Index)
{
	PoolIndex = Index;
}

bool APooledObject::IsActive()
{
	return Active;
}

int APooledObject::GetpPoolIndex()
{
	return PoolIndex;
}

