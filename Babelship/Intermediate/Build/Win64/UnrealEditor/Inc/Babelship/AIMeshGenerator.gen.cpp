// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Babelship/Public/AIMeshGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMeshGenerator() {}
// Cross Module References
	BABELSHIP_API UClass* Z_Construct_UClass_AAIMeshGenerator_NoRegister();
	BABELSHIP_API UClass* Z_Construct_UClass_AAIMeshGenerator();
	BLUTILITY_API UClass* Z_Construct_UClass_AEditorUtilityActor();
	UPackage* Z_Construct_UPackage__Script_Babelship();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BABELSHIP_API UClass* Z_Construct_UClass_ARoutePoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAIMeshGenerator::execClearRoutePoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRoutePoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIMeshGenerator::execGenerateAIMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateAIMesh();
		P_NATIVE_END;
	}
	void AAIMeshGenerator::StaticRegisterNativesAAIMeshGenerator()
	{
		UClass* Class = AAIMeshGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearRoutePoints", &AAIMeshGenerator::execClearRoutePoints },
			{ "GenerateAIMesh", &AAIMeshGenerator::execGenerateAIMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIMeshGenerator_ClearRoutePoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIMeshGenerator_ClearRoutePoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIMeshGenerator_ClearRoutePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIMeshGenerator, nullptr, "ClearRoutePoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIMeshGenerator_ClearRoutePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIMeshGenerator_ClearRoutePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIMeshGenerator_ClearRoutePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIMeshGenerator_ClearRoutePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIMeshGenerator_GenerateAIMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIMeshGenerator_GenerateAIMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIMeshGenerator_GenerateAIMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIMeshGenerator, nullptr, "GenerateAIMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIMeshGenerator_GenerateAIMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIMeshGenerator_GenerateAIMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIMeshGenerator_GenerateAIMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIMeshGenerator_GenerateAIMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIMeshGenerator);
	UClass* Z_Construct_UClass_AAIMeshGenerator_NoRegister()
	{
		return AAIMeshGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AAIMeshGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widthCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_widthCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_countWidth_MetaData[];
#endif
		static void NewProp_countWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_countWidth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinePointCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LinePointCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoutePointInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoutePointInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoutePointInstances;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoutePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoutePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoutePoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIMeshGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEditorUtilityActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Babelship,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIMeshGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIMeshGenerator_ClearRoutePoints, "ClearRoutePoints" }, // 2762721401
		{ &Z_Construct_UFunction_AAIMeshGenerator_GenerateAIMesh, "GenerateAIMesh" }, // 1557767968
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMeshGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AIMeshGenerator.h" },
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_widthCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIMeshGenerator" },
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_widthCount = { "widthCount", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMeshGenerator, widthCount), METADATA_PARAMS(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_widthCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_widthCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_countWidth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIMeshGenerator" },
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
	void Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_countWidth_SetBit(void* Obj)
	{
		((AAIMeshGenerator*)Obj)->countWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_countWidth = { "countWidth", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAIMeshGenerator), &Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_countWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_countWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_countWidth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_ObjectType_Inner = { "ObjectType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_ObjectType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIMeshGenerator" },
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMeshGenerator, ObjectType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_ObjectType_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_LinePointCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIMeshGenerator" },
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_LinePointCount = { "LinePointCount", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMeshGenerator, LinePointCount), METADATA_PARAMS(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_LinePointCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_LinePointCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_SpawnClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIMeshGenerator" },
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_SpawnClass = { "SpawnClass", nullptr, (EPropertyFlags)0x0044000000000801, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMeshGenerator, SpawnClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_SpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_SpawnClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePointInstances_Inner = { "RoutePointInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoutePoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePointInstances_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIMeshGenerator" },
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePointInstances = { "RoutePointInstances", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMeshGenerator, RoutePointInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePointInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePointInstances_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePoints_Inner = { "RoutePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoutePoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePoints_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIMeshGenerator" },
		{ "ModuleRelativePath", "Public/AIMeshGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePoints = { "RoutePoints", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMeshGenerator, RoutePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIMeshGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_widthCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_countWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_ObjectType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_ObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_LinePointCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_SpawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePointInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePointInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMeshGenerator_Statics::NewProp_RoutePoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIMeshGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIMeshGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIMeshGenerator_Statics::ClassParams = {
		&AAIMeshGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIMeshGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIMeshGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIMeshGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMeshGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIMeshGenerator()
	{
		if (!Z_Registration_Info_UClass_AAIMeshGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIMeshGenerator.OuterSingleton, Z_Construct_UClass_AAIMeshGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIMeshGenerator.OuterSingleton;
	}
	template<> BABELSHIP_API UClass* StaticClass<AAIMeshGenerator>()
	{
		return AAIMeshGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIMeshGenerator);
	struct Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_AIMeshGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_AIMeshGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIMeshGenerator, AAIMeshGenerator::StaticClass, TEXT("AAIMeshGenerator"), &Z_Registration_Info_UClass_AAIMeshGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIMeshGenerator), 3076996017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_AIMeshGenerator_h_3132138240(TEXT("/Script/Babelship"),
		Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_AIMeshGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_AIMeshGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
