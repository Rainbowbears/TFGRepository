// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Babelship/BabelshipGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBabelshipGameMode() {}
// Cross Module References
	BABELSHIP_API UClass* Z_Construct_UClass_ABabelshipGameMode_NoRegister();
	BABELSHIP_API UClass* Z_Construct_UClass_ABabelshipGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Babelship();
// End Cross Module References
	void ABabelshipGameMode::StaticRegisterNativesABabelshipGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABabelshipGameMode);
	UClass* Z_Construct_UClass_ABabelshipGameMode_NoRegister()
	{
		return ABabelshipGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABabelshipGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABabelshipGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Babelship,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABabelshipGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BabelshipGameMode.h" },
		{ "ModuleRelativePath", "BabelshipGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABabelshipGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABabelshipGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABabelshipGameMode_Statics::ClassParams = {
		&ABabelshipGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABabelshipGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABabelshipGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABabelshipGameMode()
	{
		if (!Z_Registration_Info_UClass_ABabelshipGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABabelshipGameMode.OuterSingleton, Z_Construct_UClass_ABabelshipGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABabelshipGameMode.OuterSingleton;
	}
	template<> BABELSHIP_API UClass* StaticClass<ABabelshipGameMode>()
	{
		return ABabelshipGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABabelshipGameMode);
	struct Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_BabelshipGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_BabelshipGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABabelshipGameMode, ABabelshipGameMode::StaticClass, TEXT("ABabelshipGameMode"), &Z_Registration_Info_UClass_ABabelshipGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABabelshipGameMode), 2903149090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_BabelshipGameMode_h_3605107676(TEXT("/Script/Babelship"),
		Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_BabelshipGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_BabelshipGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
