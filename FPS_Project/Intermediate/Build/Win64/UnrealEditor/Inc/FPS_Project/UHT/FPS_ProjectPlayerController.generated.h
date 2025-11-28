// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPS_ProjectPlayerController.h"

#ifdef FPS_PROJECT_FPS_ProjectPlayerController_generated_h
#error "FPS_ProjectPlayerController.generated.h already included, missing '#pragma once' in FPS_ProjectPlayerController.h"
#endif
#define FPS_PROJECT_FPS_ProjectPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPS_ProjectPlayerController *********************************************
FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectPlayerController_NoRegister();

#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_ProjectPlayerController(); \
	friend struct Z_Construct_UClass_AFPS_ProjectPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPS_ProjectPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Project"), Z_Construct_UClass_AFPS_ProjectPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFPS_ProjectPlayerController)


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPS_ProjectPlayerController(AFPS_ProjectPlayerController&&) = delete; \
	AFPS_ProjectPlayerController(const AFPS_ProjectPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_ProjectPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_ProjectPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPS_ProjectPlayerController) \
	NO_API virtual ~AFPS_ProjectPlayerController();


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectPlayerController_h_17_PROLOG
#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPS_ProjectPlayerController;

// ********** End Class AFPS_ProjectPlayerController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
