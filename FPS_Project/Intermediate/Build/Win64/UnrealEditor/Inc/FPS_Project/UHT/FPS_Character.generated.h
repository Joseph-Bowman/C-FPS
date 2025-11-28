// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPS/FPS_Character.h"

#ifdef FPS_PROJECT_FPS_Character_generated_h
#error "FPS_Character.generated.h already included, missing '#pragma once' in FPS_Character.h"
#endif
#define FPS_PROJECT_FPS_Character_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPS_Character ***********************************************************
FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_Character_NoRegister();

#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_Character(); \
	friend struct Z_Construct_UClass_AFPS_Character_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_Character_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPS_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Project"), Z_Construct_UClass_AFPS_Character_NoRegister) \
	DECLARE_SERIALIZER(AFPS_Character)


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPS_Character(AFPS_Character&&) = delete; \
	AFPS_Character(const AFPS_Character&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_Character) \
	NO_API virtual ~AFPS_Character();


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h_12_PROLOG
#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h_15_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPS_Character;

// ********** End Class AFPS_Character *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
