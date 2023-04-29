// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_ItemInteractive_generated_h
#error "ItemInteractive.generated.h already included, missing '#pragma once' in ItemInteractive.h"
#endif
#define HOWTO_ItemInteractive_generated_h

#define HowTo_Source_HowTo_ItemInteractive_h_16_SPARSE_DATA
#define HowTo_Source_HowTo_ItemInteractive_h_16_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInteract);


#define HowTo_Source_HowTo_ItemInteractive_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteract);


#define HowTo_Source_HowTo_ItemInteractive_h_16_EVENT_PARMS
#define HowTo_Source_HowTo_ItemInteractive_h_16_CALLBACK_WRAPPERS
#define HowTo_Source_HowTo_ItemInteractive_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemInteractive(); \
	friend struct Z_Construct_UClass_AItemInteractive_Statics; \
public: \
	DECLARE_CLASS(AItemInteractive, ABasicInteractive, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AItemInteractive) \
	virtual UObject* _getUObject() const override { return const_cast<AItemInteractive*>(this); }


#define HowTo_Source_HowTo_ItemInteractive_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAItemInteractive(); \
	friend struct Z_Construct_UClass_AItemInteractive_Statics; \
public: \
	DECLARE_CLASS(AItemInteractive, ABasicInteractive, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AItemInteractive) \
	virtual UObject* _getUObject() const override { return const_cast<AItemInteractive*>(this); }


#define HowTo_Source_HowTo_ItemInteractive_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemInteractive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemInteractive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemInteractive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemInteractive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemInteractive(AItemInteractive&&); \
	NO_API AItemInteractive(const AItemInteractive&); \
public:


#define HowTo_Source_HowTo_ItemInteractive_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemInteractive() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemInteractive(AItemInteractive&&); \
	NO_API AItemInteractive(const AItemInteractive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemInteractive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemInteractive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemInteractive)


#define HowTo_Source_HowTo_ItemInteractive_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemID() { return STRUCT_OFFSET(AItemInteractive, ItemID); } \
	FORCEINLINE static uint32 __PPO__bItemCollected() { return STRUCT_OFFSET(AItemInteractive, bItemCollected); }


#define HowTo_Source_HowTo_ItemInteractive_h_13_PROLOG \
	HowTo_Source_HowTo_ItemInteractive_h_16_EVENT_PARMS


#define HowTo_Source_HowTo_ItemInteractive_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_ItemInteractive_h_16_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_ItemInteractive_h_16_SPARSE_DATA \
	HowTo_Source_HowTo_ItemInteractive_h_16_RPC_WRAPPERS \
	HowTo_Source_HowTo_ItemInteractive_h_16_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_ItemInteractive_h_16_INCLASS \
	HowTo_Source_HowTo_ItemInteractive_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_ItemInteractive_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_ItemInteractive_h_16_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_ItemInteractive_h_16_SPARSE_DATA \
	HowTo_Source_HowTo_ItemInteractive_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_ItemInteractive_h_16_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_ItemInteractive_h_16_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_ItemInteractive_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class AItemInteractive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_ItemInteractive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
