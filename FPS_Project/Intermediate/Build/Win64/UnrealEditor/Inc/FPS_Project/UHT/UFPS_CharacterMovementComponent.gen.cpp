// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/UFPS_CharacterMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUFPS_CharacterMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
FPS_PROJECT_API UClass* Z_Construct_UClass_UUFPS_CharacterMovementComponent();
FPS_PROJECT_API UClass* Z_Construct_UClass_UUFPS_CharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPS_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUFPS_CharacterMovementComponent *****************************************
void UUFPS_CharacterMovementComponent::StaticRegisterNativesUUFPS_CharacterMovementComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUFPS_CharacterMovementComponent;
UClass* UUFPS_CharacterMovementComponent::GetPrivateStaticClass()
{
	using TClass = UUFPS_CharacterMovementComponent;
	if (!Z_Registration_Info_UClass_UUFPS_CharacterMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UFPS_CharacterMovementComponent"),
			Z_Registration_Info_UClass_UUFPS_CharacterMovementComponent.InnerSingleton,
			StaticRegisterNativesUUFPS_CharacterMovementComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUFPS_CharacterMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UUFPS_CharacterMovementComponent_NoRegister()
{
	return UUFPS_CharacterMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUFPS_CharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FPS/UFPS_CharacterMovementComponent.h" },
		{ "ModuleRelativePath", "FPS/UFPS_CharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUFPS_CharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUFPS_CharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FPS_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUFPS_CharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUFPS_CharacterMovementComponent_Statics::ClassParams = {
	&UUFPS_CharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUFPS_CharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUFPS_CharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUFPS_CharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UUFPS_CharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUFPS_CharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UUFPS_CharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUFPS_CharacterMovementComponent.OuterSingleton;
}
UUFPS_CharacterMovementComponent::UUFPS_CharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUFPS_CharacterMovementComponent);
UUFPS_CharacterMovementComponent::~UUFPS_CharacterMovementComponent() {}
// ********** End Class UUFPS_CharacterMovementComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h__Script_FPS_Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUFPS_CharacterMovementComponent, UUFPS_CharacterMovementComponent::StaticClass, TEXT("UUFPS_CharacterMovementComponent"), &Z_Registration_Info_UClass_UUFPS_CharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUFPS_CharacterMovementComponent), 3882341706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h__Script_FPS_Project_3243668206(TEXT("/Script/FPS_Project"),
	Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h__Script_FPS_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_UFPS_CharacterMovementComponent_h__Script_FPS_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
