// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPS_ProjectCameraManager.h"

#ifdef FPS_PROJECT_FPS_ProjectCameraManager_generated_h
#error "FPS_ProjectCameraManager.generated.h already included, missing '#pragma once' in FPS_ProjectCameraManager.h"
#endif
#define FPS_PROJECT_FPS_ProjectCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPS_ProjectCameraManager ************************************************
FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectCameraManager_NoRegister();

#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_ProjectCameraManager(); \
	friend struct Z_Construct_UClass_AFPS_ProjectCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPS_ProjectCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Project"), Z_Construct_UClass_AFPS_ProjectCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AFPS_ProjectCameraManager)


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPS_ProjectCameraManager(AFPS_ProjectCameraManager&&) = delete; \
	AFPS_ProjectCameraManager(const AFPS_ProjectCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_ProjectCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_ProjectCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_ProjectCameraManager) \
	NO_API virtual ~AFPS_ProjectCameraManager();


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h_13_PROLOG
#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPS_ProjectCameraManager;

// ********** End Class AFPS_ProjectCameraManager **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
