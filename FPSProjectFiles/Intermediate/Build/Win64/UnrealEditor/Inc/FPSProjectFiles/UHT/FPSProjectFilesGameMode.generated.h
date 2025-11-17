// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSProjectFilesGameMode.h"

#ifdef FPSPROJECTFILES_FPSProjectFilesGameMode_generated_h
#error "FPSProjectFilesGameMode.generated.h already included, missing '#pragma once' in FPSProjectFilesGameMode.h"
#endif
#define FPSPROJECTFILES_FPSProjectFilesGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSProjectFilesGameMode *************************************************
FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesGameMode_NoRegister();

#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectFilesGameMode(); \
	friend struct Z_Construct_UClass_AFPSProjectFilesGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSProjectFilesGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProjectFiles"), Z_Construct_UClass_AFPSProjectFilesGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFPSProjectFilesGameMode)


#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSProjectFilesGameMode(AFPSProjectFilesGameMode&&) = delete; \
	AFPSProjectFilesGameMode(const AFPSProjectFilesGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectFilesGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectFilesGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectFilesGameMode) \
	NO_API virtual ~AFPSProjectFilesGameMode();


#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h_12_PROLOG
#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSProjectFilesGameMode;

// ********** End Class AFPSProjectFilesGameMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
