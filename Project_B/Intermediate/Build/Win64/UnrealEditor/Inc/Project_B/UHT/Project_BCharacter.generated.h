// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Project_BCharacter.h"

#ifdef PROJECT_B_Project_BCharacter_generated_h
#error "Project_BCharacter.generated.h already included, missing '#pragma once' in Project_BCharacter.h"
#endif
#define PROJECT_B_Project_BCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProject_BCharacter ******************************************************
#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


PROJECT_B_API UClass* Z_Construct_UClass_AProject_BCharacter_NoRegister();

#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject_BCharacter(); \
	friend struct Z_Construct_UClass_AProject_BCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_B_API UClass* Z_Construct_UClass_AProject_BCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AProject_BCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_B"), Z_Construct_UClass_AProject_BCharacter_NoRegister) \
	DECLARE_SERIALIZER(AProject_BCharacter)


#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProject_BCharacter(AProject_BCharacter&&) = delete; \
	AProject_BCharacter(const AProject_BCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject_BCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject_BCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProject_BCharacter) \
	NO_API virtual ~AProject_BCharacter();


#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BCharacter_h_21_PROLOG
#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProject_BCharacter;

// ********** End Class AProject_BCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
