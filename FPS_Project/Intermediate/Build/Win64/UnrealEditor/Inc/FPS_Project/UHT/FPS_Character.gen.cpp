// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/FPS_Character.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPS_Character() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_Character();
FPS_PROJECT_API UClass* Z_Construct_UClass_AFPS_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPS_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPS_Character ***********************************************************
void AFPS_Character::StaticRegisterNativesAFPS_Character()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPS_Character;
UClass* AFPS_Character::GetPrivateStaticClass()
{
	using TClass = AFPS_Character;
	if (!Z_Registration_Info_UClass_AFPS_Character.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPS_Character"),
			Z_Registration_Info_UClass_AFPS_Character.InnerSingleton,
			StaticRegisterNativesAFPS_Character,
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
	return Z_Registration_Info_UClass_AFPS_Character.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPS_Character_NoRegister()
{
	return AFPS_Character::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPS_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPS/FPS_Character.h" },
		{ "ModuleRelativePath", "FPS/FPS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainInputMap_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FPS/FPS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FPS/FPS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FPS/FPS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Shoot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FPS/FPS_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainInputMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Shoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Character_Statics::NewProp_MainInputMap = { "MainInputMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Character, MainInputMap), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainInputMap_MetaData), NewProp_MainInputMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Character_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Character, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Character_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Character, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_Character_Statics::NewProp_IA_Shoot = { "IA_Shoot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_Character, IA_Shoot), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Shoot_MetaData), NewProp_IA_Shoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPS_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Character_Statics::NewProp_MainInputMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Character_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Character_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_Character_Statics::NewProp_IA_Shoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPS_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FPS_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_Character_Statics::ClassParams = {
	&AFPS_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFPS_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Character_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPS_Character()
{
	if (!Z_Registration_Info_UClass_AFPS_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_Character.OuterSingleton, Z_Construct_UClass_AFPS_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPS_Character.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_Character);
AFPS_Character::~AFPS_Character() {}
// ********** End Class AFPS_Character *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h__Script_FPS_Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_Character, AFPS_Character::StaticClass, TEXT("AFPS_Character"), &Z_Registration_Info_UClass_AFPS_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_Character), 4128623020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h__Script_FPS_Project_3600751423(TEXT("/Script/FPS_Project"),
	Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h__Script_FPS_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_C_FPS_FPS_Project_Source_FPS_Project_FPS_FPS_Character_h__Script_FPS_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
