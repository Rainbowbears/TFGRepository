// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BABELSHIP_BabelshipCharacter_generated_h
#error "BabelshipCharacter.generated.h already included, missing '#pragma once' in BabelshipCharacter.h"
#endif
#define BABELSHIP_BabelshipCharacter_generated_h

#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_19_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_SPARSE_DATA
#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_RPC_WRAPPERS
#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABabelshipCharacter(); \
	friend struct Z_Construct_UClass_ABabelshipCharacter_Statics; \
public: \
	DECLARE_CLASS(ABabelshipCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Babelship"), NO_API) \
	DECLARE_SERIALIZER(ABabelshipCharacter)


#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesABabelshipCharacter(); \
	friend struct Z_Construct_UClass_ABabelshipCharacter_Statics; \
public: \
	DECLARE_CLASS(ABabelshipCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Babelship"), NO_API) \
	DECLARE_SERIALIZER(ABabelshipCharacter)


#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABabelshipCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABabelshipCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABabelshipCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABabelshipCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABabelshipCharacter(ABabelshipCharacter&&); \
	NO_API ABabelshipCharacter(const ABabelshipCharacter&); \
public:


#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABabelshipCharacter(ABabelshipCharacter&&); \
	NO_API ABabelshipCharacter(const ABabelshipCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABabelshipCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABabelshipCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABabelshipCharacter)


#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_21_PROLOG
#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_SPARSE_DATA \
	FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_RPC_WRAPPERS \
	FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_INCLASS \
	FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_SPARSE_DATA \
	FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Babelship_Source_Babelship_BabelshipCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BABELSHIP_API UClass* StaticClass<class ABabelshipCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Babelship_Source_Babelship_BabelshipCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
