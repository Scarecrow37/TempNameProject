// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainSoundWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDele_MasterVolume, float, m_MasterVolume);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDele_MusicVolume, float, m_MusicVolume);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDele_SFXVolume, float, m_SFXVolume);

/**
 * SoundWidget 에서 다루게 될 UserWidget 클래스 입니다.
 */
UCLASS()
class MAINSOUNDPLUGIN_API UMainSoundWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetVolume(float MasterVolume, float MusicVolume, float SFXVolume);

	// ======================= [ Event Dispatcher Function ]
	/**
	* 전달받은 실수를 통해 전체 볼륨을 조절합니다.
	* @param Volume 전체 볼륨을 조절할 사운드 크기 값
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SW_SetMasterVolume(float Volume);

	/**
	* 전달받은 실수를 통해 전체 볼륨을 조절합니다.
	* @param Volume 전체 볼륨을 조절할 사운드 크기 값
	*/
	void SW_SetMasterVolume_Implementation(float Volume);

	/**
	* 전달받은 실수를 통해 음악 볼륨을 조절합니다.
	* @param Volume 음악 볼륨을 조절할 사운드 크기 값
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SW_SetMusicVolume(float Volume);

	/**
	* 전달받은 실수를 통해 음악 볼륨을 조절합니다.
	* @param Volume 음악 볼륨을 조절할 사운드 크기 값
	*/
	void SW_SetMusicVolume_Implementation(float Volume);

	/**
	* 전달받은 실수를 통해 효과음 볼륨을 조절합니다.
	* @param Volume 효과음 볼륨을 조절할 사운드 크기 값
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SW_SetSFXVolume(float Volume);

	/**
	* 전달받은 실수를 통해 효과음 볼륨을 조절합니다.
	* @param Volume 효과음 볼륨을 조절할 사운드 크기 값
	*/
	void SW_SetSFXVolume_Implementation(float Volume);


	// ======================= [ Member Function ]
	/**
	* 전달받은 실수를 볼륨의 최소치와 최대치를 벗어나지 않게 검증합니다.
	* @param Volume 유저가 조절하고자 하는 볼륨 수치
	* @return 검증 이후 나온 결과, 실수 값
	*/
	float ValidateVolume(float Volume);


	// ======================= [ Delegate Property ]
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "sipal")
	float m_MasterVolume;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "sipal")
	float m_MusicVolume;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "sipal")
	float m_SFXVolume;

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable, Category = "sipal")
	FDele_MasterVolume m_Dele_MasterVolume;

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable, Category = "sipal")
	FDele_MusicVolume m_Dele_MusicVolume;

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable, Category = "sipal")
	FDele_SFXVolume m_Dele_SFXVolume;

protected:


private:

};
