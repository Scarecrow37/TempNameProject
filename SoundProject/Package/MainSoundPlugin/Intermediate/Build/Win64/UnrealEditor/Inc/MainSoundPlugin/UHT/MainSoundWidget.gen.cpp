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
	MAINSOUNDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature();
	MAINSOUNDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature();
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
	struct Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics
	{
		struct _Script_MainSoundPlugin_eventSFXVolumeDelegate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::NewProp_WidgetSFXVolume = { "WidgetSFXVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MainSoundPlugin_eventSFXVolumeDelegate_Parms, WidgetSFXVolume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::NewProp_WidgetSFXVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MainSoundPlugin, nullptr, "SFXVolumeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::_Script_MainSoundPlugin_eventSFXVolumeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::_Script_MainSoundPlugin_eventSFXVolumeDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSFXVolumeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SFXVolumeDelegate, float WidgetSFXVolume)
{
	struct _Script_MainSoundPlugin_eventSFXVolumeDelegate_Parms
	{
		float WidgetSFXVolume;
	};
	_Script_MainSoundPlugin_eventSFXVolumeDelegate_Parms Parms;
	Parms.WidgetSFXVolume=WidgetSFXVolume;
	SFXVolumeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMainSoundWidget::execSetWidgetSFXVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetSFXVolume_Implementation(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainSoundWidget::execSetWidgetMusicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetMusicVolume_Implementation(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainSoundWidget::execSetWidgetMasterVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetMasterVolume_Implementation(Z_Param_Volume);
		P_NATIVE_END;
	}
	struct MainSoundWidget_eventSetWidgetMasterVolume_Parms
	{
		float Volume;
	};
	struct MainSoundWidget_eventSetWidgetMusicVolume_Parms
	{
		float Volume;
	};
	struct MainSoundWidget_eventSetWidgetSFXVolume_Parms
	{
		float Volume;
	};
	static FName NAME_UMainSoundWidget_SetWidgetMasterVolume = FName(TEXT("SetWidgetMasterVolume"));
	void UMainSoundWidget::SetWidgetMasterVolume(float Volume)
	{
		MainSoundWidget_eventSetWidgetMasterVolume_Parms Parms;
		Parms.Volume=Volume;
		ProcessEvent(FindFunctionChecked(NAME_UMainSoundWidget_SetWidgetMasterVolume),&Parms);
	}
	static FName NAME_UMainSoundWidget_SetWidgetMusicVolume = FName(TEXT("SetWidgetMusicVolume"));
	void UMainSoundWidget::SetWidgetMusicVolume(float Volume)
	{
		MainSoundWidget_eventSetWidgetMusicVolume_Parms Parms;
		Parms.Volume=Volume;
		ProcessEvent(FindFunctionChecked(NAME_UMainSoundWidget_SetWidgetMusicVolume),&Parms);
	}
	static FName NAME_UMainSoundWidget_SetWidgetSFXVolume = FName(TEXT("SetWidgetSFXVolume"));
	void UMainSoundWidget::SetWidgetSFXVolume(float Volume)
	{
		MainSoundWidget_eventSetWidgetSFXVolume_Parms Parms;
		Parms.Volume=Volume;
		ProcessEvent(FindFunctionChecked(NAME_UMainSoundWidget_SetWidgetSFXVolume),&Parms);
	}
	void UMainSoundWidget::StaticRegisterNativesUMainSoundWidget()
	{
		UClass* Class = UMainSoundWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetMasterVolume", &UMainSoundWidget::execSetWidgetMasterVolume },
			{ "SetWidgetMusicVolume", &UMainSoundWidget::execSetWidgetMusicVolume },
			{ "SetWidgetSFXVolume", &UMainSoundWidget::execSetWidgetSFXVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundWidget_eventSetWidgetMasterVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @param Volume \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
		{ "ToolTip", "\xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@param Volume \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundWidget, nullptr, "SetWidgetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::PropPointers), sizeof(MainSoundWidget_eventSetWidgetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundWidget_eventSetWidgetMasterVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundWidget_eventSetWidgetMusicVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @param Volume \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
		{ "ToolTip", "\xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@param Volume \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundWidget, nullptr, "SetWidgetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::PropPointers), sizeof(MainSoundWidget_eventSetWidgetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundWidget_eventSetWidgetMusicVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundWidget_eventSetWidgetSFXVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @param Volume \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
		{ "ToolTip", "\xec\xa0\x84\xeb\x8b\xac\xeb\xb0\x9b\xec\x9d\x80 \xec\x8b\xa4\xec\x88\x98\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@param Volume \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xed\x81\xac\xea\xb8\xb0 \xea\xb0\x92" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundWidget, nullptr, "SetWidgetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::PropPointers), sizeof(MainSoundWidget_eventSetWidgetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundWidget_eventSetWidgetSFXVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChangedMusicVolume_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangedMusicVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChangedSFXVolume_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangedSFXVolume;
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
		{ &Z_Construct_UFunction_UMainSoundWidget_SetWidgetMasterVolume, "SetWidgetMasterVolume" }, // 1427922708
		{ &Z_Construct_UFunction_UMainSoundWidget_SetWidgetMusicVolume, "SetWidgetMusicVolume" }, // 1919816579
		{ &Z_Construct_UFunction_UMainSoundWidget_SetWidgetSFXVolume, "SetWidgetSFXVolume" }, // 1554471721
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMusicVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMusicVolume = { "OnChangedMusicVolume", nullptr, (EPropertyFlags)0x00101000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainSoundWidget, OnChangedMusicVolume), Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMusicVolume_MetaData), Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMusicVolume_MetaData) }; // 2399065907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedSFXVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/MainSoundWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedSFXVolume = { "OnChangedSFXVolume", nullptr, (EPropertyFlags)0x00101000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainSoundWidget, OnChangedSFXVolume), Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedSFXVolume_MetaData), Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedSFXVolume_MetaData) }; // 3617006535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainSoundWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMasterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetMusicVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_WidgetSFXVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMasterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedMusicVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainSoundWidget_Statics::NewProp_OnChangedSFXVolume,
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
		{ Z_Construct_UClass_UMainSoundWidget, UMainSoundWidget::StaticClass, TEXT("UMainSoundWidget"), &Z_Registration_Info_UClass_UMainSoundWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainSoundWidget), 2182627969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_151633280(TEXT("/Script/MainSoundPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
