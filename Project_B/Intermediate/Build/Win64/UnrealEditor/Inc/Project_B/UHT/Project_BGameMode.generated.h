// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Project_BGameMode.h"

#ifdef PROJECT_B_Project_BGameMode_generated_h
#error "Project_BGameMode.generated.h already included, missing '#pragma once' in Project_BGameMode.h"
#endif
#define PROJECT_B_Project_BGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProject_BGameMode *******************************************************
PROJECT_B_API UClass* Z_Construct_UClass_AProject_BGameMode_NoRegister();

#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject_BGameMode(); \
	friend struct Z_Construct_UClass_AProject_BGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_B_API UClass* Z_Construct_UClass_AProject_BGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AProject_BGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_B"), Z_Construct_UClass_AProject_BGameMode_NoRegister) \
	DECLARE_SERIALIZER(AProject_BGameMode)


#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProject_BGameMode(AProject_BGameMode&&) = delete; \
	AProject_BGameMode(const AProject_BGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject_BGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject_BGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProject_BGameMode) \
	NO_API virtual ~AProject_BGameMode();


#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BGameMode_h_12_PROLOG
#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProject_BGameMode;

// ********** End Class AProject_BGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
