// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BABELSHIP_BabelshipProjectile_generated_h
#error "BabelshipProjectile.generated.h already included, missing '#pragma once' in BabelshipProjectile.h"
#endif
#define BABELSHIP_BabelshipProjectile_generated_h

#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_SPARSE_DATA
#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABabelshipProjectile(); \
	friend struct Z_Construct_UClass_ABabelshipProjectile_Statics; \
public: \
	DECLARE_CLASS(ABabelshipProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Babelship"), NO_API) \
	DECLARE_SERIALIZER(ABabelshipProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABabelshipProjectile(); \
	friend struct Z_Construct_UClass_ABabelshipProjectile_Statics; \
public: \
	DECLARE_CLASS(ABabelshipProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Babelship"), NO_API) \
	DECLARE_SERIALIZER(ABabelshipProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABabelshipProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABabelshipProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABabelshipProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABabelshipProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABabelshipProjectile(ABabelshipProjectile&&); \
	NO_API ABabelshipProjectile(const ABabelshipProjectile&); \
public:


#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABabelshipProjectile(ABabelshipProjectile&&); \
	NO_API ABabelshipProjectile(const ABabelshipProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABabelshipProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABabelshipProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABabelshipProjectile)


#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_12_PROLOG
#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_SPARSE_DATA \
	FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_RPC_WRAPPERS \
	FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_INCLASS \
	FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_SPARSE_DATA \
	FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Babelship_Source_Babelship_BabelshipProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BABELSHIP_API UClass* StaticClass<class ABabelshipProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Babelship_Source_Babelship_BabelshipProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
