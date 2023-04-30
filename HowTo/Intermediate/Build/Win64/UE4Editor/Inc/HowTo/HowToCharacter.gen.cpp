// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/HowToCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowToCharacter() {}
// Cross Module References
	HOWTO_API UClass* Z_Construct_UClass_AHowToCharacter_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_AHowToCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HowTo();
	HOWTO_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	HOWTO_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_UComplexAnimInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHowToCharacter::execTriggerCheckPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerCheckPoint_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHowToCharacter::execGetItemInInventory)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItem*)Z_Param__Result=P_THIS->GetItemInInventory(Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHowToCharacter::execStopLookAt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLookAt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHowToCharacter::execStartLookAt)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLookAt(Z_Param_ActorTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHowToCharacter::execHasItemOnHands)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasItemOnHands(Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHowToCharacter::execRemoveItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
		P_GET_UBOOL(Z_Param_RemoveItemFromHands);
		P_GET_PROPERTY(FIntProperty,Z_Param_numOfItemsToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem(Z_Param_ItemID,Z_Param_RemoveItemFromHands,Z_Param_numOfItemsToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHowToCharacter::execAddItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(Z_Param_ItemID);
		P_NATIVE_END;
	}
	static FName NAME_AHowToCharacter_OnHideUI = FName(TEXT("OnHideUI"));
	void AHowToCharacter::OnHideUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHowToCharacter_OnHideUI),NULL);
	}
	static FName NAME_AHowToCharacter_OnRefreshInventory = FName(TEXT("OnRefreshInventory"));
	void AHowToCharacter::OnRefreshInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHowToCharacter_OnRefreshInventory),NULL);
	}
	static FName NAME_AHowToCharacter_OnShowQuestCompleted = FName(TEXT("OnShowQuestCompleted"));
	void AHowToCharacter::OnShowQuestCompleted(FText const& Message)
	{
		HowToCharacter_eventOnShowQuestCompleted_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_AHowToCharacter_OnShowQuestCompleted),&Parms);
	}
	static FName NAME_AHowToCharacter_OnShowQuestInfo = FName(TEXT("OnShowQuestInfo"));
	void AHowToCharacter::OnShowQuestInfo(FQuest Quest)
	{
		HowToCharacter_eventOnShowQuestInfo_Parms Parms;
		Parms.Quest=Quest;
		ProcessEvent(FindFunctionChecked(NAME_AHowToCharacter_OnShowQuestInfo),&Parms);
	}
	static FName NAME_AHowToCharacter_OnShowUI = FName(TEXT("OnShowUI"));
	void AHowToCharacter::OnShowUI(FName Character)
	{
		HowToCharacter_eventOnShowUI_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AHowToCharacter_OnShowUI),&Parms);
	}
	static FName NAME_AHowToCharacter_OnShowUpdatedQuestList = FName(TEXT("OnShowUpdatedQuestList"));
	void AHowToCharacter::OnShowUpdatedQuestList(TArray<FText> const& QuestTextList)
	{
		HowToCharacter_eventOnShowUpdatedQuestList_Parms Parms;
		Parms.QuestTextList=QuestTextList;
		ProcessEvent(FindFunctionChecked(NAME_AHowToCharacter_OnShowUpdatedQuestList),&Parms);
	}
	static FName NAME_AHowToCharacter_OnSpawnItem = FName(TEXT("OnSpawnItem"));
	void AHowToCharacter::OnSpawnItem(TSubclassOf<AActor>  ItemToGrab)
	{
		HowToCharacter_eventOnSpawnItem_Parms Parms;
		Parms.ItemToGrab=ItemToGrab;
		ProcessEvent(FindFunctionChecked(NAME_AHowToCharacter_OnSpawnItem),&Parms);
	}
	static FName NAME_AHowToCharacter_TriggerCheckPoint = FName(TEXT("TriggerCheckPoint"));
	void AHowToCharacter::TriggerCheckPoint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHowToCharacter_TriggerCheckPoint),NULL);
	}
	void AHowToCharacter::StaticRegisterNativesAHowToCharacter()
	{
		UClass* Class = AHowToCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &AHowToCharacter::execAddItem },
			{ "GetItemInInventory", &AHowToCharacter::execGetItemInInventory },
			{ "HasItemOnHands", &AHowToCharacter::execHasItemOnHands },
			{ "RemoveItem", &AHowToCharacter::execRemoveItem },
			{ "StartLookAt", &AHowToCharacter::execStartLookAt },
			{ "StopLookAt", &AHowToCharacter::execStopLookAt },
			{ "TriggerCheckPoint", &AHowToCharacter::execTriggerCheckPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHowToCharacter_AddItem_Statics
	{
		struct HowToCharacter_eventAddItem_Parms
		{
			FName ItemID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventAddItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "buying" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "AddItem", nullptr, nullptr, sizeof(HowToCharacter_eventAddItem_Parms), Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics
	{
		struct HowToCharacter_eventGetItemInInventory_Parms
		{
			FName ItemID;
			FItem ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventGetItemInInventory_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventGetItemInInventory_Parms, ReturnValue), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "GetItemInInventory", nullptr, nullptr, sizeof(HowToCharacter_eventGetItemInInventory_Parms), Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_GetItemInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_GetItemInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics
	{
		struct HowToCharacter_eventHasItemOnHands_Parms
		{
			FName ItemID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventHasItemOnHands_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HowToCharacter_eventHasItemOnHands_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HowToCharacter_eventHasItemOnHands_Parms), &Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::Function_MetaDataParams[] = {
		{ "Category", "buying" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "HasItemOnHands", nullptr, nullptr, sizeof(HowToCharacter_eventHasItemOnHands_Parms), Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_HasItemOnHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_HasItemOnHands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_OnHideUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_OnHideUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_OnHideUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "OnHideUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_OnHideUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnHideUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_OnHideUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_OnHideUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_OnRefreshInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_OnRefreshInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_OnRefreshInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "OnRefreshInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_OnRefreshInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnRefreshInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_OnRefreshInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_OnRefreshInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventOnShowQuestCompleted_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "OnShowQuestCompleted", nullptr, nullptr, sizeof(HowToCharacter_eventOnShowQuestCompleted_Parms), Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventOnShowQuestInfo_Parms, Quest), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "OnShowQuestInfo", nullptr, nullptr, sizeof(HowToCharacter_eventOnShowQuestInfo_Parms), Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventOnShowUI_Parms, Character), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "OnShowUI", nullptr, nullptr, sizeof(HowToCharacter_eventOnShowUI_Parms), Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_OnShowUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_OnShowUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_QuestTextList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestTextList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestTextList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::NewProp_QuestTextList_Inner = { "QuestTextList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::NewProp_QuestTextList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::NewProp_QuestTextList = { "QuestTextList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventOnShowUpdatedQuestList_Parms, QuestTextList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::NewProp_QuestTextList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::NewProp_QuestTextList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::NewProp_QuestTextList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::NewProp_QuestTextList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "OnShowUpdatedQuestList", nullptr, nullptr, sizeof(HowToCharacter_eventOnShowUpdatedQuestList_Parms), Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemToGrab;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::NewProp_ItemToGrab = { "ItemToGrab", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventOnSpawnItem_Parms, ItemToGrab), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::NewProp_ItemToGrab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "OnSpawnItem", nullptr, nullptr, sizeof(HowToCharacter_eventOnSpawnItem_Parms), Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_OnSpawnItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_OnSpawnItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics
	{
		struct HowToCharacter_eventRemoveItem_Parms
		{
			FName ItemID;
			bool RemoveItemFromHands;
			int32 numOfItemsToRemove;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static void NewProp_RemoveItemFromHands_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveItemFromHands;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numOfItemsToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventRemoveItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::NewProp_RemoveItemFromHands_SetBit(void* Obj)
	{
		((HowToCharacter_eventRemoveItem_Parms*)Obj)->RemoveItemFromHands = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::NewProp_RemoveItemFromHands = { "RemoveItemFromHands", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HowToCharacter_eventRemoveItem_Parms), &Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::NewProp_RemoveItemFromHands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::NewProp_numOfItemsToRemove = { "numOfItemsToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventRemoveItem_Parms, numOfItemsToRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::NewProp_RemoveItemFromHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::NewProp_numOfItemsToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "buying" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "RemoveItem", nullptr, nullptr, sizeof(HowToCharacter_eventRemoveItem_Parms), Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics
	{
		struct HowToCharacter_eventStartLookAt_Parms
		{
			AActor* ActorTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::NewProp_ActorTarget = { "ActorTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToCharacter_eventStartLookAt_Parms, ActorTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::NewProp_ActorTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "looking" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "StartLookAt", nullptr, nullptr, sizeof(HowToCharacter_eventStartLookAt_Parms), Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_StartLookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_StartLookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_StopLookAt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_StopLookAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "looking" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_StopLookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "StopLookAt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_StopLookAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_StopLookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_StopLookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_StopLookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToCharacter_TriggerCheckPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToCharacter_TriggerCheckPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToCharacter_TriggerCheckPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToCharacter, nullptr, "TriggerCheckPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToCharacter_TriggerCheckPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToCharacter_TriggerCheckPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToCharacter_TriggerCheckPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToCharacter_TriggerCheckPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHowToCharacter_NoRegister()
	{
		return AHowToCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHowToCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarryItemPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarryItemPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RocketPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RocketPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipmentInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalEquipmentSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalEquipmentSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasItemOnHands_MetaData[];
#endif
		static void NewProp_bHasItemOnHands_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasItemOnHands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexItemOnHands_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexItemOnHands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIDOnHands_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemIDOnHands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHowToCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHowToCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHowToCharacter_AddItem, "AddItem" }, // 936153725
		{ &Z_Construct_UFunction_AHowToCharacter_GetItemInInventory, "GetItemInInventory" }, // 327428021
		{ &Z_Construct_UFunction_AHowToCharacter_HasItemOnHands, "HasItemOnHands" }, // 901596911
		{ &Z_Construct_UFunction_AHowToCharacter_OnHideUI, "OnHideUI" }, // 2695057015
		{ &Z_Construct_UFunction_AHowToCharacter_OnRefreshInventory, "OnRefreshInventory" }, // 2072294609
		{ &Z_Construct_UFunction_AHowToCharacter_OnShowQuestCompleted, "OnShowQuestCompleted" }, // 1364471469
		{ &Z_Construct_UFunction_AHowToCharacter_OnShowQuestInfo, "OnShowQuestInfo" }, // 2317234125
		{ &Z_Construct_UFunction_AHowToCharacter_OnShowUI, "OnShowUI" }, // 2306569226
		{ &Z_Construct_UFunction_AHowToCharacter_OnShowUpdatedQuestList, "OnShowUpdatedQuestList" }, // 799406207
		{ &Z_Construct_UFunction_AHowToCharacter_OnSpawnItem, "OnSpawnItem" }, // 2822029067
		{ &Z_Construct_UFunction_AHowToCharacter_RemoveItem, "RemoveItem" }, // 2091156615
		{ &Z_Construct_UFunction_AHowToCharacter_StartLookAt, "StartLookAt" }, // 2711130278
		{ &Z_Construct_UFunction_AHowToCharacter_StopLookAt, "StopLookAt" }, // 2412871849
		{ &Z_Construct_UFunction_AHowToCharacter_TriggerCheckPoint, "TriggerCheckPoint" }, // 747163701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HowToCharacter.h" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CarryItemPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HowToCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CarryItemPoint = { "CarryItemPoint", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, CarryItemPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CarryItemPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CarryItemPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_RocketPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HowToCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_RocketPoint = { "RocketPoint", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, RocketPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_RocketPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_RocketPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_Animator_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_Animator = { "Animator", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, Animator), Z_Construct_UClass_UComplexAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_Animator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_Animator_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_EquipmentInventory_Inner = { "EquipmentInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_EquipmentInventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Equipment inventory on UI and hands\n" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
		{ "ToolTip", "Equipment inventory on UI and hands" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_EquipmentInventory = { "EquipmentInventory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, EquipmentInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_EquipmentInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_EquipmentInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_TotalEquipmentSlots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Maximun slots \n" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
		{ "ToolTip", "Maximun slots" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_TotalEquipmentSlots = { "TotalEquipmentSlots", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, TotalEquipmentSlots), METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_TotalEquipmentSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_TotalEquipmentSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_bHasItemOnHands_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHowToCharacter_Statics::NewProp_bHasItemOnHands_SetBit(void* Obj)
	{
		((AHowToCharacter*)Obj)->bHasItemOnHands = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_bHasItemOnHands = { "bHasItemOnHands", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHowToCharacter), &Z_Construct_UClass_AHowToCharacter_Statics::NewProp_bHasItemOnHands_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_bHasItemOnHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_bHasItemOnHands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_IndexItemOnHands_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_IndexItemOnHands = { "IndexItemOnHands", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, IndexItemOnHands), METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_IndexItemOnHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_IndexItemOnHands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ItemIDOnHands_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ItemIDOnHands = { "ItemIDOnHands", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, ItemIDOnHands), METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ItemIDOnHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ItemIDOnHands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "HowToCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToCharacter, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHowToCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_CarryItemPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_RocketPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_Animator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_EquipmentInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_EquipmentInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_TotalEquipmentSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_bHasItemOnHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_IndexItemOnHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ItemIDOnHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToCharacter_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHowToCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHowToCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHowToCharacter_Statics::ClassParams = {
		&AHowToCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHowToCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHowToCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHowToCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHowToCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHowToCharacter, 4204733963);
	template<> HOWTO_API UClass* StaticClass<AHowToCharacter>()
	{
		return AHowToCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowToCharacter(Z_Construct_UClass_AHowToCharacter, &AHowToCharacter::StaticClass, TEXT("/Script/HowTo"), TEXT("AHowToCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowToCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
