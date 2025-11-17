// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSProjectFilesCharacter.h"

#ifdef FPSPROJECTFILES_FPSProjectFilesCharacter_generated_h
#error "FPSProjectFilesCharacter.generated.h already included, missing '#pragma once' in FPSProjectFilesCharacter.h"
#endif
#define FPSPROJECTFILES_FPSProjectFilesCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSProjectFilesCharacter ************************************************
#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesCharacter_NoRegister();

#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectFilesCharacter(); \
	friend struct Z_Construct_UClass_AFPSProjectFilesCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSProjectFilesCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProjectFiles"), Z_Construct_UClass_AFPSProjectFilesCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFPSProjectFilesCharacter)


#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSProjectFilesCharacter(AFPSProjectFilesCharacter&&) = delete; \
	AFPSProjectFilesCharacter(const AFPSProjectFilesCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectFilesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectFilesCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectFilesCharacter) \
	NO_API virtual ~AFPSProjectFilesCharacter();


#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCharacter_h_21_PROLOG
#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSProjectFilesCharacter;

// ********** End Class AFPSProjectFilesCharacter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
