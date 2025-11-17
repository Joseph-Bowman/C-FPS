// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSProjectFilesPlayerController.h"

#ifdef FPSPROJECTFILES_FPSProjectFilesPlayerController_generated_h
#error "FPSProjectFilesPlayerController.generated.h already included, missing '#pragma once' in FPSProjectFilesPlayerController.h"
#endif
#define FPSPROJECTFILES_FPSProjectFilesPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSProjectFilesPlayerController *****************************************
FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesPlayerController_NoRegister();

#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectFilesPlayerController(); \
	friend struct Z_Construct_UClass_AFPSProjectFilesPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSProjectFilesPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProjectFiles"), Z_Construct_UClass_AFPSProjectFilesPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFPSProjectFilesPlayerController)


#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSProjectFilesPlayerController(AFPSProjectFilesPlayerController&&) = delete; \
	AFPSProjectFilesPlayerController(const AFPSProjectFilesPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectFilesPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectFilesPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectFilesPlayerController) \
	NO_API virtual ~AFPSProjectFilesPlayerController();


#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesPlayerController_h_17_PROLOG
#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSProjectFilesPlayerController;

// ********** End Class AFPSProjectFilesPlayerController *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
