// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/ShopCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopCharacter() {}
// Cross Module References
	HOWTO_API UClass* Z_Construct_UClass_AShopCharacter_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_AShopCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HowTo();
// End Cross Module References
	void AShopCharacter::StaticRegisterNativesAShopCharacter()
	{
	}
	UClass* Z_Construct_UClass_AShopCharacter_NoRegister()
	{
		return AShopCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShopCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShopCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShopCharacter.h" },
		{ "ModuleRelativePath", "ShopCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShopCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShopCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShopCharacter_Statics::ClassParams = {
		&AShopCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShopCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShopCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShopCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShopCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShopCharacter, 3633203276);
	template<> HOWTO_API UClass* StaticClass<AShopCharacter>()
	{
		return AShopCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShopCharacter(Z_Construct_UClass_AShopCharacter, &AShopCharacter::StaticClass, TEXT("/Script/HowTo"), TEXT("AShopCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShopCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
