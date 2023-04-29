// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_AEnemy_generated_h
#error "AEnemy.generated.h already included, missing '#pragma once' in AEnemy.h"
#endif
#define HOWTO_AEnemy_generated_h

#define HowTo_Source_HowTo_AEnemy_h_11_SPARSE_DATA
#define HowTo_Source_HowTo_AEnemy_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeDamage);


#define HowTo_Source_HowTo_AEnemy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeDamage);


#define HowTo_Source_HowTo_AEnemy_h_11_EVENT_PARMS
#define HowTo_Source_HowTo_AEnemy_h_11_CALLBACK_WRAPPERS
#define HowTo_Source_HowTo_AEnemy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAEnemy(); \
	friend struct Z_Construct_UClass_AAEnemy_Statics; \
public: \
	DECLARE_CLASS(AAEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AAEnemy)


#define HowTo_Source_HowTo_AEnemy_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAAEnemy(); \
	friend struct Z_Construct_UClass_AAEnemy_Statics; \
public: \
	DECLARE_CLASS(AAEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AAEnemy)


#define HowTo_Source_HowTo_AEnemy_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAEnemy(AAEnemy&&); \
	NO_API AAEnemy(const AAEnemy&); \
public:


#define HowTo_Source_HowTo_AEnemy_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAEnemy(AAEnemy&&); \
	NO_API AAEnemy(const AAEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAEnemy)


#define HowTo_Source_HowTo_AEnemy_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PatrolRadius() { return STRUCT_OFFSET(AAEnemy, PatrolRadius); }


#define HowTo_Source_HowTo_AEnemy_h_8_PROLOG \
	HowTo_Source_HowTo_AEnemy_h_11_EVENT_PARMS


#define HowTo_Source_HowTo_AEnemy_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_AEnemy_h_11_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_AEnemy_h_11_SPARSE_DATA \
	HowTo_Source_HowTo_AEnemy_h_11_RPC_WRAPPERS \
	HowTo_Source_HowTo_AEnemy_h_11_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_AEnemy_h_11_INCLASS \
	HowTo_Source_HowTo_AEnemy_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_AEnemy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_AEnemy_h_11_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_AEnemy_h_11_SPARSE_DATA \
	HowTo_Source_HowTo_AEnemy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_AEnemy_h_11_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_AEnemy_h_11_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_AEnemy_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class AAEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_AEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
