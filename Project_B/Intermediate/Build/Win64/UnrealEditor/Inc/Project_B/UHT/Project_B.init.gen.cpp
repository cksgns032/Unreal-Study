// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_B_init() {}
	PROJECT_B_API UFunction* Z_Construct_UDelegateFunction_Project_B_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Project_B;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Project_B()
	{
		if (!Z_Registration_Info_UPackage__Script_Project_B.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Project_B_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Project_B",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC1DA1204,
				0xEF32C0F3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Project_B.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Project_B.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Project_B(Z_Construct_UPackage__Script_Project_B, TEXT("/Script/Project_B"), Z_Registration_Info_UPackage__Script_Project_B, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC1DA1204, 0xEF32C0F3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
