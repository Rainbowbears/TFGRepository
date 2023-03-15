// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Babelship/Public/BabelshipPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBabelshipPlayerController() {}
// Cross Module References
	BABELSHIP_API UClass* Z_Construct_UClass_ABabelshipPlayerController_NoRegister();
	BABELSHIP_API UClass* Z_Construct_UClass_ABabelshipPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Babelship();
// End Cross Module References
	void ABabelshipPlayerController::StaticRegisterNativesABabelshipPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABabelshipPlayerController);
	UClass* Z_Construct_UClass_ABabelshipPlayerController_NoRegister()
	{
		return ABabelshipPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABabelshipPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABabelshipPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Babelship,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABabelshipPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BabelshipPlayerController.h" },
		{ "ModuleRelativePath", "Public/BabelshipPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABabelshipPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABabelshipPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABabelshipPlayerController_Statics::ClassParams = {
		&ABabelshipPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABabelshipPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABabelshipPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABabelshipPlayerController()
	{
		if (!Z_Registration_Info_UClass_ABabelshipPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABabelshipPlayerController.OuterSingleton, Z_Construct_UClass_ABabelshipPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABabelshipPlayerController.OuterSingleton;
	}
	template<> BABELSHIP_API UClass* StaticClass<ABabelshipPlayerController>()
	{
		return ABabelshipPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABabelshipPlayerController);
	struct Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_BabelshipPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_BabelshipPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABabelshipPlayerController, ABabelshipPlayerController::StaticClass, TEXT("ABabelshipPlayerController"), &Z_Registration_Info_UClass_ABabelshipPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABabelshipPlayerController), 97449360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_BabelshipPlayerController_h_260823271(TEXT("/Script/Babelship"),
		Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_BabelshipPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_BabelshipPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
