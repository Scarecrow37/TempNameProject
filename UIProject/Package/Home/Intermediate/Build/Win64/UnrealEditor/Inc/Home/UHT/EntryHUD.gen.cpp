// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Home/Public/EntryHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntryHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	HOME_API UClass* Z_Construct_UClass_AEntryHUD();
	HOME_API UClass* Z_Construct_UClass_AEntryHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Home();
// End Cross Module References
	void AEntryHUD::StaticRegisterNativesAEntryHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEntryHUD);
	UClass* Z_Construct_UClass_AEntryHUD_NoRegister()
	{
		return AEntryHUD::StaticClass();
	}
	struct Z_Construct_UClass_AEntryHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEntryHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Home,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEntryHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEntryHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "EntryHUD.h" },
		{ "ModuleRelativePath", "Public/EntryHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEntryHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEntryHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEntryHUD_Statics::ClassParams = {
		&AEntryHUD::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEntryHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AEntryHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEntryHUD()
	{
		if (!Z_Registration_Info_UClass_AEntryHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEntryHUD.OuterSingleton, Z_Construct_UClass_AEntryHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEntryHUD.OuterSingleton;
	}
	template<> HOME_API UClass* StaticClass<AEntryHUD>()
	{
		return AEntryHUD::StaticClass();
	}
	AEntryHUD::AEntryHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEntryHUD);
	AEntryHUD::~AEntryHUD() {}
	struct Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEntryHUD, AEntryHUD::StaticClass, TEXT("AEntryHUD"), &Z_Registration_Info_UClass_AEntryHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEntryHUD), 1282528848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryHUD_h_3590697156(TEXT("/Script/Home"),
		Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
