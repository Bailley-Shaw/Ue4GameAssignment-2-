// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_MainMenuGameMode_generated_h
#error "MainMenuGameMode.generated.h already included, missing '#pragma once' in MainMenuGameMode.h"
#endif
#define HOWTO_MainMenuGameMode_generated_h

#define HowTo_Source_HowTo_MainMenuGameMode_h_15_SPARSE_DATA
#define HowTo_Source_HowTo_MainMenuGameMode_h_15_RPC_WRAPPERS \
	virtual void OnLoadGame_Implementation(FName MapNameToLoad); \
	virtual void OnNewGame_Implementation(FName MapNameToLoad); \
 \
	DECLARE_FUNCTION(execOnLoadGame); \
	DECLARE_FUNCTION(execOnNewGame);


#define HowTo_Source_HowTo_MainMenuGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLoadGame); \
	DECLARE_FUNCTION(execOnNewGame);


#define HowTo_Source_HowTo_MainMenuGameMode_h_15_EVENT_PARMS \
	struct MainMenuGameMode_eventOnLoadGame_Parms \
	{ \
		FName MapNameToLoad; \
	}; \
	struct MainMenuGameMode_eventOnNewGame_Parms \
	{ \
		FName MapNameToLoad; \
	}; \
	struct MainMenuGameMode_eventOnShowMainMenu_Parms \
	{ \
		bool NewGame; \
	};


#define HowTo_Source_HowTo_MainMenuGameMode_h_15_CALLBACK_WRAPPERS
#define HowTo_Source_HowTo_MainMenuGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainMenuGameMode(); \
	friend struct Z_Construct_UClass_AMainMenuGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainMenuGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuGameMode)


#define HowTo_Source_HowTo_MainMenuGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMainMenuGameMode(); \
	friend struct Z_Construct_UClass_AMainMenuGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainMenuGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuGameMode)


#define HowTo_Source_HowTo_MainMenuGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainMenuGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainMenuGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuGameMode(AMainMenuGameMode&&); \
	NO_API AMainMenuGameMode(const AMainMenuGameMode&); \
public:


#define HowTo_Source_HowTo_MainMenuGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainMenuGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuGameMode(AMainMenuGameMode&&); \
	NO_API AMainMenuGameMode(const AMainMenuGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainMenuGameMode)


#define HowTo_Source_HowTo_MainMenuGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameInstance() { return STRUCT_OFFSET(AMainMenuGameMode, GameInstance); }


#define HowTo_Source_HowTo_MainMenuGameMode_h_12_PROLOG \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_EVENT_PARMS


#define HowTo_Source_HowTo_MainMenuGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_SPARSE_DATA \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_RPC_WRAPPERS \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_INCLASS \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_MainMenuGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_SPARSE_DATA \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_MainMenuGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class AMainMenuGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_MainMenuGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
