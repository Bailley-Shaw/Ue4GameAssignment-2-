// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_Chest_generated_h
#error "Chest.generated.h already included, missing '#pragma once' in Chest.h"
#endif
#define HOWTO_Chest_generated_h

#define HowTo_Source_HowTo_Chest_h_14_SPARSE_DATA
#define HowTo_Source_HowTo_Chest_h_14_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInteract);


#define HowTo_Source_HowTo_Chest_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteract);


#define HowTo_Source_HowTo_Chest_h_14_EVENT_PARMS
#define HowTo_Source_HowTo_Chest_h_14_CALLBACK_WRAPPERS
#define HowTo_Source_HowTo_Chest_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChest(); \
	friend struct Z_Construct_UClass_AChest_Statics; \
public: \
	DECLARE_CLASS(AChest, ABasicInteractive, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AChest) \
	virtual UObject* _getUObject() const override { return const_cast<AChest*>(this); }


#define HowTo_Source_HowTo_Chest_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAChest(); \
	friend struct Z_Construct_UClass_AChest_Statics; \
public: \
	DECLARE_CLASS(AChest, ABasicInteractive, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AChest) \
	virtual UObject* _getUObject() const override { return const_cast<AChest*>(this); }


#define HowTo_Source_HowTo_Chest_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChest(AChest&&); \
	NO_API AChest(const AChest&); \
public:


#define HowTo_Source_HowTo_Chest_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChest(AChest&&); \
	NO_API AChest(const AChest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChest)


#define HowTo_Source_HowTo_Chest_h_14_PRIVATE_PROPERTY_OFFSET
#define HowTo_Source_HowTo_Chest_h_11_PROLOG \
	HowTo_Source_HowTo_Chest_h_14_EVENT_PARMS


#define HowTo_Source_HowTo_Chest_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_Chest_h_14_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_Chest_h_14_SPARSE_DATA \
	HowTo_Source_HowTo_Chest_h_14_RPC_WRAPPERS \
	HowTo_Source_HowTo_Chest_h_14_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_Chest_h_14_INCLASS \
	HowTo_Source_HowTo_Chest_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_Chest_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_Chest_h_14_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_Chest_h_14_SPARSE_DATA \
	HowTo_Source_HowTo_Chest_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_Chest_h_14_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_Chest_h_14_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_Chest_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class AChest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_Chest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
