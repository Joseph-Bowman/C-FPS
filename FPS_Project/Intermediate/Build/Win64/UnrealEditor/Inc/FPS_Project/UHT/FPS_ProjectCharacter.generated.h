// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPS_ProjectCharacter.h"

#ifdef FPS_PROJECT_FPS_ProjectCharacter_generated_h
#error "FPS_ProjectCharacter.generated.h already included, missing '#pragma once' in FPS_ProjectCharacter.h"
#endif
#define FPS_PROJECT_FPS_ProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPS_ProjectCharacter ****************************************************
#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectCharacter_NoRegister();

#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_ProjectCharacter(); \
	friend struct Z_Construct_UClass_AFPS_ProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPS_ProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Project"), Z_Construct_UClass_AFPS_ProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFPS_ProjectCharacter)


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPS_ProjectCharacter(AFPS_ProjectCharacter&&) = delete; \
	AFPS_ProjectCharacter(const AFPS_ProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_ProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_ProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPS_ProjectCharacter) \
	NO_API virtual ~AFPS_ProjectCharacter();


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCharacter_h_21_PROLOG
#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPS_ProjectCharacter;

// ********** End Class AFPS_ProjectCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
