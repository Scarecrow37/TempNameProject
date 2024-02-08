// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HomePlayerController.h"
#include "MainPlayerController.generated.h"

class ACharacter;
class USoundMix;
class USoundClass;
class UAudioComponent;
class UUserWidget;

/**
 * 
 */
UCLASS()
class TEMPNAMEPROJECT_API AMainPlayerController : public AHomePlayerController
{
	GENERATED_BODY()

public:
	AMainPlayerController();

	// ======================= [ Event Dispatcher Function ]
	/**
	* 전달받은 실수를 통해 전체 볼륨을 조절합니다.
	* @param Volume 전체 볼륨을 조절할 사운드 크기 값
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnSetMasterVolume(float Volume);

	/**
	* 전달받은 실수를 통해 전체 볼륨을 조절합니다.
	* @param Volume 전체 볼륨을 조절할 사운드 크기 값
	*/
	virtual void OnSetMasterVolume_Implementation(float Volume);

	/**
	* 전달받은 실수를 통해 음악 볼륨을 조절합니다.
	* @param Volume 음악 볼륨을 조절할 사운드 크기 값
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnSetMusicVolume(float Volume);

	/**
	* 전달받은 실수를 통해 음악 볼륨을 조절합니다.
	* @param Volume 음악 볼륨을 조절할 사운드 크기 값
	*/
	virtual void OnSetMusicVolume_Implementation(float Volume);

	/**
	* 전달받은 실수를 통해 효과음 볼륨을 조절합니다.
	* @param Volume 효과음 볼륨을 조절할 사운드 크기 값
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnSetSFXVolume(float Volume);

	/**
	* 전달받은 실수를 통해 효과음 볼륨을 조절합니다.
	* @param Volume 효과음 볼륨을 조절할 사운드 크기 값
	*/
	virtual void OnSetSFXVolume_Implementation(float Volume);


	// FString 은 사이즈가 크기 때문에 복사가 아닌 아래처럼 주소로 넘겨주는게 좋습니다.
	//UFUNCTION(Server, Reliable)
	//void RequestChangeUserName(const FString& UserName);

	//void BindPlayerState(class ALobbyPlayerState* LobbyPlayerState);

	//void UpdateUserName();

	//UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	//void OnUpdateUserName(const FString& UserName);

	//void OnUpdateUserName_Implementation(const FString& UserName);

	//FTimerHandle th_BindPlayerState;


protected:
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* InPawn) override;

private:
	// ======================= [ Replication Function ]
	UFUNCTION(Client, Reliable)
	void ResponseClientPossess();


	// ======================= [ Member Function ]
	void InitializeAudio();

	void InitializeWidget();

	void ApplyMasterVolume(float Volume);

	void ApplyMusicVolume(float Volume);

	void ApplySFXVolume(float Volume);


	// ======================= [ Member Property ]
	// UI Property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"), Category = "UI")
	TSubclassOf<UUserWidget> HomeWidgetClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"), Category = "UI")
	TObjectPtr<UUserWidget> HomeWidget;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"), Category = "UI")
	TSubclassOf<UUserWidget> SoundWidgetClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"), Category = "UI")
	TObjectPtr<UUserWidget> SoundWidget;


	// Sound Class, Mix Property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"), Category = "Sound")
	TObjectPtr<USoundMix> SoundMix;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"), Category = "Sound")
	TObjectPtr<USoundClass> SoundMusicClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"), Category = "Sound")
	TObjectPtr<USoundClass> SoundSFXClass;


	// UAudioComponent Property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"), Category = "AudioComponents")
	TObjectPtr<UAudioComponent> BackgroundMusicComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"), Category = "AudioComponents")
	TObjectPtr<UAudioComponent> SFXComponent;

};