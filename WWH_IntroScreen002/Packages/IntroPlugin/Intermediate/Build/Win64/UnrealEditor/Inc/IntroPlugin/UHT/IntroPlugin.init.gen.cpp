// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IntroPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IntroPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_IntroPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IntroPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA25700A8,
				0x49E38E22,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IntroPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IntroPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IntroPlugin(Z_Construct_UPackage__Script_IntroPlugin, TEXT("/Script/IntroPlugin"), Z_Registration_Info_UPackage__Script_IntroPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA25700A8, 0x49E38E22));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
