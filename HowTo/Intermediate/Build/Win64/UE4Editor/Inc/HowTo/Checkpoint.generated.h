// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_Checkpoint_generated_h
#error "Checkpoint.generated.h already included, missing '#pragma once' in Checkpoint.h"
#endif
#define HOWTO_Checkpoint_generated_h

#define HowTo_Source_HowTo_Checkpoint_h_16_SPARSE_DATA
#define HowTo_Source_HowTo_Checkpoint_h_16_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInteract);


#define HowTo_Source_HowTo_Checkpoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteract);


#define HowTo_Source_HowTo_Checkpoint_h_16_EVENT_PARMS
#define HowTo_Source_HowTo_Checkpoint_h_16_CALLBACK_WRAPPERS
#define HowTo_Source_HowTo_Checkpoint_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
public: \
	DECLARE_CLASS(ACheckpoint, ABasicInteractive, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(ACheckpoint) \
	virtual UObject* _getUObject() const override { return const_cast<ACheckpoint*>(this); }


#define HowTo_Source_HowTo_Checkpoint_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
public: \
	DECLARE_CLASS(ACheckpoint, ABasicInteractive, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(ACheckpoint) \
	virtual UObject* _getUObject() const override { return const_cast<ACheckpoint*>(this); }


#define HowTo_Source_HowTo_Checkpoint_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACheckpoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACheckpoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpoint(ACheckpoint&&); \
	NO_API ACheckpoint(const ACheckpoint&); \
public:


#define HowTo_Source_HowTo_Checkpoint_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACheckpoint() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpoint(ACheckpoint&&); \
	NO_API ACheckpoint(const ACheckpoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckpoint)


#define HowTo_Source_HowTo_Checkpoint_h_16_PRIVATE_PROPERTY_OFFSET
#define HowTo_Source_HowTo_Checkpoint_h_13_PROLOG \
	HowTo_Source_HowTo_Checkpoint_h_16_EVENT_PARMS


#define HowTo_Source_HowTo_Checkpoint_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_Checkpoint_h_16_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_Checkpoint_h_16_SPARSE_DATA \
	HowTo_Source_HowTo_Checkpoint_h_16_RPC_WRAPPERS \
	HowTo_Source_HowTo_Checkpoint_h_16_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_Checkpoint_h_16_INCLASS \
	HowTo_Source_HowTo_Checkpoint_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_Checkpoint_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_Checkpoint_h_16_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_Checkpoint_h_16_SPARSE_DATA \
	HowTo_Source_HowTo_Checkpoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_Checkpoint_h_16_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_Checkpoint_h_16_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_Checkpoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class ACheckpoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_Checkpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
