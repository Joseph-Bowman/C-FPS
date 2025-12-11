// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPS_ProjectGameMode.h"

#ifdef FPS_PROJECT_FPS_ProjectGameMode_generated_h
#error "FPS_ProjectGameMode.generated.h already included, missing '#pragma once' in FPS_ProjectGameMode.h"
#endif
#define FPS_PROJECT_FPS_ProjectGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPS_ProjectGameMode *****************************************************
FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectGameMode_NoRegister();

#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_ProjectGameMode(); \
	friend struct Z_Construct_UClass_AFPS_ProjectGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPS_ProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Project"), Z_Construct_UClass_AFPS_ProjectGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFPS_ProjectGameMode)


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPS_ProjectGameMode(AFPS_ProjectGameMode&&) = delete; \
	AFPS_ProjectGameMode(const AFPS_ProjectGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_ProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_ProjectGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPS_ProjectGameMode) \
	NO_API virtual ~AFPS_ProjectGameMode();


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectGameMode_h_12_PROLOG
#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPS_ProjectGameMode;

// ********** End Class AFPS_ProjectGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
