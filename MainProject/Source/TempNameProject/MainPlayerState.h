// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainSoundInterface.h"
#include "GameFramework/PlayerState.h"
#include "MainPlayerState.generated.h"


/**
 * 
 */
UCLASS()
class TEMPNAMEPROJECT_API AMainPlayerState : public APlayerState, public IMainSoundInterface
{
	GENERATED_BODY()

public:
	AMainPlayerState();

	/**
	* 유저의 현재 전체 볼륨의 수치를 가져옵니다.
	* @return 현재 전체 볼륨 수치 실수 값
	*/
	float GetMasterVolume();

	/**
	* 유저의 현재 음악 볼륨의 수치를 가져옵니다.
	* @return 현재 음악 볼륨 수치 실수 값
	*/
	float GetMusicVolume();

	/**
	* 유저의 현재 효과음 볼륨의 수치를 가져옵니다.
	* @return 현재 효과음 볼륨 수치 실수 값
	*/
	float GetSFXVolume();

	/**
	* 유저의 전체 볼륨 수치를 조절합니다.
	* @return 변경할 전체 볼륨 수치 실수 값
	*/
	void SetMasterVolume(float Volume);

	/**
	* 유저의 음악 볼륨 수치를 조절합니다.
	* @return 변경할 음악 볼륨 수치 실수 값
	*/
	void SetMusicVolume(float Volume);

	/**
	* 유저의 효과음 볼륨 수치를 조절합니다.
	* @return 변경할 효과음 볼륨 수치 실수 값
	*/
	void SetSFXVolume(float Volume);

protected:
	virtual void BeginPlay() override;

private:
	// ======================= [ Member Function ]
	float ValidateVolume(float Volume);


	// ======================= [ Member Property ]
	// Sound Property
	UPROPERTY(VisibleAnywhere, Category = "Volume")
	float MasterVolume;

	UPROPERTY(VisibleAnywhere, Category = "Volume")
	float MusicVolume;

	UPROPERTY(VisibleAnywhere, Category = "Volume")
	float SFXVolume;
};