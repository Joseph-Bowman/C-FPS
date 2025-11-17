// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProjectFilesGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSProjectFilesGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesGameMode();
FPSPROJECTFILES_API UClass* Z_Construct_UClass_AFPSProjectFilesGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSProjectFiles();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSProjectFilesGameMode *************************************************
void AFPSProjectFilesGameMode::StaticRegisterNativesAFPSProjectFilesGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSProjectFilesGameMode;
UClass* AFPSProjectFilesGameMode::GetPrivateStaticClass()
{
	using TClass = AFPSProjectFilesGameMode;
	if (!Z_Registration_Info_UClass_AFPSProjectFilesGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSProjectFilesGameMode"),
			Z_Registration_Info_UClass_AFPSProjectFilesGameMode.InnerSingleton,
			StaticRegisterNativesAFPSProjectFilesGameMode,
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
	return Z_Registration_Info_UClass_AFPSProjectFilesGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSProjectFilesGameMode_NoRegister()
{
	return AFPSProjectFilesGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSProjectFilesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSProjectFilesGameMode.h" },
		{ "ModuleRelativePath", "FPSProjectFilesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSProjectFilesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSProjectFilesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSProjectFiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectFilesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSProjectFilesGameMode_Statics::ClassParams = {
	&AFPSProjectFilesGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectFilesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSProjectFilesGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSProjectFilesGameMode()
{
	if (!Z_Registration_Info_UClass_AFPSProjectFilesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSProjectFilesGameMode.OuterSingleton, Z_Construct_UClass_AFPSProjectFilesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSProjectFilesGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectFilesGameMode);
AFPSProjectFilesGameMode::~AFPSProjectFilesGameMode() {}
// ********** End Class AFPSProjectFilesGameMode ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h__Script_FPSProjectFiles_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSProjectFilesGameMode, AFPSProjectFilesGameMode::StaticClass, TEXT("AFPSProjectFilesGameMode"), &Z_Registration_Info_UClass_AFPSProjectFilesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSProjectFilesGameMode), 3659179207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h__Script_FPSProjectFiles_2756457641(TEXT("/Script/FPSProjectFiles"),
	Z_CompiledInDeferFile_FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h__Script_FPSProjectFiles_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_C_FPS__git_FPSProjectFiles_Source_FPSProjectFiles_FPSProjectFilesGameMode_h__Script_FPSProjectFiles_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
