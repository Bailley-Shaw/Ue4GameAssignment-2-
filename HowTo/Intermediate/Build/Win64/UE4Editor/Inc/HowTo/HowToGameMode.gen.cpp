// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/HowToGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowToGameMode() {}
// Cross Module References
	HOWTO_API UClass* Z_Construct_UClass_AHowToGameMode_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_AHowToGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo();
	HOWTO_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	HOWTO_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	HOWTO_API UClass* Z_Construct_UClass_UQuestData_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_UItemData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHowToGameMode::execFindItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemID);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItem*)Z_Param__Result=P_THIS->FindItem_Implementation(Z_Param_ItemID,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHowToGameMode::execFindQuest)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_QuestID);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuest*)Z_Param__Result=P_THIS->FindQuest_Implementation(Z_Param_QuestID,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	static FName NAME_AHowToGameMode_FindItem = FName(TEXT("FindItem"));
	FItem AHowToGameMode::FindItem(FName ItemID, bool& Success)
	{
		HowToGameMode_eventFindItem_Parms Parms;
		Parms.ItemID=ItemID;
		Parms.Success=Success ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AHowToGameMode_FindItem),&Parms);
		Success=Parms.Success;
		return Parms.ReturnValue;
	}
	static FName NAME_AHowToGameMode_FindQuest = FName(TEXT("FindQuest"));
	FQuest AHowToGameMode::FindQuest(FName QuestID, bool& Success)
	{
		HowToGameMode_eventFindQuest_Parms Parms;
		Parms.QuestID=QuestID;
		Parms.Success=Success ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AHowToGameMode_FindQuest),&Parms);
		Success=Parms.Success;
		return Parms.ReturnValue;
	}
	void AHowToGameMode::StaticRegisterNativesAHowToGameMode()
	{
		UClass* Class = AHowToGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindItem", &AHowToGameMode::execFindItem },
			{ "FindQuest", &AHowToGameMode::execFindQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHowToGameMode_FindItem_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToGameMode_eventFindItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((HowToGameMode_eventFindItem_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HowToGameMode_eventFindItem_Parms), &Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToGameMode_eventFindItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item System" },
		{ "ModuleRelativePath", "HowToGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToGameMode, nullptr, "FindItem", nullptr, nullptr, sizeof(HowToGameMode_eventFindItem_Parms), Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToGameMode_FindItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToGameMode_FindItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_QuestID;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToGameMode_eventFindQuest_Parms, QuestID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((HowToGameMode_eventFindQuest_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HowToGameMode_eventFindQuest_Parms), &Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HowToGameMode_eventFindQuest_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System" },
		{ "ModuleRelativePath", "HowToGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowToGameMode, nullptr, "FindQuest", nullptr, nullptr, sizeof(HowToGameMode_eventFindQuest_Parms), Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHowToGameMode_FindQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHowToGameMode_FindQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHowToGameMode_NoRegister()
	{
		return AHowToGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHowToGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestDatabase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestDatabase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDatabase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDatabase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHowToGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHowToGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHowToGameMode_FindItem, "FindItem" }, // 1986760066
		{ &Z_Construct_UFunction_AHowToGameMode_FindQuest, "FindQuest" }, // 2433785835
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HowToGameMode.h" },
		{ "ModuleRelativePath", "HowToGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToGameMode_Statics::NewProp_QuestDatabase_MetaData[] = {
		{ "Category", "Quest System" },
		{ "ModuleRelativePath", "HowToGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHowToGameMode_Statics::NewProp_QuestDatabase = { "QuestDatabase", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToGameMode, QuestDatabase), Z_Construct_UClass_UQuestData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHowToGameMode_Statics::NewProp_QuestDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToGameMode_Statics::NewProp_QuestDatabase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHowToGameMode_Statics::NewProp_ItemDatabase_MetaData[] = {
		{ "Category", "Item System" },
		{ "ModuleRelativePath", "HowToGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHowToGameMode_Statics::NewProp_ItemDatabase = { "ItemDatabase", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHowToGameMode, ItemDatabase), Z_Construct_UClass_UItemData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHowToGameMode_Statics::NewProp_ItemDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToGameMode_Statics::NewProp_ItemDatabase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHowToGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToGameMode_Statics::NewProp_QuestDatabase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHowToGameMode_Statics::NewProp_ItemDatabase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHowToGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHowToGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHowToGameMode_Statics::ClassParams = {
		&AHowToGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHowToGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHowToGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHowToGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHowToGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHowToGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHowToGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHowToGameMode, 3203979234);
	template<> HOWTO_API UClass* StaticClass<AHowToGameMode>()
	{
		return AHowToGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowToGameMode(Z_Construct_UClass_AHowToGameMode, &AHowToGameMode::StaticClass, TEXT("/Script/HowTo"), TEXT("AHowToGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowToGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
