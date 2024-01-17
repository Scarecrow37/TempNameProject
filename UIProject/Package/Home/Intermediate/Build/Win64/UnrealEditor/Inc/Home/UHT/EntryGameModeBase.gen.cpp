// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Home/Public/EntryGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntryGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	HOME_API UClass* Z_Construct_UClass_AEntryGameModeBase();
	HOME_API UClass* Z_Construct_UClass_AEntryGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Home();
// End Cross Module References
	void AEntryGameModeBase::StaticRegisterNativesAEntryGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEntryGameModeBase);
	UClass* Z_Construct_UClass_AEntryGameModeBase_NoRegister()
	{
		return AEntryGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEntryGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEntryGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Home,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEntryGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEntryGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EntryGameModeBase.h" },
		{ "ModuleRelativePath", "Public/EntryGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEntryGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEntryGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEntryGameModeBase_Statics::ClassParams = {
		&AEntryGameModeBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEntryGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEntryGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEntryGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AEntryGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEntryGameModeBase.OuterSingleton, Z_Construct_UClass_AEntryGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEntryGameModeBase.OuterSingleton;
	}
	template<> HOME_API UClass* StaticClass<AEntryGameModeBase>()
	{
		return AEntryGameModeBase::StaticClass();
	}
	AEntryGameModeBase::AEntryGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEntryGameModeBase);
	AEntryGameModeBase::~AEntryGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEntryGameModeBase, AEntryGameModeBase::StaticClass, TEXT("AEntryGameModeBase"), &Z_Registration_Info_UClass_AEntryGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEntryGameModeBase), 3744423226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryGameModeBase_h_3380656274(TEXT("/Script/Home"),
		Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_work_TempNameProject_UIProject_Package_Home_HostProject_Plugins_Home_Source_Home_Public_EntryGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
