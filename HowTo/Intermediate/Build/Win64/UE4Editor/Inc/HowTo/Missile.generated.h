// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_Missile_generated_h
#error "Missile.generated.h already included, missing '#pragma once' in Missile.h"
#endif
#define HOWTO_Missile_generated_h

#define HowTo_Source_HowTo_Missile_h_9_SPARSE_DATA
#define HowTo_Source_HowTo_Missile_h_9_RPC_WRAPPERS
#define HowTo_Source_HowTo_Missile_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define HowTo_Source_HowTo_Missile_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissile(); \
	friend struct Z_Construct_UClass_AMissile_Statics; \
public: \
	DECLARE_CLASS(AMissile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AMissile)


#define HowTo_Source_HowTo_Missile_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAMissile(); \
	friend struct Z_Construct_UClass_AMissile_Statics; \
public: \
	DECLARE_CLASS(AMissile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AMissile)


#define HowTo_Source_HowTo_Missile_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissile(AMissile&&); \
	NO_API AMissile(const AMissile&); \
public:


#define HowTo_Source_HowTo_Missile_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissile(AMissile&&); \
	NO_API AMissile(const AMissile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissile)


#define HowTo_Source_HowTo_Missile_h_9_PRIVATE_PROPERTY_OFFSET
#define HowTo_Source_HowTo_Missile_h_6_PROLOG
#define HowTo_Source_HowTo_Missile_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_Missile_h_9_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_Missile_h_9_SPARSE_DATA \
	HowTo_Source_HowTo_Missile_h_9_RPC_WRAPPERS \
	HowTo_Source_HowTo_Missile_h_9_INCLASS \
	HowTo_Source_HowTo_Missile_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_Missile_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_Missile_h_9_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_Missile_h_9_SPARSE_DATA \
	HowTo_Source_HowTo_Missile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_Missile_h_9_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_Missile_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class AMissile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_Missile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
