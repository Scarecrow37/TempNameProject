// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHome_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Home;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Home()
	{
		if (!Z_Registration_Info_UPackage__Script_Home.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Home",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB41C3B66,
				0x309F7A92,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Home.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Home.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Home(Z_Construct_UPackage__Script_Home, TEXT("/Script/Home"), Z_Registration_Info_UPackage__Script_Home, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB41C3B66, 0x309F7A92));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
