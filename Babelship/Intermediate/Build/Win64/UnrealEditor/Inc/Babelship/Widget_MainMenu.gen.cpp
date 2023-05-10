// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Babelship/Public/Widget_MainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_MainMenu() {}
// Cross Module References
	BABELSHIP_API UClass* Z_Construct_UClass_UWidget_MainMenu_NoRegister();
	BABELSHIP_API UClass* Z_Construct_UClass_UWidget_MainMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Babelship();
// End Cross Module References
	void UWidget_MainMenu::StaticRegisterNativesUWidget_MainMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_MainMenu);
	UClass* Z_Construct_UClass_UWidget_MainMenu_NoRegister()
	{
		return UWidget_MainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_MainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_MainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Babelship,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_MainMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_MainMenu.h" },
		{ "ModuleRelativePath", "Public/Widget_MainMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_MainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_MainMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_MainMenu_Statics::ClassParams = {
		&UWidget_MainMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWidget_MainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_MainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_MainMenu()
	{
		if (!Z_Registration_Info_UClass_UWidget_MainMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_MainMenu.OuterSingleton, Z_Construct_UClass_UWidget_MainMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_MainMenu.OuterSingleton;
	}
	template<> BABELSHIP_API UClass* StaticClass<UWidget_MainMenu>()
	{
		return UWidget_MainMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_MainMenu);
	struct Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_MainMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_MainMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_MainMenu, UWidget_MainMenu::StaticClass, TEXT("UWidget_MainMenu"), &Z_Registration_Info_UClass_UWidget_MainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_MainMenu), 40474678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_MainMenu_h_4016041095(TEXT("/Script/Babelship"),
		Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_MainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Babelship_Source_Babelship_Public_Widget_MainMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
