// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSProjectFiles_init() {}
	FPSPROJECTFILES_API UFunction* Z_Construct_UDelegateFunction_FPSProjectFiles_BulletCountUpdatedDelegate__DelegateSignature();
	FPSPROJECTFILES_API UFunction* Z_Construct_UDelegateFunction_FPSProjectFiles_DamagedDelegate__DelegateSignature();
	FPSPROJECTFILES_API UFunction* Z_Construct_UDelegateFunction_FPSProjectFiles_PawnDeathDelegate__DelegateSignature();
	FPSPROJECTFILES_API UFunction* Z_Construct_UDelegateFunction_FPSProjectFiles_SprintStateChangedDelegate__DelegateSignature();
	FPSPROJECTFILES_API UFunction* Z_Construct_UDelegateFunction_FPSProjectFiles_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPSProjectFiles;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPSProjectFiles()
	{
		if (!Z_Registration_Info_UPackage__Script_FPSProjectFiles.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSProjectFiles_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSProjectFiles_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSProjectFiles_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSProjectFiles_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSProjectFiles_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPSProjectFiles",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8BA95632,
				0x5871025B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPSProjectFiles.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPSProjectFiles.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPSProjectFiles(Z_Construct_UPackage__Script_FPSProjectFiles, TEXT("/Script/FPSProjectFiles"), Z_Registration_Info_UPackage__Script_FPSProjectFiles, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8BA95632, 0x5871025B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
