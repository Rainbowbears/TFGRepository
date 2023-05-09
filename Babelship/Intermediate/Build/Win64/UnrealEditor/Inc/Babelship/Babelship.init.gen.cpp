// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBabelship_init() {}
	BABELSHIP_API UFunction* Z_Construct_UDelegateFunction_Babelship_OnPickUp__DelegateSignature();
	BABELSHIP_API UFunction* Z_Construct_UDelegateFunction_Babelship_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Babelship;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Babelship()
	{
		if (!Z_Registration_Info_UPackage__Script_Babelship.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Babelship_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Babelship_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Babelship",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9B888856,
				0xE4F9BA90,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Babelship.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Babelship.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Babelship(Z_Construct_UPackage__Script_Babelship, TEXT("/Script/Babelship"), Z_Registration_Info_UPackage__Script_Babelship, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9B888856, 0xE4F9BA90));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
