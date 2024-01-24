// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainSoundWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAINSOUNDPLUGIN_MainSoundWidget_generated_h
#error "MainSoundWidget.generated.h already included, missing '#pragma once' in MainSoundWidget.h"
#endif
#define MAINSOUNDPLUGIN_MainSoundWidget_generated_h

#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_9_DELEGATE \
MAINSOUNDPLUGIN_API void FMasterVolumeDelegate_DelegateWrapper(const FMulticastScriptDelegate& MasterVolumeDelegate, float WidgetMasterVolume);


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_11_DELEGATE \
MAINSOUNDPLUGIN_API void FMusicVolumeDelegate_DelegateWrapper(const FMulticastScriptDelegate& MusicVolumeDelegate, float WidgetMusicVolume);


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_13_DELEGATE \
MAINSOUNDPLUGIN_API void FSFXVolumeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SFXVolumeDelegate, float WidgetSFXVolume);


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_SPARSE_DATA
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWidgetSFXVolume); \
	DECLARE_FUNCTION(execSetWidgetMusicVolume); \
	DECLARE_FUNCTION(execSetWidgetMasterVolume);


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_ACCESSORS
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainSoundWidget(); \
	friend struct Z_Construct_UClass_UMainSoundWidget_Statics; \
public: \
	DECLARE_CLASS(UMainSoundWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MainSoundPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMainSoundWidget)


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainSoundWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainSoundWidget(UMainSoundWidget&&); \
	NO_API UMainSoundWidget(const UMainSoundWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainSoundWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainSoundWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainSoundWidget) \
	NO_API virtual ~UMainSoundWidget();


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_18_PROLOG
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_SPARSE_DATA \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_ACCESSORS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAINSOUNDPLUGIN_API UClass* StaticClass<class UMainSoundWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
