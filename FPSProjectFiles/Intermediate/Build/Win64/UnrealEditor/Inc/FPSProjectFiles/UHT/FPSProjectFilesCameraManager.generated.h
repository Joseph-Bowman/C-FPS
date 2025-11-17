// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSProjectFilesCameraManager.h"

#ifdef FPSPROJECTFILES_FPSProjectFilesCameraManager_generated_h
#error "FPSProjectFilesCameraManager.generated.h already included, missing '#pragma once' in FPSProjectFilesCameraManager.h"
#endif
#define FPSPROJECTFILES_FPSProjectFilesCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSProjectFilesCameraManager ********************************************
FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesCameraManager_NoRegister();

#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectFilesCameraManager(); \
	friend struct Z_Construct_UClass_AFPSProjectFilesCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSProjectFilesCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProjectFiles"), Z_Construct_UClass_AFPSProjectFilesCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AFPSProjectFilesCameraManager)


#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSProjectFilesCameraManager(AFPSProjectFilesCameraManager&&) = delete; \
	AFPSProjectFilesCameraManager(const AFPSProjectFilesCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectFilesCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectFilesCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectFilesCameraManager) \
	NO_API virtual ~AFPSProjectFilesCameraManager();


#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h_13_PROLOG
#define FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSProjectFilesCameraManager;

// ********** End Class AFPSProjectFilesCameraManager **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
