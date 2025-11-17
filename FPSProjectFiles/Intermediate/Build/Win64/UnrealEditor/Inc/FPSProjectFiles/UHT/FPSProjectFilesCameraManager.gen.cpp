// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProjectFilesCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSProjectFilesCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesCameraManager();
FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSProjectFiles();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSProjectFilesCameraManager ********************************************
void AFPSProjectFilesCameraManager::StaticRegisterNativesAFPSProjectFilesCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSProjectFilesCameraManager;
UClass* AFPSProjectFilesCameraManager::GetPrivateStaticClass()
{
	using TClass = AFPSProjectFilesCameraManager;
	if (!Z_Registration_Info_UClass_AFPSProjectFilesCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSProjectFilesCameraManager"),
			Z_Registration_Info_UClass_AFPSProjectFilesCameraManager.InnerSingleton,
			StaticRegisterNativesAFPSProjectFilesCameraManager,
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
	return Z_Registration_Info_UClass_AFPSProjectFilesCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSProjectFilesCameraManager_NoRegister()
{
	return AFPSProjectFilesCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSProjectFilesCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "FPSProjectFilesCameraManager.h" },
		{ "ModuleRelativePath", "FPSProjectFilesCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSProjectFilesCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSProjectFilesCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSProjectFiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectFilesCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSProjectFilesCameraManager_Statics::ClassParams = {
	&AFPSProjectFilesCameraManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectFilesCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSProjectFilesCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSProjectFilesCameraManager()
{
	if (!Z_Registration_Info_UClass_AFPSProjectFilesCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSProjectFilesCameraManager.OuterSingleton, Z_Construct_UClass_AFPSProjectFilesCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSProjectFilesCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectFilesCameraManager);
AFPSProjectFilesCameraManager::~AFPSProjectFilesCameraManager() {}
// ********** End Class AFPSProjectFilesCameraManager **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h__Script_FPSProjectFiles_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSProjectFilesCameraManager, AFPSProjectFilesCameraManager::StaticClass, TEXT("AFPSProjectFilesCameraManager"), &Z_Registration_Info_UClass_AFPSProjectFilesCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSProjectFilesCameraManager), 371597328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h__Script_FPSProjectFiles_611921333(TEXT("/Script/FPSProjectFiles"),
	Z_CompiledInDeferFile_FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h__Script_FPSProjectFiles_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesCameraManager_h__Script_FPSProjectFiles_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
