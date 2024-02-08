// Fill out your copyright notice in the Description page of Project Settings.


#include "PaintWeapon.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


// Sets default values
APaintWeapon::APaintWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>("Weapon");
	WeaponMesh->SetCollisionProfileName("OverlapAllDynamic");
	WeaponMesh->SetSimulatePhysics(true);

	SetRootComponent(WeaponMesh);
	
	
	
	bReplicates = true;
	SetReplicateMovement(true);

	//projectiles  spawn location
	//MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);
}

APaintWeapon::UTP_APaintWeapon()
{
	MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);
}

void APaintWeapon::EventShoot()
{
}

inline void AWeapon::EventTrigger_Implementation()
{
	//몽타주 넣기 m_pOwnChar->PlayAnimMontage(m_ShootMontage);
}

void APaintWeapon::EventShoot_Implementation()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), m_FireEffect,
		WeaponMesh->GetSocketLocation("muzzle"),
		WeaponMesh->GetSocketRotation("muzzle"),
		FVector(0.1f, 0.1f, 0.1f));

	UGameplayStatics::SpawnSoundAtLocation(GetWorld(), m_SoundBase,
		WeaponMesh->GetSocketLocation("muzzle"));

	APlayerController* pPlayer0 = GetWorld()->GetFirstPlayerController();
	if (pPlayer0 != m_pOwnChar->GetController())
		return;

	ReqShoot();
}

void APaintWeapon::ReqShoot()
{
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
			const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
			const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(MuzzleOffset);


			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// 공 생성
			World->SpawnActor<Projectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}


	
}

void APaintWeapon::AttachWeapon(ThirdPersonCharacter* TargetCharacter)
{
	Character = TargetCharacter;

	// Check that the character is valid, and has no rifle yet
	if (Character == nullptr || Character->GetHasRifle())
	{
		return;
	}

	// 캐릭터에 무기 붙이기
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	AttachToComponent(Character->GetMesh1P(), AttachmentRules, FName(TEXT("GripPoint")));

	Character->SetHasRifle(true);

	
}

// Called when the game starts or when spawned
void APaintWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaintWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

