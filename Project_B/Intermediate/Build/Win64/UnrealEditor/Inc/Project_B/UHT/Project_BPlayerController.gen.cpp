// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_B/Project_BPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProject_BPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECT_B_API UClass* Z_Construct_UClass_AProject_BPlayerController();
PROJECT_B_API UClass* Z_Construct_UClass_AProject_BPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_B();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProject_BPlayerController ***********************************************
void AProject_BPlayerController::StaticRegisterNativesAProject_BPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProject_BPlayerController;
UClass* AProject_BPlayerController::GetPrivateStaticClass()
{
	using TClass = AProject_BPlayerController;
	if (!Z_Registration_Info_UClass_AProject_BPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Project_BPlayerController"),
			Z_Registration_Info_UClass_AProject_BPlayerController.InnerSingleton,
			StaticRegisterNativesAProject_BPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AProject_BPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AProject_BPlayerController_NoRegister()
{
	return AProject_BPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProject_BPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Project_BPlayerController.h" },
		{ "ModuleRelativePath", "Project_BPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "Project_BPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_BPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_BPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProject_BPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_BPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProject_BPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_BPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_BPlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_BPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProject_BPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_BPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_BPlayerController_Statics::ClassParams = {
	&AProject_BPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProject_BPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProject_BPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_BPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_BPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject_BPlayerController()
{
	if (!Z_Registration_Info_UClass_AProject_BPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_BPlayerController.OuterSingleton, Z_Construct_UClass_AProject_BPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject_BPlayerController.OuterSingleton;
}
AProject_BPlayerController::AProject_BPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_BPlayerController);
AProject_BPlayerController::~AProject_BPlayerController() {}
// ********** End Class AProject_BPlayerController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h__Script_Project_B_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject_BPlayerController, AProject_BPlayerController::StaticClass, TEXT("AProject_BPlayerController"), &Z_Registration_Info_UClass_AProject_BPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_BPlayerController), 389284031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h__Script_Project_B_1967871612(TEXT("/Script/Project_B"),
	Z_CompiledInDeferFile_FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h__Script_Project_B_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h__Script_Project_B_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
