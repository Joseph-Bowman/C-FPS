// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPS/UFPS_CharacterMovementComponent.h"

#ifdef FPS_PROJECT_UFPS_CharacterMovementComponent_generated_h
#error "UFPS_CharacterMovementComponent.generated.h already included, missing '#pragma once' in UFPS_CharacterMovementComponent.h"
#endif
#define FPS_PROJECT_UFPS_CharacterMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUFPS_CharacterMovementComponent *****************************************
FPS_PROJECT_API UClass* Z_Construct_UClass_UUFPS_CharacterMovementComponent_NoRegister();

#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUFPS_CharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UUFPS_CharacterMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPS_PROJECT_API UClass* Z_Construct_UClass_UUFPS_CharacterMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UUFPS_CharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Project"), Z_Construct_UClass_UUFPS_CharacterMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UUFPS_CharacterMovementComponent)


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUFPS_CharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUFPS_CharacterMovementComponent(UUFPS_CharacterMovementComponent&&) = delete; \
	UUFPS_CharacterMovementComponent(const UUFPS_CharacterMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUFPS_CharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUFPS_CharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUFPS_CharacterMovementComponent) \
	NO_API virtual ~UUFPS_CharacterMovementComponent();


#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h_13_PROLOG
#define FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUFPS_CharacterMovementComponent;

// ********** End Class UUFPS_CharacterMovementComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
