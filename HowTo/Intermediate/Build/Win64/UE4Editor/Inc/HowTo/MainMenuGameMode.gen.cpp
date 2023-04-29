// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/MainMenuGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameMode() {}
// Cross Module References
	HOWTO_API UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_AMainMenuGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo();
	HOWTO_API UClass* Z_Construct_UClass_UHowToGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMainMenuGameMode::execOnLoadGame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MapNameToLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadGame_Implementation(Z_Param_MapNameToLoad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainMenuGameMode::execOnNewGame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MapNameToLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNewGame_Implementation(Z_Param_MapNameToLoad);
		P_NATIVE_END;
	}
	static FName NAME_AMainMenuGameMode_OnLoadGame = FName(TEXT("OnLoadGame"));
	void AMainMenuGameMode::OnLoadGame(FName MapNameToLoad)
	{
		MainMenuGameMode_eventOnLoadGame_Parms Parms;
		Parms.MapNameToLoad=MapNameToLoad;
		ProcessEvent(FindFunctionChecked(NAME_AMainMenuGameMode_OnLoadGame),&Parms);
	}
	static FName NAME_AMainMenuGameMode_OnNewGame = FName(TEXT("OnNewGame"));
	void AMainMenuGameMode::OnNewGame(FName MapNameToLoad)
	{
		MainMenuGameMode_eventOnNewGame_Parms Parms;
		Parms.MapNameToLoad=MapNameToLoad;
		ProcessEvent(FindFunctionChecked(NAME_AMainMenuGameMode_OnNewGame),&Parms);
	}
	static FName NAME_AMainMenuGameMode_OnShowMainMenu = FName(TEXT("OnShowMainMenu"));
	void AMainMenuGameMode::OnShowMainMenu(bool NewGame)
	{
		MainMenuGameMode_eventOnShowMainMenu_Parms Parms;
		Parms.NewGame=NewGame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMainMenuGameMode_OnShowMainMenu),&Parms);
	}
	void AMainMenuGameMode::StaticRegisterNativesAMainMenuGameMode()
	{
		UClass* Class = AMainMenuGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoadGame", &AMainMenuGameMode::execOnLoadGame },
			{ "OnNewGame", &AMainMenuGameMode::execOnNewGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapNameToLoad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::NewProp_MapNameToLoad = { "MapNameToLoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainMenuGameMode_eventOnLoadGame_Parms, MapNameToLoad), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::NewProp_MapNameToLoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Events" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuGameMode, nullptr, "OnLoadGame", nullptr, nullptr, sizeof(MainMenuGameMode_eventOnLoadGame_Parms), Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapNameToLoad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::NewProp_MapNameToLoad = { "MapNameToLoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainMenuGameMode_eventOnNewGame_Parms, MapNameToLoad), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::NewProp_MapNameToLoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Events" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuGameMode, nullptr, "OnNewGame", nullptr, nullptr, sizeof(MainMenuGameMode_eventOnNewGame_Parms), Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainMenuGameMode_OnNewGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainMenuGameMode_OnNewGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics
	{
		static void NewProp_NewGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::NewProp_NewGame_SetBit(void* Obj)
	{
		((MainMenuGameMode_eventOnShowMainMenu_Parms*)Obj)->NewGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::NewProp_NewGame = { "NewGame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MainMenuGameMode_eventOnShowMainMenu_Parms), &Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::NewProp_NewGame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::NewProp_NewGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu Events" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuGameMode, nullptr, "OnShowMainMenu", nullptr, nullptr, sizeof(MainMenuGameMode_eventOnShowMainMenu_Parms), Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainMenuGameMode_NoRegister()
	{
		return AMainMenuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainMenuGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainMenuGameMode_OnLoadGame, "OnLoadGame" }, // 2478383402
		{ &Z_Construct_UFunction_AMainMenuGameMode_OnNewGame, "OnNewGame" }, // 2109144627
		{ &Z_Construct_UFunction_AMainMenuGameMode_OnShowMainMenu, "OnShowMainMenu" }, // 2986432016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainMenuGameMode.h" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_GameInstance_MetaData[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "MainMenuGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameMode, GameInstance), Z_Construct_UClass_UHowToGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_GameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameMode_Statics::NewProp_GameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams = {
		&AMainMenuGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuGameMode, 572033940);
	template<> HOWTO_API UClass* StaticClass<AMainMenuGameMode>()
	{
		return AMainMenuGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuGameMode(Z_Construct_UClass_AMainMenuGameMode, &AMainMenuGameMode::StaticClass, TEXT("/Script/HowTo"), TEXT("AMainMenuGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
