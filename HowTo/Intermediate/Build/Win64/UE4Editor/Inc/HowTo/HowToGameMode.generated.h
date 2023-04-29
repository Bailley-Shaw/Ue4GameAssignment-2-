// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItem;
struct FQuest;
#ifdef HOWTO_HowToGameMode_generated_h
#error "HowToGameMode.generated.h already included, missing '#pragma once' in HowToGameMode.h"
#endif
#define HOWTO_HowToGameMode_generated_h

#define HowTo_Source_HowTo_HowToGameMode_h_13_SPARSE_DATA
#define HowTo_Source_HowTo_HowToGameMode_h_13_RPC_WRAPPERS \
	virtual FItem FindItem_Implementation(FName ItemID, bool& Success); \
	virtual FQuest FindQuest_Implementation(FName QuestID, bool& Success); \
 \
	DECLARE_FUNCTION(execFindItem); \
	DECLARE_FUNCTION(execFindQuest);


#define HowTo_Source_HowTo_HowToGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindItem); \
	DECLARE_FUNCTION(execFindQuest);


#define HowTo_Source_HowTo_HowToGameMode_h_13_EVENT_PARMS \
	struct HowToGameMode_eventFindItem_Parms \
	{ \
		FName ItemID; \
		bool Success; \
		FItem ReturnValue; \
	}; \
	struct HowToGameMode_eventFindQuest_Parms \
	{ \
		FName QuestID; \
		bool Success; \
		FQuest ReturnValue; \
	};


#define HowTo_Source_HowTo_HowToGameMode_h_13_CALLBACK_WRAPPERS
#define HowTo_Source_HowTo_HowToGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHowToGameMode(); \
	friend struct Z_Construct_UClass_AHowToGameMode_Statics; \
public: \
	DECLARE_CLASS(AHowToGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), HOWTO_API) \
	DECLARE_SERIALIZER(AHowToGameMode)


#define HowTo_Source_HowTo_HowToGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHowToGameMode(); \
	friend struct Z_Construct_UClass_AHowToGameMode_Statics; \
public: \
	DECLARE_CLASS(AHowToGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), HOWTO_API) \
	DECLARE_SERIALIZER(AHowToGameMode)


#define HowTo_Source_HowTo_HowToGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOWTO_API AHowToGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHowToGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOWTO_API, AHowToGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHowToGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOWTO_API AHowToGameMode(AHowToGameMode&&); \
	HOWTO_API AHowToGameMode(const AHowToGameMode&); \
public:


#define HowTo_Source_HowTo_HowToGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOWTO_API AHowToGameMode(AHowToGameMode&&); \
	HOWTO_API AHowToGameMode(const AHowToGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOWTO_API, AHowToGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHowToGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHowToGameMode)


#define HowTo_Source_HowTo_HowToGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__QuestDatabase() { return STRUCT_OFFSET(AHowToGameMode, QuestDatabase); } \
	FORCEINLINE static uint32 __PPO__ItemDatabase() { return STRUCT_OFFSET(AHowToGameMode, ItemDatabase); }


#define HowTo_Source_HowTo_HowToGameMode_h_10_PROLOG \
	HowTo_Source_HowTo_HowToGameMode_h_13_EVENT_PARMS


#define HowTo_Source_HowTo_HowToGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_HowToGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_HowToGameMode_h_13_SPARSE_DATA \
	HowTo_Source_HowTo_HowToGameMode_h_13_RPC_WRAPPERS \
	HowTo_Source_HowTo_HowToGameMode_h_13_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_HowToGameMode_h_13_INCLASS \
	HowTo_Source_HowTo_HowToGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_HowToGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_HowToGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_HowToGameMode_h_13_SPARSE_DATA \
	HowTo_Source_HowTo_HowToGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_HowToGameMode_h_13_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_HowToGameMode_h_13_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_HowToGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class AHowToGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_HowToGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
