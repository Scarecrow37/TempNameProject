// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainSoundInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAINSOUNDPLUGIN_MainSoundInterface_generated_h
#error "MainSoundInterface.generated.h already included, missing '#pragma once' in MainSoundInterface.h"
#endif
#define MAINSOUNDPLUGIN_MainSoundInterface_generated_h

#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetSFXVolume_Implementation(float Volume) {}; \
	virtual float GetSFXVolume_Implementation() { return 0; }; \
	virtual void SetMusicVolume_Implementation(float Volume) {}; \
	virtual float GetMusicVolume_Implementation() { return 0; }; \
	virtual void SetMasterVolume_Implementation(float Volume) {}; \
	virtual float GetMasterVolume_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execSetSFXVolume); \
	DECLARE_FUNCTION(execGetSFXVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execSetMasterVolume); \
	DECLARE_FUNCTION(execGetMasterVolume);


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_ACCESSORS
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainSoundInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainSoundInterface(UMainSoundInterface&&); \
	NO_API UMainSoundInterface(const UMainSoundInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainSoundInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainSoundInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainSoundInterface) \
	NO_API virtual ~UMainSoundInterface();


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMainSoundInterface(); \
	friend struct Z_Construct_UClass_UMainSoundInterface_Statics; \
public: \
	DECLARE_CLASS(UMainSoundInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MainSoundPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMainSoundInterface)


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMainSoundInterface() {} \
public: \
	typedef UMainSoundInterface UClassType; \
	typedef IMainSoundInterface ThisClass; \
	static float Execute_GetMasterVolume(UObject* O); \
	static float Execute_GetMusicVolume(UObject* O); \
	static float Execute_GetSFXVolume(UObject* O); \
	static void Execute_SetMasterVolume(UObject* O, float Volume); \
	static void Execute_SetMusicVolume(UObject* O, float Volume); \
	static void Execute_SetSFXVolume(UObject* O, float Volume); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_12_PROLOG
#define FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_ACCESSORS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAINSOUNDPLUGIN_API UClass* StaticClass<class UMainSoundInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
