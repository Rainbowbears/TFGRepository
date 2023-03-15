// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Babelship/Public/Widget_dialog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_dialog() {}
// Cross Module References
	BABELSHIP_API UClass* Z_Construct_UClass_UWidget_dialog_NoRegister();
	BABELSHIP_API UClass* Z_Construct_UClass_UWidget_dialog();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Babelship();
// End Cross Module References
	void UWidget_dialog::StaticRegisterNativesUWidget_dialog()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_dialog);
	UClass* Z_Construct_UClass_UWidget_dialog_NoRegister()
	{
		return UWidget_dialog::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_dialog_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_dialog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Babelship,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_dialog_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_dialog.h" },
		{ "ModuleRelativePath", "Public/Widget_dialog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_dialog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_dialog>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_dialog_Statics::ClassParams = {
		&UWidget_dialog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_dialog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_dialog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_dialog()
	{
		if (!Z_Registration_Info_UClass_UWidget_dialog.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_dialog.OuterSingleton, Z_Construct_UClass_UWidget_dialog_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_dialog.OuterSingleton;
	}
	template<> BABELSHIP_API UClass* StaticClass<UWidget_dialog>()
	{
		return UWidget_dialog::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_dialog);
	struct Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_dialog_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_dialog_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_dialog, UWidget_dialog::StaticClass, TEXT("UWidget_dialog"), &Z_Registration_Info_UClass_UWidget_dialog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_dialog), 1220444331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_dialog_h_325347374(TEXT("/Script/Babelship"),
		Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_dialog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_dialog_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
