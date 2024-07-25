// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/ProjectileSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileSpawner() {}
// Cross Module References
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AProjectileSpawner_NoRegister();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AProjectileSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void AProjectileSpawner::StaticRegisterNativesAProjectileSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileSpawner);
	UClass* Z_Construct_UClass_AProjectileSpawner_NoRegister()
	{
		return AProjectileSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileSpawner.h" },
		{ "ModuleRelativePath", "ProjectileSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileSpawner_Statics::NewProp_ProjectileActor_MetaData[] = {
		{ "Category", "ProjectileSpawner" },
		{ "ModuleRelativePath", "ProjectileSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectileSpawner_Statics::NewProp_ProjectileActor = { "ProjectileActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileSpawner, ProjectileActor), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProjectileSpawner_Statics::NewProp_ProjectileActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileSpawner_Statics::NewProp_ProjectileActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileSpawner_Statics::NewProp_ProjectileActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileSpawner_Statics::ClassParams = {
		&AProjectileSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileSpawner()
	{
		if (!Z_Registration_Info_UClass_AProjectileSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileSpawner.OuterSingleton, Z_Construct_UClass_AProjectileSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileSpawner.OuterSingleton;
	}
	template<> OBSTACLEASSAULT_API UClass* StaticClass<AProjectileSpawner>()
	{
		return AProjectileSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileSpawner);
	struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_ProjectileSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_ProjectileSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileSpawner, AProjectileSpawner::StaticClass, TEXT("AProjectileSpawner"), &Z_Registration_Info_UClass_AProjectileSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileSpawner), 117134217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_ProjectileSpawner_h_2618214849(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_ProjectileSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_ProjectileSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
