// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroPlugin/Public/IntroUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroUserWidget() {}
// Cross Module References
	INTROPLUGIN_API UClass* Z_Construct_UClass_UIntroUserWidget();
	INTROPLUGIN_API UClass* Z_Construct_UClass_UIntroUserWidget_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_IntroPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UIntroUserWidget::execOnVideoEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVideoEnd_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UIntroUserWidget_OnVideoEnd = FName(TEXT("OnVideoEnd"));
	void UIntroUserWidget::OnVideoEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UIntroUserWidget_OnVideoEnd),NULL);
	}
	void UIntroUserWidget::StaticRegisterNativesUIntroUserWidget()
	{
		UClass* Class = UIntroUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnVideoEnd", &UIntroUserWidget::execOnVideoEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIntroUserWidget_OnVideoEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIntroUserWidget_OnVideoEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "[Custom]VideoOptions" },
		{ "ModuleRelativePath", "Public/IntroUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntroUserWidget_OnVideoEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIntroUserWidget, nullptr, "OnVideoEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntroUserWidget_OnVideoEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntroUserWidget_OnVideoEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UIntroUserWidget_OnVideoEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntroUserWidget_OnVideoEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntroUserWidget);
	UClass* Z_Construct_UClass_UIntroUserWidget_NoRegister()
	{
		return UIntroUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UIntroUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntroMediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IntroMediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntroMediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IntroMediaSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIntroUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntroUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIntroUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIntroUserWidget_OnVideoEnd, "OnVideoEnd" }, // 3431277208
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntroUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntroUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "IntroUserWidget.h" },
		{ "ModuleRelativePath", "Public/IntroUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "[Custom]VideoOptions" },
		{ "ModuleRelativePath", "Public/IntroUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaPlayer = { "IntroMediaPlayer", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntroUserWidget, IntroMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaPlayer_MetaData), Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "[Custom]VideoOptions" },
		{ "ModuleRelativePath", "Public/IntroUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaSource = { "IntroMediaSource", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntroUserWidget, IntroMediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaSource_MetaData), Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaSource_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIntroUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntroUserWidget_Statics::NewProp_IntroMediaSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIntroUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntroUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntroUserWidget_Statics::ClassParams = {
		&UIntroUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIntroUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIntroUserWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIntroUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UIntroUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntroUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIntroUserWidget()
	{
		if (!Z_Registration_Info_UClass_UIntroUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntroUserWidget.OuterSingleton, Z_Construct_UClass_UIntroUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIntroUserWidget.OuterSingleton;
	}
	template<> INTROPLUGIN_API UClass* StaticClass<UIntroUserWidget>()
	{
		return UIntroUserWidget::StaticClass();
	}
	UIntroUserWidget::UIntroUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIntroUserWidget);
	UIntroUserWidget::~UIntroUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Work_WWH_IntroScreen002_Packages_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_WWH_IntroScreen002_Packages_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIntroUserWidget, UIntroUserWidget::StaticClass, TEXT("UIntroUserWidget"), &Z_Registration_Info_UClass_UIntroUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntroUserWidget), 656799487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_WWH_IntroScreen002_Packages_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroUserWidget_h_2955831477(TEXT("/Script/IntroPlugin"),
		Z_CompiledInDeferFile_FID_Work_WWH_IntroScreen002_Packages_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_WWH_IntroScreen002_Packages_IntroPlugin_HostProject_Plugins_IntroPlugin_Source_IntroPlugin_Public_IntroUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
