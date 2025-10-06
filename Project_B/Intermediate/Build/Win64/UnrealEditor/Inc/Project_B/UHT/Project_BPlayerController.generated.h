// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Project_BPlayerController.h"

#ifdef PROJECT_B_Project_BPlayerController_generated_h
#error "Project_BPlayerController.generated.h already included, missing '#pragma once' in Project_BPlayerController.h"
#endif
#define PROJECT_B_Project_BPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProject_BPlayerController ***********************************************
PROJECT_B_API UClass* Z_Construct_UClass_AProject_BPlayerController_NoRegister();

#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject_BPlayerController(); \
	friend struct Z_Construct_UClass_AProject_BPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_B_API UClass* Z_Construct_UClass_AProject_BPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AProject_BPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_B"), Z_Construct_UClass_AProject_BPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AProject_BPlayerController)


#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProject_BPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProject_BPlayerController(AProject_BPlayerController&&) = delete; \
	AProject_BPlayerController(const AProject_BPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject_BPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject_BPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProject_BPlayerController) \
	NO_API virtual ~AProject_BPlayerController();


#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h_15_PROLOG
#define FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProject_BPlayerController;

// ********** End Class AProject_BPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Unreal_Study_Project_B_Source_Project_B_Project_BPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
