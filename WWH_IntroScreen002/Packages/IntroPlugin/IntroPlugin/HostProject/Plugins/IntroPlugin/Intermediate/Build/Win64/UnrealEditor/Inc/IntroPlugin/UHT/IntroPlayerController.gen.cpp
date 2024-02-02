// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroPlugin/Public/IntroPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INTROPLUGIN_API UClass* Z_Construct_UClass_AIntroPlayerController();
	INTROPLUGIN_API UClass* Z_Construct_UClass_AIntroPlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IntroPlugin();
// End Cross Module References
	void AIntroPlayerController::StaticRegisterNativesAIntroPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIntroPlayerController);
	UClass* Z_Construct_UClass_AIntroPlayerController_NoRegister()
	{
		return AIntroPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AIntroPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntroWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntroWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_IntroWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntroIMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IntroIMC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkippingKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkippingKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsIntroSkipped_MetaData[];
#endif
		static void NewProp_IsIntroSkipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsIntroSkipped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntroPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "IntroPlayerController.h" },
		{ "ModuleRelativePath", "Public/IntroPlayerController.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IntroPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidget = { "IntroWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroPlayerController, IntroWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidget_MetaData), Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "[Custom]UIs" },
		{ "ModuleRelativePath", "Public/IntroPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidgetClass = { "IntroWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroPlayerController, IntroWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidgetClass_MetaData), Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroIMC_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "[Custom]Inputs" },
		{ "ModuleRelativePath", "Public/IntroPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroIMC = { "IntroIMC", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroPlayerController, IntroIMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroIMC_MetaData), Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroIMC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_SkippingKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "[Custom]Inputs" },
		{ "ModuleRelativePath", "Public/IntroPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_SkippingKey = { "SkippingKey", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroPlayerController, SkippingKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_SkippingKey_MetaData), Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_SkippingKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IsIntroSkipped_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "[Custom]Variables" },
		{ "ModuleRelativePath", "Public/IntroPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IsIntroSkipped_SetBit(void* Obj)
	{
		((AIntroPlayerController*)Obj)->IsIntroSkipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IsIntroSkipped = { "IsIntroSkipped", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIntroPlayerController), &Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IsIntroSkipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IsIntroSkipped_MetaData), Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IsIntroSkipped_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIntroPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IntroIMC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_SkippingKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroPlayerController_Statics::NewProp_IsIntroSkipped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntroPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroPlayerController_Statics::ClassParams = {
		&AIntroPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIntroPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIntroPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AIntroPlayerController()
	{
		if (!Z_Registration_Info_UClass_AIntroPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroPlayerController.OuterSingleton, Z_Construct_UClass_AIntroPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIntroPlayerController.OuterSingleton;
	}
	template<> INTROPLUGIN_API UClass* StaticClass<AIntroPlayerController>()
	{
		return AIntroPlayerController::StaticClass();
	}
	AIntroPlayerController::AIntroPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroPlayerController);
	AIntroPlayerController::~AIntroPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Work_UnrealEngine_TempNameProject_WWH_IntroScreen002_Packages_IntroPlugin_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngine_TempNameProject_WWH_IntroScreen002_Packages_IntroPlugin_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIntroPlayerController, AIntroPlayerController::StaticClass, TEXT("AIntroPlayerController"), &Z_Registration_Info_UClass_AIntroPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroPlayerController), 431997788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngine_TempNameProject_WWH_IntroScreen002_Packages_IntroPlugin_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroPlayerController_h_1374777272(TEXT("/Script/IntroPlugin"),
		Z_CompiledInDeferFile_FID_Work_UnrealEngine_TempNameProject_WWH_IntroScreen002_Packages_IntroPlugin_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngine_TempNameProject_WWH_IntroScreen002_Packages_IntroPlugin_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
