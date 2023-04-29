// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/Definitions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefinitions() {}
// Cross Module References
	HOWTO_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	UPackage* Z_Construct_UPackage__Script_HowTo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	HOWTO_API UScriptStruct* Z_Construct_UScriptStruct_FQuestItem();
	HOWTO_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	HOWTO_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_UQuestData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	HOWTO_API UClass* Z_Construct_UClass_UItemData_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_UItemData();
// End Cross Module References
class UScriptStruct* FItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOWTO_API uint32 Get_Z_Construct_UScriptStruct_FItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItem, Z_Construct_UPackage__Script_HowTo(), TEXT("Item"), sizeof(FItem), Get_Z_Construct_UScriptStruct_FItem_Hash());
	}
	return Singleton;
}
template<> HOWTO_API UScriptStruct* StaticStruct<FItem>()
{
	return FItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItem(FItem::StaticStruct, TEXT("/Script/HowTo"), TEXT("Item"), false, nullptr, nullptr);
static struct FScriptStruct_HowTo_StaticRegisterNativesFItem
{
	FScriptStruct_HowTo_StaticRegisterNativesFItem()
	{
		UScriptStruct::DeferCppStructOps<FItem>(FName(TEXT("Item")));
	}
} ScriptStruct_HowTo_StaticRegisterNativesFItem;
	struct Z_Construct_UScriptStruct_FItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//// Items ///////\n" },
		{ "ModuleRelativePath", "Definitions.h" },
		{ "ToolTip", "/ Items /" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemActor_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemActor = { "ItemActor", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, ItemActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "// Item to hold on hands\n" },
		{ "ModuleRelativePath", "Definitions.h" },
		{ "ToolTip", "Item to hold on hands" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "// Texture 2D to show on the UI\n" },
		{ "ModuleRelativePath", "Definitions.h" },
		{ "ToolTip", "Texture 2D to show on the UI" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_SpawnedItem_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "Comment", "// value of item in inventory\n// Player inventory elements\n" },
		{ "ModuleRelativePath", "Definitions.h" },
		{ "ToolTip", "value of item in inventory\nPlayer inventory elements" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_SpawnedItem = { "SpawnedItem", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, SpawnedItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_SpawnedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_SpawnedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "Comment", "// Spawned item on player\n" },
		{ "ModuleRelativePath", "Definitions.h" },
		{ "ToolTip", "Spawned item on player" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_SpawnedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Quantity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
		nullptr,
		&NewStructOps,
		"Item",
		sizeof(FItem),
		alignof(FItem),
		Z_Construct_UScriptStruct_FItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HowTo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Item"), sizeof(FItem), Get_Z_Construct_UScriptStruct_FItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItem_Hash() { return 3839195225U; }
class UScriptStruct* FQuestItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOWTO_API uint32 Get_Z_Construct_UScriptStruct_FQuestItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestItem, Z_Construct_UPackage__Script_HowTo(), TEXT("QuestItem"), sizeof(FQuestItem), Get_Z_Construct_UScriptStruct_FQuestItem_Hash());
	}
	return Singleton;
}
template<> HOWTO_API UScriptStruct* StaticStruct<FQuestItem>()
{
	return FQuestItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestItem(FQuestItem::StaticStruct, TEXT("/Script/HowTo"), TEXT("QuestItem"), false, nullptr, nullptr);
static struct FScriptStruct_HowTo_StaticRegisterNativesFQuestItem
{
	FScriptStruct_HowTo_StaticRegisterNativesFQuestItem()
	{
		UScriptStruct::DeferCppStructOps<FQuestItem>(FName(TEXT("QuestItem")));
	}
} ScriptStruct_HowTo_StaticRegisterNativesFQuestItem;
	struct Z_Construct_UScriptStruct_FQuestItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_QuestID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompleted_MetaData[];
#endif
		static void NewProp_IsCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestItem, QuestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_QuestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_QuestID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_IsCompleted_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_IsCompleted_SetBit(void* Obj)
	{
		((FQuestItem*)Obj)->IsCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_IsCompleted = { "IsCompleted", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestItem), &Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_IsCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_IsCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_IsCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestItem_Statics::NewProp_IsCompleted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
		nullptr,
		&NewStructOps,
		"QuestItem",
		sizeof(FQuestItem),
		alignof(FQuestItem),
		Z_Construct_UScriptStruct_FQuestItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HowTo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestItem"), sizeof(FQuestItem), Get_Z_Construct_UScriptStruct_FQuestItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestItem_Hash() { return 2314128673U; }
class UScriptStruct* FQuest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOWTO_API uint32 Get_Z_Construct_UScriptStruct_FQuest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuest, Z_Construct_UPackage__Script_HowTo(), TEXT("Quest"), sizeof(FQuest), Get_Z_Construct_UScriptStruct_FQuest_Hash());
	}
	return Singleton;
}
template<> HOWTO_API UScriptStruct* StaticStruct<FQuest>()
{
	return FQuest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuest(FQuest::StaticStruct, TEXT("/Script/HowTo"), TEXT("Quest"), false, nullptr, nullptr);
static struct FScriptStruct_HowTo_StaticRegisterNativesFQuest
{
	FScriptStruct_HowTo_StaticRegisterNativesFQuest()
	{
		UScriptStruct::DeferCppStructOps<FQuest>(FName(TEXT("Quest")));
	}
} ScriptStruct_HowTo_StaticRegisterNativesFQuest;
	struct Z_Construct_UScriptStruct_FQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_QuestID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SortDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CompleteMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemQuestTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemQuestTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quantityNeeded_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantityNeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, QuestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_SortDescription_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_SortDescription = { "SortDescription", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, SortDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_SortDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_SortDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CompleteMessage_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CompleteMessage = { "CompleteMessage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, CompleteMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CompleteMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CompleteMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemQuestTexture_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemQuestTexture = { "ItemQuestTexture", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, ItemQuestTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemQuestTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemQuestTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_quantityNeeded_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_quantityNeeded = { "quantityNeeded", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, quantityNeeded), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_quantityNeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_quantityNeeded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_SortDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CompleteMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_ItemQuestTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_quantityNeeded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
		nullptr,
		&NewStructOps,
		"Quest",
		sizeof(FQuest),
		alignof(FQuest),
		Z_Construct_UScriptStruct_FQuest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HowTo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Quest"), sizeof(FQuest), Get_Z_Construct_UScriptStruct_FQuest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuest_Hash() { return 2214267425U; }
	void UQuestData::StaticRegisterNativesUQuestData()
	{
	}
	UClass* Z_Construct_UClass_UQuestData_NoRegister()
	{
		return UQuestData::StaticClass();
	}
	struct Z_Construct_UClass_UQuestData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Definitions.h" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestData_Inner = { "QuestData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestData_Statics::NewProp_QuestData_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestData_Statics::NewProp_QuestData = { "QuestData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestData, QuestData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestData_Statics::NewProp_QuestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::NewProp_QuestData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestData_Statics::NewProp_QuestData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestData_Statics::ClassParams = {
		&UQuestData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestData, 2764925413);
	template<> HOWTO_API UClass* StaticClass<UQuestData>()
	{
		return UQuestData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestData(Z_Construct_UClass_UQuestData, &UQuestData::StaticClass, TEXT("/Script/HowTo"), TEXT("UQuestData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestData);
	void UItemData::StaticRegisterNativesUItemData()
	{
	}
	UClass* Z_Construct_UClass_UItemData_NoRegister()
	{
		return UItemData::StaticClass();
	}
	struct Z_Construct_UClass_UItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Definitions.h" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Definitions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UItemData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemData_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemData_Statics::ClassParams = {
		&UItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemData, 3910343909);
	template<> HOWTO_API UClass* StaticClass<UItemData>()
	{
		return UItemData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemData(Z_Construct_UClass_UItemData, &UItemData::StaticClass, TEXT("/Script/HowTo"), TEXT("UItemData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
