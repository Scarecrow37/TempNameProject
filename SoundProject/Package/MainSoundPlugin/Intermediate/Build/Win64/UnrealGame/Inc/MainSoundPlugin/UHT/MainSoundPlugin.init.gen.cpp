// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainSoundPlugin_init() {}
	MAINSOUNDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature();
	MAINSOUNDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature();
	MAINSOUNDPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MainSoundPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MainSoundPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_MainSoundPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MainSoundPlugin_MasterVolumeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MainSoundPlugin_MusicVolumeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MainSoundPlugin_SFXVolumeDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MainSoundPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCED3E1BF,
				0x04280A51,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MainSoundPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MainSoundPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MainSoundPlugin(Z_Construct_UPackage__Script_MainSoundPlugin, TEXT("/Script/MainSoundPlugin"), Z_Registration_Info_UPackage__Script_MainSoundPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCED3E1BF, 0x04280A51));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
