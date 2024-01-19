// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainSoundPlugin/Public/MainSoundWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainSoundWidget() {}
// Cross Module References
	MAINSOUNDPLUGIN_API UClass* Z_Construct_UClass_UMainSoundWidget();
	MAINSOUNDPLUGIN_API UClass* Z_Construct_UClass_UMainSoundWidget_NoRegister();
	MAINSOUNDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature();
	MAINSOUNDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature();
	MAINSOUNDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MainSoundPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics
	{
		struct _Script_MainSoundPlugin_eventMasterVolumeDelegate_Parms
		{
			float WidgetMasterVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetMasterVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::NewProp_WidgetMasterVolume = { "WidgetMasterVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MainSoundPlugin_eventMasterVolumeDelegate_Parms, WidgetMasterVolume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::NewProp_WidgetMasterVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MainSoundPlugin, nullptr, "MasterVolumeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::_Script_MainSoundPlugin_eventMasterVolumeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::_Script_MainSoundPlugin_eventMasterVolumeDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMasterVolumeDelegate_DelegateWrapper(const FMulticastScriptDelegate& MasterVolumeDelegate, float WidgetMasterVolume)
{
	struct _Script_MainSoundPlugin_eventMasterVolumeDelegate_Parms
	{
		float WidgetMasterVolume;
	};
	_Script_MainSoundPlugin_eventMasterVolumeDelegate_Parms Parms;
	Parms.WidgetMasterVolume=WidgetMasterVolume;
	MasterVolumeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics
	{
		struct _Script_MainSoundPlugin_eventMusicVolumeDelegate_Parms
		{
			float WidgetMusicVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetMusicVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::NewProp_WidgetMusicVolume = { "WidgetMusicVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MainSoundPlugin_eventMusicVolumeDelegate_Parms, WidgetMusicVolume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::NewProp_WidgetMusicVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MainSoundPlugin, nullptr, "MusicVolumeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::_Script_MainSoundPlugin_eventMusicVolumeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::_Script_MainSoundPlugin_eventMusicVolumeDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMusicVolumeDelegate_DelegateWrapper(const FMulticastScriptDelegate& MusicVolumeDelegate, float WidgetMusicVolume)
{
	struct _Script_MainSoundPlugin_eventMusicVolumeDelegate_Parms
	{
		float WidgetMusicVolume;
	};
	_Script_MainSoundPlugin_eventMusicVolumeDelegate_Parms Parms;
	Parms.WidgetMusicVolume=WidgetMusicVolume;
	MusicVolumeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics
	{
		struct _Script_MainSoundPlugin_eventMusicSFXDelegate_Parms
		{
			float WidgetSFXVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetSFXVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::NewProp_WidgetSFXVolume = { "WidgetSFXVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MainSoundPlugin_eventMusicSFXDelegate_Parms, WidgetSFXVolume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::NewProp_WidgetSFXVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MainSoundPlugin, nullptr, "MusicSFXDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::_Script_MainSoundPlugin_eventMusicSFXDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::_Script_MainSoundPlugin_eventMusicSFXDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMusicSFXDelegate_DelegateWrapper(const FMulticastScriptDelegate& MusicSFXDelegate, float WidgetSFXVolume)
{
	struct _Script_MainSoundPlugin_eventMusicSFXDelegate_Parms
	{
		float WidgetSFXVolume;
	};
	_Script_MainSoundPlugin_eventMusicSFXDelegate_Parms Parms;
	Parms.WidgetSFXVolume=WidgetSFXVolume;
	MusicSFXDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMainSoundWidget::execSW_SetSFXVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SW_SetSFXVolume_Implementation(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainSoundWidget::execSW_SetMusicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SW_SetMusicVolume_Implementation(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainSoundWidget::execSW_SetMasterVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SW_SetMasterVolume_Implementation(Z_Param_Volume);
		P_NATIVE_END;
	}
	struct MainSoundWidget_eventSW_SetMasterVolume_Parms
	{
		float Volume;
	};
	struct MainSoundWidget_eventSW_SetMusicVolume_Parms
	{
		float Volume;
	};
	struct MainSoundWidget_eventSW_SetSFXVolume_Parms
	{
		float Volume;
	};
	static FName NAME_UMainSoundWidget_SW_SetMasterVolume = FName(TEXT("SW_SetMasterVolume"));
	void UMainSoundWidget::SW_SetMasterVolume(float Volume)
	{
		MainSoundWidget_eventSW_SetMasterVolume_Parms Parms;
		Parms.Volume=Volume;
		ProcessEvent(FindFunctionChecked(NAME_UMainSoundWidget_SW_SetMasterVolume),&Parms);
	}
	static FName NAME_UMainSoundWidget_SW_SetMusicVolume = FName(TEXT("SW_SetMusicVolume"));
	void UMainSoundWidget::SW_SetMusicVolume(float Volume)
	{
		MainSoundWidget_eventSW_SetMusicVolume_Parms Parms;
		Parms.Volume=Volume;
		ProcessEvent(FindFunctionChecked(NAME_UMainSoundWidget_SW_SetMusicVolume),&Parms);
	}
	static FName NAME_UMainSoundWidget_SW_SetSFXVolume = FName(TEXT("SW_SetSFXVolume"));
	void UMainSoundWidget::SW_SetSFXVolume(float Volume)
	{
		MainSoundWidget_eventSW_SetSFXVolume_Parms Parms;
		Parms.Volume=Volume;
		ProcessEvent(FindFunctionChecked(NAME_UMainSoundWidget_SW_SetSFXVolume),&Parms);
	}
	void UMainSoundWidget::StaticRegisterNativesUMainSoundWidget()
	{
		UClass* Class = UMainSoundWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SW_SetMasterVolume", &UMainSoundWidget::execSW_SetMasterVolume },
			{ "SW_SetMusicVolume", &UMainSoundWidget::execSW_SetMusicVolume },
			{ "SW_SetSFXVolume", &UMainSoundWidget::execSW_SetSFXVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundWidget_eventSW_SetMasterVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @param Volume \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
		{ "ToolTip", "\xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@param Volume \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundWidget, nullptr, "SW_SetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::PropPointers), sizeof(MainSoundWidget_eventSW_SetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundWidget_eventSW_SetMasterVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundWidget_eventSW_SetMusicVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @param Volume \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
		{ "ToolTip", "\xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@param Volume \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundWidget, nullptr, "SW_SetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::PropPointers), sizeof(MainSoundWidget_eventSW_SetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundWidget_eventSW_SetMusicVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundWidget_eventSW_SetSFXVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @param Volume \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
		{ "ToolTip", "\xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@param Volume \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundWidget, nullptr, "SW_SetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::PropPointers), sizeof(MainSoundWidget_eventSW_SetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundWidget_eventSW_SetSFXVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainSoundWidget);
	UClass* Z_Construct_UClass_UMainSoundWidget_NoRegister()
	{
		return UMainSoundWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainSoundWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetMasterVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetMasterVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetMusicVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetMusicVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSFXVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetSFXVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChangedMasterVolume_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangedMasterVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMusicMasterVolume_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMusicMasterVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSFXMasterVolume_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSFXMasterVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainSoundWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MainSoundPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainSoundWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainSoundWidget_SW_SetMasterVolume, "SW_SetMasterVolume" }, // 305666209
		{ &Z_Construct_UFunction_UMainSoundWidget_SW_SetMusicVolume, "SW_SetMusicVolume" }, // 364137284
		{ &Z_Construct_UFunction_UMainSoundWidget_SW_SetSFXVolume, "SW_SetSFXVolume" }, // 1381550469
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SoundWidget \xec\x97\x90\xec\x84\x9c \xeb\x8b\xa4\xeb\xa3\xa8\xea\xb2\x8c \xeb\x90\xa0 UserWidget \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xec\x9e\x85\xeb\x8b\x88\xeb\x8b\xa4.\n */" },
		{ "IncludePath", "MainSoundWidget.h" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
		{ "ToolTip", "SoundWidget \xec\x97\x90\xec\x84\x9c \xeb\x8b\xa4\xeb\xa3\xa8\xea\xb2\x8c \xeb\x90\xa0 UserWidget \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xec\x9e\x85\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMasterVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "// ======================= [ Delegate Property ]\n" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
		{ "ToolTip", "======================= [ Delegate Property ]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMasterVolume = { "WidgetMasterVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainSoundWidget, WidgetMasterVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMasterVolume_MetaData), Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMasterVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMusicVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMusicVolume = { "WidgetMusicVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainSoundWidget, WidgetMusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMusicVolume_MetaData), Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMusicVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetSFXVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetSFXVolume = { "WidgetSFXVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainSoundWidget, WidgetSFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetSFXVolume_MetaData), Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetSFXVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMasterVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMasterVolume = { "OnChangedMasterVolume", nullptr, (EPropertyFlags)0x00101000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainSoundWidget, OnChangedMasterVolume), Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMasterVolume_MetaData), Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMasterVolume_MetaData) }; // 2767382918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnMusicMasterVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnMusicMasterVolume = { "OnMusicMasterVolume", nullptr, (EPropertyFlags)0x00101000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainSoundWidget, OnMusicMasterVolume), Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnMusicMasterVolume_MetaData), Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnMusicMasterVolume_MetaData) }; // 2399065907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnSFXMasterVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnSFXMasterVolume = { "OnSFXMasterVolume", nullptr, (EPropertyFlags)0x00101000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainSoundWidget, OnSFXMasterVolume), Z_Construct_UDelegateFunction_MainSoundPlugin_MusicSFXDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnSFXMasterVolume_MetaData), Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnSFXMasterVolume_MetaData) }; // 1642518512
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainSoundWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMasterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMusicVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetSFXVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMasterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnMusicMasterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnSFXMasterVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainSoundWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainSoundWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainSoundWidget_Statics::ClassParams = {
		&UMainSoundWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainSoundWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainSoundWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMainSoundWidget()
	{
		if (!Z_Registration_Info_UClass_UMainSoundWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainSoundWidget.OuterSingleton, Z_Construct_UClass_UMainSoundWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainSoundWidget.OuterSingleton;
	}
	template<> MAINSOUNDPLUGIN_API UClass* StaticClass<UMainSoundWidget>()
	{
		return UMainSoundWidget::StaticClass();
	}
	UMainSoundWidget::UMainSoundWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainSoundWidget);
	UMainSoundWidget::~UMainSoundWidget() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainSoundWidget, UMainSoundWidget::StaticClass, TEXT("UMainSoundWidget"), &Z_Registration_Info_UClass_UMainSoundWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainSoundWidget), 206866433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_2138521390(TEXT("/Script/MainSoundPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
