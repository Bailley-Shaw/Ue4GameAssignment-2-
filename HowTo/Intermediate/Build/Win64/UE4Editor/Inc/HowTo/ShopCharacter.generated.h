// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_ShopCharacter_generated_h
#error "ShopCharacter.generated.h already included, missing '#pragma once' in ShopCharacter.h"
#endif
#define HOWTO_ShopCharacter_generated_h

#define HowTo_Source_HowTo_ShopCharacter_h_10_SPARSE_DATA
#define HowTo_Source_HowTo_ShopCharacter_h_10_RPC_WRAPPERS
#define HowTo_Source_HowTo_ShopCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define HowTo_Source_HowTo_ShopCharacter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShopCharacter(); \
	friend struct Z_Construct_UClass_AShopCharacter_Statics; \
public: \
	DECLARE_CLASS(AShopCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AShopCharacter)


#define HowTo_Source_HowTo_ShopCharacter_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAShopCharacter(); \
	friend struct Z_Construct_UClass_AShopCharacter_Statics; \
public: \
	DECLARE_CLASS(AShopCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AShopCharacter)


#define HowTo_Source_HowTo_ShopCharacter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShopCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShopCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShopCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShopCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShopCharacter(AShopCharacter&&); \
	NO_API AShopCharacter(const AShopCharacter&); \
public:


#define HowTo_Source_HowTo_ShopCharacter_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShopCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShopCharacter(AShopCharacter&&); \
	NO_API AShopCharacter(const AShopCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShopCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShopCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShopCharacter)


#define HowTo_Source_HowTo_ShopCharacter_h_10_PRIVATE_PROPERTY_OFFSET
#define HowTo_Source_HowTo_ShopCharacter_h_7_PROLOG
#define HowTo_Source_HowTo_ShopCharacter_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_ShopCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_ShopCharacter_h_10_SPARSE_DATA \
	HowTo_Source_HowTo_ShopCharacter_h_10_RPC_WRAPPERS \
	HowTo_Source_HowTo_ShopCharacter_h_10_INCLASS \
	HowTo_Source_HowTo_ShopCharacter_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_ShopCharacter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_ShopCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_ShopCharacter_h_10_SPARSE_DATA \
	HowTo_Source_HowTo_ShopCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_ShopCharacter_h_10_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_ShopCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class AShopCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_ShopCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
