// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeLevelGameModePlugin/Public/HomePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomePlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	HOMELEVELGAMEMODEPLUGIN_API UClass* Z_Construct_UClass_AHomePlayerController();
	HOMELEVELGAMEMODEPLUGIN_API UClass* Z_Construct_UClass_AHomePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HomeLevelGameModePlugin();
// End Cross Module References
	void AHomePlayerController::StaticRegisterNativesAHomePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHomePlayerController);
	UClass* Z_Construct_UClass_AHomePlayerController_NoRegister()
	{
		return AHomePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AHomePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHomePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeLevelGameModePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHomePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* HomeLevel \xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\x98\xeb\x8a\x94 PlayerController Class \xec\x9e\x85\xeb\x8b\x88\xeb\x8b\xa4.\n*/" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HomePlayerController.h" },
		{ "ModuleRelativePath", "Public/HomePlayerController.h" },
		{ "ToolTip", "HomeLevel \xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xeb\x90\x98\xeb\x8a\x94 PlayerController Class \xec\x9e\x85\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHomePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHomePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHomePlayerController_Statics::ClassParams = {
		&AHomePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHomePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHomePlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHomePlayerController()
	{
		if (!Z_Registration_Info_UClass_AHomePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHomePlayerController.OuterSingleton, Z_Construct_UClass_AHomePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHomePlayerController.OuterSingleton;
	}
	template<> HOMELEVELGAMEMODEPLUGIN_API UClass* StaticClass<AHomePlayerController>()
	{
		return AHomePlayerController::StaticClass();
	}
	AHomePlayerController::AHomePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHomePlayerController);
	AHomePlayerController::~AHomePlayerController() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_HomeLevelGameModePlugin_Source_HomeLevelGameModePlugin_Public_HomePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HomeLevelGameModePlugin_Source_HomeLevelGameModePlugin_Public_HomePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHomePlayerController, AHomePlayerController::StaticClass, TEXT("AHomePlayerController"), &Z_Registration_Info_UClass_AHomePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHomePlayerController), 4166402278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HomeLevelGameModePlugin_Source_HomeLevelGameModePlugin_Public_HomePlayerController_h_101911848(TEXT("/Script/HomeLevelGameModePlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_HomeLevelGameModePlugin_Source_HomeLevelGameModePlugin_Public_HomePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_HomeLevelGameModePlugin_Source_HomeLevelGameModePlugin_Public_HomePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
