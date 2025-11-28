// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_ProjectCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPS_ProjectCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectCameraManager();
FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_ProjectCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPS_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPS_ProjectCameraManager ************************************************
void AFPS_ProjectCameraManager::StaticRegisterNativesAFPS_ProjectCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPS_ProjectCameraManager;
UClass* AFPS_ProjectCameraManager::GetPrivateStaticClass()
{
	using TClass = AFPS_ProjectCameraManager;
	if (!Z_Registration_Info_UClass_AFPS_ProjectCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPS_ProjectCameraManager"),
			Z_Registration_Info_UClass_AFPS_ProjectCameraManager.InnerSingleton,
			StaticRegisterNativesAFPS_ProjectCameraManager,
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
	return Z_Registration_Info_UClass_AFPS_ProjectCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPS_ProjectCameraManager_NoRegister()
{
	return AFPS_ProjectCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPS_ProjectCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "FPS_ProjectCameraManager.h" },
		{ "ModuleRelativePath", "FPS_ProjectCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_ProjectCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPS_ProjectCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_FPS_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_ProjectCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_ProjectCameraManager_Statics::ClassParams = {
	&AFPS_ProjectCameraManager::StaticClass,
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
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_ProjectCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_ProjectCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPS_ProjectCameraManager()
{
	if (!Z_Registration_Info_UClass_AFPS_ProjectCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_ProjectCameraManager.OuterSingleton, Z_Construct_UClass_AFPS_ProjectCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPS_ProjectCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_ProjectCameraManager);
AFPS_ProjectCameraManager::~AFPS_ProjectCameraManager() {}
// ********** End Class AFPS_ProjectCameraManager **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h__Script_FPS_Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_ProjectCameraManager, AFPS_ProjectCameraManager::StaticClass, TEXT("AFPS_ProjectCameraManager"), &Z_Registration_Info_UClass_AFPS_ProjectCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_ProjectCameraManager), 364980038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h__Script_FPS_Project_2881178664(TEXT("/Script/FPS_Project"),
	Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h__Script_FPS_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_ProjectCameraManager_h__Script_FPS_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
