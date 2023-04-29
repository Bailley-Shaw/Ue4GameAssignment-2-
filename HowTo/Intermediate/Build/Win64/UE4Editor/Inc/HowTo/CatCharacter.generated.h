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
#ifdef HOWTO_CatCharacter_generated_h
#error "CatCharacter.generated.h already included, missing '#pragma once' in CatCharacter.h"
#endif
#define HOWTO_CatCharacter_generated_h

#define HowTo_Source_HowTo_CatCharacter_h_14_SPARSE_DATA
#define HowTo_Source_HowTo_CatCharacter_h_14_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInteract); \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define HowTo_Source_HowTo_CatCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteract); \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define HowTo_Source_HowTo_CatCharacter_h_14_EVENT_PARMS
#define HowTo_Source_HowTo_CatCharacter_h_14_CALLBACK_WRAPPERS
#define HowTo_Source_HowTo_CatCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACatCharacter(); \
	friend struct Z_Construct_UClass_ACatCharacter_Statics; \
public: \
	DECLARE_CLASS(ACatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(ACatCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACatCharacter*>(this); }


#define HowTo_Source_HowTo_CatCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACatCharacter(); \
	friend struct Z_Construct_UClass_ACatCharacter_Statics; \
public: \
	DECLARE_CLASS(ACatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(ACatCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACatCharacter*>(this); }


#define HowTo_Source_HowTo_CatCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACatCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACatCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACatCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACatCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACatCharacter(ACatCharacter&&); \
	NO_API ACatCharacter(const ACatCharacter&); \
public:


#define HowTo_Source_HowTo_CatCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACatCharacter(ACatCharacter&&); \
	NO_API ACatCharacter(const ACatCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACatCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACatCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACatCharacter)


#define HowTo_Source_HowTo_CatCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Trigger() { return STRUCT_OFFSET(ACatCharacter, Trigger); } \
	FORCEINLINE static uint32 __PPO__CharacterName() { return STRUCT_OFFSET(ACatCharacter, CharacterName); } \
	FORCEINLINE static uint32 __PPO__Reward() { return STRUCT_OFFSET(ACatCharacter, Reward); } \
	FORCEINLINE static uint32 __PPO__QuestID() { return STRUCT_OFFSET(ACatCharacter, QuestID); } \
	FORCEINLINE static uint32 __PPO__Animator() { return STRUCT_OFFSET(ACatCharacter, Animator); }


#define HowTo_Source_HowTo_CatCharacter_h_11_PROLOG \
	HowTo_Source_HowTo_CatCharacter_h_14_EVENT_PARMS


#define HowTo_Source_HowTo_CatCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_CatCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_CatCharacter_h_14_SPARSE_DATA \
	HowTo_Source_HowTo_CatCharacter_h_14_RPC_WRAPPERS \
	HowTo_Source_HowTo_CatCharacter_h_14_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_CatCharacter_h_14_INCLASS \
	HowTo_Source_HowTo_CatCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_CatCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_CatCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_CatCharacter_h_14_SPARSE_DATA \
	HowTo_Source_HowTo_CatCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_CatCharacter_h_14_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_CatCharacter_h_14_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_CatCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class ACatCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_CatCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
