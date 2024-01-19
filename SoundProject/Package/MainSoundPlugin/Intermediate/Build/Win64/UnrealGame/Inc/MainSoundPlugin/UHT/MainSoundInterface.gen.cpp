// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainSoundPlugin/Public/MainSoundInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainSoundInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MAINSOUNDPLUGIN_API UClass* Z_Construct_UClass_UMainSoundInterface();
	MAINSOUNDPLUGIN_API UClass* Z_Construct_UClass_UMainSoundInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MainSoundPlugin();
// End Cross Module References
	DEFINE_FUNCTION(IMainSoundInterface::execSetSFXVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSFXVolume_Implementation(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMainSoundInterface::execGetSFXVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSFXVolume_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMainSoundInterface::execSetMusicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMusicVolume_Implementation(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMainSoundInterface::execGetMusicVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMusicVolume_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMainSoundInterface::execSetMasterVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMasterVolume_Implementation(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMainSoundInterface::execGetMasterVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMasterVolume_Implementation();
		P_NATIVE_END;
	}
	struct MainSoundInterface_eventGetMasterVolume_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		MainSoundInterface_eventGetMasterVolume_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct MainSoundInterface_eventGetMusicVolume_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		MainSoundInterface_eventGetMusicVolume_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct MainSoundInterface_eventGetSFXVolume_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		MainSoundInterface_eventGetSFXVolume_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct MainSoundInterface_eventSetMasterVolume_Parms
	{
		float Volume;
	};
	struct MainSoundInterface_eventSetMusicVolume_Parms
	{
		float Volume;
	};
	struct MainSoundInterface_eventSetSFXVolume_Parms
	{
		float Volume;
	};
	float IMainSoundInterface::GetMasterVolume()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMasterVolume instead.");
		MainSoundInterface_eventGetMasterVolume_Parms Parms;
		return Parms.ReturnValue;
	}
	float IMainSoundInterface::GetMusicVolume()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMusicVolume instead.");
		MainSoundInterface_eventGetMusicVolume_Parms Parms;
		return Parms.ReturnValue;
	}
	float IMainSoundInterface::GetSFXVolume()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSFXVolume instead.");
		MainSoundInterface_eventGetSFXVolume_Parms Parms;
		return Parms.ReturnValue;
	}
	void IMainSoundInterface::SetMasterVolume(float Volume)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMasterVolume instead.");
	}
	void IMainSoundInterface::SetMusicVolume(float Volume)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMusicVolume instead.");
	}
	void IMainSoundInterface::SetSFXVolume(float Volume)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSFXVolume instead.");
	}
	void UMainSoundInterface::StaticRegisterNativesUMainSoundInterface()
	{
		UClass* Class = UMainSoundInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMasterVolume", &IMainSoundInterface::execGetMasterVolume },
			{ "GetMusicVolume", &IMainSoundInterface::execGetMusicVolume },
			{ "GetSFXVolume", &IMainSoundInterface::execGetSFXVolume },
			{ "SetMasterVolume", &IMainSoundInterface::execSetMasterVolume },
			{ "SetMusicVolume", &IMainSoundInterface::execSetMusicVolume },
			{ "SetSFXVolume", &IMainSoundInterface::execSetSFXVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundInterface_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xac \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @return \xed\x98\x84\xec\x9e\xac \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xb5\xeb\x8b\x88\xeb\x8b\xa4.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundInterface.h" },
		{ "ToolTip", "\xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xac \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@return \xed\x98\x84\xec\x9e\xac \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xb5\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundInterface, nullptr, "GetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::PropPointers), sizeof(MainSoundInterface_eventGetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundInterface_eventGetMasterVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundInterface_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xac \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @return \xed\x98\x84\xec\x9e\xac \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xb5\xeb\x8b\x88\xeb\x8b\xa4.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundInterface.h" },
		{ "ToolTip", "\xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xac \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@return \xed\x98\x84\xec\x9e\xac \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xb5\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundInterface, nullptr, "GetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::PropPointers), sizeof(MainSoundInterface_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundInterface_eventGetMusicVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundInterface_eventGetSFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xac \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @return \xed\x98\x84\xec\x9e\xac \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xb5\xeb\x8b\x88\xeb\x8b\xa4.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundInterface.h" },
		{ "ToolTip", "\xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xac \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@return \xed\x98\x84\xec\x9e\xac \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xb5\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundInterface, nullptr, "GetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::PropPointers), sizeof(MainSoundInterface_eventGetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundInterface_eventGetSFXVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundInterface_eventSetMasterVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @param Volume \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundInterface.h" },
		{ "ToolTip", "\xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@param Volume \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\xa0\x84\xec\xb2\xb4 \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundInterface, nullptr, "SetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::PropPointers), sizeof(MainSoundInterface_eventSetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundInterface_eventSetMasterVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundInterface_eventSetMusicVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @param Volume \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundInterface.h" },
		{ "ToolTip", "\xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@param Volume \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xec\x9d\x8c\xec\x95\x85 \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundInterface, nullptr, "SetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::PropPointers), sizeof(MainSoundInterface_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundInterface_eventSetMusicVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainSoundInterface_eventSetSFXVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\n\x09* \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n\x09* @param Volume \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92\n\x09*/" },
		{ "ModuleRelativePath", "Public/MainSoundInterface.h" },
		{ "ToolTip", "\xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8 \xea\xb0\x92\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n@param Volume \xec\xa1\xb0\xec\xa0\x88\xed\x95\xa0 \xed\x9a\xa8\xea\xb3\xbc\xec\x9d\x8c \xeb\xb3\xbc\xeb\xa5\xa8 \xec\x8b\xa4\xec\x88\x98 \xea\xb0\x92" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainSoundInterface, nullptr, "SetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::PropPointers), sizeof(MainSoundInterface_eventSetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(MainSoundInterface_eventSetSFXVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainSoundInterface);
	UClass* Z_Construct_UClass_UMainSoundInterface_NoRegister()
	{
		return UMainSoundInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMainSoundInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainSoundInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MainSoundPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainSoundInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainSoundInterface_GetMasterVolume, "GetMasterVolume" }, // 3996373296
		{ &Z_Construct_UFunction_UMainSoundInterface_GetMusicVolume, "GetMusicVolume" }, // 700371302
		{ &Z_Construct_UFunction_UMainSoundInterface_GetSFXVolume, "GetSFXVolume" }, // 304428058
		{ &Z_Construct_UFunction_UMainSoundInterface_SetMasterVolume, "SetMasterVolume" }, // 344133
		{ &Z_Construct_UFunction_UMainSoundInterface_SetMusicVolume, "SetMusicVolume" }, // 1131834604
		{ &Z_Construct_UFunction_UMainSoundInterface_SetSFXVolume, "SetSFXVolume" }, // 1957915610
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainSoundInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MainSoundInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainSoundInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMainSoundInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainSoundInterface_Statics::ClassParams = {
		&UMainSoundInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainSoundInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainSoundInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMainSoundInterface()
	{
		if (!Z_Registration_Info_UClass_UMainSoundInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainSoundInterface.OuterSingleton, Z_Construct_UClass_UMainSoundInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainSoundInterface.OuterSingleton;
	}
	template<> MAINSOUNDPLUGIN_API UClass* StaticClass<UMainSoundInterface>()
	{
		return UMainSoundInterface::StaticClass();
	}
	UMainSoundInterface::UMainSoundInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainSoundInterface);
	UMainSoundInterface::~UMainSoundInterface() {}
	static FName NAME_UMainSoundInterface_GetMasterVolume = FName(TEXT("GetMasterVolume"));
	float IMainSoundInterface::Execute_GetMasterVolume(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMainSoundInterface::StaticClass()));
		MainSoundInterface_eventGetMasterVolume_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMainSoundInterface_GetMasterVolume);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMainSoundInterface*)(O->GetNativeInterfaceAddress(UMainSoundInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMasterVolume_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMainSoundInterface_GetMusicVolume = FName(TEXT("GetMusicVolume"));
	float IMainSoundInterface::Execute_GetMusicVolume(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMainSoundInterface::StaticClass()));
		MainSoundInterface_eventGetMusicVolume_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMainSoundInterface_GetMusicVolume);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMainSoundInterface*)(O->GetNativeInterfaceAddress(UMainSoundInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMusicVolume_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMainSoundInterface_GetSFXVolume = FName(TEXT("GetSFXVolume"));
	float IMainSoundInterface::Execute_GetSFXVolume(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMainSoundInterface::StaticClass()));
		MainSoundInterface_eventGetSFXVolume_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMainSoundInterface_GetSFXVolume);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMainSoundInterface*)(O->GetNativeInterfaceAddress(UMainSoundInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSFXVolume_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMainSoundInterface_SetMasterVolume = FName(TEXT("SetMasterVolume"));
	void IMainSoundInterface::Execute_SetMasterVolume(UObject* O, float Volume)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMainSoundInterface::StaticClass()));
		MainSoundInterface_eventSetMasterVolume_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMainSoundInterface_SetMasterVolume);
		if (Func)
		{
			Parms.Volume=Volume;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMainSoundInterface*)(O->GetNativeInterfaceAddress(UMainSoundInterface::StaticClass())))
		{
			I->SetMasterVolume_Implementation(Volume);
		}
	}
	static FName NAME_UMainSoundInterface_SetMusicVolume = FName(TEXT("SetMusicVolume"));
	void IMainSoundInterface::Execute_SetMusicVolume(UObject* O, float Volume)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMainSoundInterface::StaticClass()));
		MainSoundInterface_eventSetMusicVolume_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMainSoundInterface_SetMusicVolume);
		if (Func)
		{
			Parms.Volume=Volume;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMainSoundInterface*)(O->GetNativeInterfaceAddress(UMainSoundInterface::StaticClass())))
		{
			I->SetMusicVolume_Implementation(Volume);
		}
	}
	static FName NAME_UMainSoundInterface_SetSFXVolume = FName(TEXT("SetSFXVolume"));
	void IMainSoundInterface::Execute_SetSFXVolume(UObject* O, float Volume)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMainSoundInterface::StaticClass()));
		MainSoundInterface_eventSetSFXVolume_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMainSoundInterface_SetSFXVolume);
		if (Func)
		{
			Parms.Volume=Volume;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMainSoundInterface*)(O->GetNativeInterfaceAddress(UMainSoundInterface::StaticClass())))
		{
			I->SetSFXVolume_Implementation(Volume);
		}
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainSoundInterface, UMainSoundInterface::StaticClass, TEXT("UMainSoundInterface"), &Z_Registration_Info_UClass_UMainSoundInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainSoundInterface), 2439913152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_2464908031(TEXT("/Script/MainSoundPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MainSoundPlugin_Source_MainSoundPlugin_Public_MainSoundInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
