// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Babelship/Public/RoutePoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoutePoint() {}
// Cross Module References
	BABELSHIP_API UClass* Z_Construct_UClass_ARoutePoint_NoRegister();
	BABELSHIP_API UClass* Z_Construct_UClass_ARoutePoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_Babelship();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ARoutePoint::StaticRegisterNativesARoutePoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoutePoint);
	UClass* Z_Construct_UClass_ARoutePoint_NoRegister()
	{
		return ARoutePoint::StaticClass();
	}
	struct Z_Construct_UClass_ARoutePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_possibleMoves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_possibleMoves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_possibleMoves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoutePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Babelship,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoutePoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RoutePoint.h" },
		{ "ModuleRelativePath", "Public/RoutePoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoutePoint_Statics::NewProp_possibleMoves_Inner = { "possibleMoves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoutePoint_Statics::NewProp_possibleMoves_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RoutePoint" },
		{ "ModuleRelativePath", "Public/RoutePoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoutePoint_Statics::NewProp_possibleMoves = { "possibleMoves", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoutePoint, possibleMoves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoutePoint_Statics::NewProp_possibleMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoutePoint_Statics::NewProp_possibleMoves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoutePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoutePoint_Statics::NewProp_possibleMoves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoutePoint_Statics::NewProp_possibleMoves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoutePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoutePoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoutePoint_Statics::ClassParams = {
		&ARoutePoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoutePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoutePoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoutePoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoutePoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoutePoint()
	{
		if (!Z_Registration_Info_UClass_ARoutePoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoutePoint.OuterSingleton, Z_Construct_UClass_ARoutePoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoutePoint.OuterSingleton;
	}
	template<> BABELSHIP_API UClass* StaticClass<ARoutePoint>()
	{
		return ARoutePoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoutePoint);
	struct Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_RoutePoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_RoutePoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoutePoint, ARoutePoint::StaticClass, TEXT("ARoutePoint"), &Z_Registration_Info_UClass_ARoutePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoutePoint), 2976120480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_RoutePoint_h_836043520(TEXT("/Script/Babelship"),
		Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_RoutePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_RoutePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
