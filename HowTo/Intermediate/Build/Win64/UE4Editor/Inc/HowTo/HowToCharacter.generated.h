// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItem;
class AActor;
struct FQuest;
#ifdef HOWTO_HowToCharacter_generated_h
#error "HowToCharacter.generated.h already included, missing '#pragma once' in HowToCharacter.h"
#endif
#define HOWTO_HowToCharacter_generated_h

#define HowTo_Source_HowTo_HowToCharacter_h_15_SPARSE_DATA
#define HowTo_Source_HowTo_HowToCharacter_h_15_RPC_WRAPPERS \
	virtual void TriggerCheckPoint_Implementation(); \
 \
	DECLARE_FUNCTION(execTriggerCheckPoint); \
	DECLARE_FUNCTION(execGetItemInInventory); \
	DECLARE_FUNCTION(execStopLookAt); \
	DECLARE_FUNCTION(execStartLookAt); \
	DECLARE_FUNCTION(execHasItemOnHands); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define HowTo_Source_HowTo_HowToCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerCheckPoint); \
	DECLARE_FUNCTION(execGetItemInInventory); \
	DECLARE_FUNCTION(execStopLookAt); \
	DECLARE_FUNCTION(execStartLookAt); \
	DECLARE_FUNCTION(execHasItemOnHands); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define HowTo_Source_HowTo_HowToCharacter_h_15_EVENT_PARMS \
	struct HowToCharacter_eventOnShowQuestCompleted_Parms \
	{ \
		FText Message; \
	}; \
	struct HowToCharacter_eventOnShowQuestInfo_Parms \
	{ \
		FQuest Quest; \
	}; \
	struct HowToCharacter_eventOnShowUI_Parms \
	{ \
		FName Character; \
	}; \
	struct HowToCharacter_eventOnShowUpdatedQuestList_Parms \
	{ \
		TArray<FText> QuestTextList; \
	}; \
	struct HowToCharacter_eventOnSpawnItem_Parms \
	{ \
		TSubclassOf<AActor>  ItemToGrab; \
	};


#define HowTo_Source_HowTo_HowToCharacter_h_15_CALLBACK_WRAPPERS
#define HowTo_Source_HowTo_HowToCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHowToCharacter(); \
	friend struct Z_Construct_UClass_AHowToCharacter_Statics; \
public: \
	DECLARE_CLASS(AHowToCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AHowToCharacter)


#define HowTo_Source_HowTo_HowToCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHowToCharacter(); \
	friend struct Z_Construct_UClass_AHowToCharacter_Statics; \
public: \
	DECLARE_CLASS(AHowToCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AHowToCharacter)


#define HowTo_Source_HowTo_HowToCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHowToCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHowToCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHowToCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHowToCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHowToCharacter(AHowToCharacter&&); \
	NO_API AHowToCharacter(const AHowToCharacter&); \
public:


#define HowTo_Source_HowTo_HowToCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHowToCharacter(AHowToCharacter&&); \
	NO_API AHowToCharacter(const AHowToCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHowToCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHowToCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHowToCharacter)


#define HowTo_Source_HowTo_HowToCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AHowToCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AHowToCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CarryItemPoint() { return STRUCT_OFFSET(AHowToCharacter, CarryItemPoint); } \
	FORCEINLINE static uint32 __PPO__RocketPoint() { return STRUCT_OFFSET(AHowToCharacter, RocketPoint); } \
	FORCEINLINE static uint32 __PPO__Animator() { return STRUCT_OFFSET(AHowToCharacter, Animator); } \
	FORCEINLINE static uint32 __PPO__EquipmentInventory() { return STRUCT_OFFSET(AHowToCharacter, EquipmentInventory); } \
	FORCEINLINE static uint32 __PPO__TotalEquipmentSlots() { return STRUCT_OFFSET(AHowToCharacter, TotalEquipmentSlots); } \
	FORCEINLINE static uint32 __PPO__bHasItemOnHands() { return STRUCT_OFFSET(AHowToCharacter, bHasItemOnHands); } \
	FORCEINLINE static uint32 __PPO__IndexItemOnHands() { return STRUCT_OFFSET(AHowToCharacter, IndexItemOnHands); } \
	FORCEINLINE static uint32 __PPO__ItemIDOnHands() { return STRUCT_OFFSET(AHowToCharacter, ItemIDOnHands); }


#define HowTo_Source_HowTo_HowToCharacter_h_12_PROLOG \
	HowTo_Source_HowTo_HowToCharacter_h_15_EVENT_PARMS


#define HowTo_Source_HowTo_HowToCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_HowToCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_HowToCharacter_h_15_SPARSE_DATA \
	HowTo_Source_HowTo_HowToCharacter_h_15_RPC_WRAPPERS \
	HowTo_Source_HowTo_HowToCharacter_h_15_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_HowToCharacter_h_15_INCLASS \
	HowTo_Source_HowTo_HowToCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_HowToCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_HowToCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_HowToCharacter_h_15_SPARSE_DATA \
	HowTo_Source_HowTo_HowToCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_HowToCharacter_h_15_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_HowToCharacter_h_15_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_HowToCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class AHowToCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_HowToCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
