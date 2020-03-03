// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Street_Racing/Street_RacingGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreet_RacingGameMode() {}
// Cross Module References
	STREET_RACING_API UClass* Z_Construct_UClass_AStreet_RacingGameMode_NoRegister();
	STREET_RACING_API UClass* Z_Construct_UClass_AStreet_RacingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Street_Racing();
// End Cross Module References
	void AStreet_RacingGameMode::StaticRegisterNativesAStreet_RacingGameMode()
	{
	}
	UClass* Z_Construct_UClass_AStreet_RacingGameMode_NoRegister()
	{
		return AStreet_RacingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStreet_RacingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStreet_RacingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Street_Racing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStreet_RacingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Street_RacingGameMode.h" },
		{ "ModuleRelativePath", "Street_RacingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStreet_RacingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStreet_RacingGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStreet_RacingGameMode_Statics::ClassParams = {
		&AStreet_RacingGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStreet_RacingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStreet_RacingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStreet_RacingGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStreet_RacingGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStreet_RacingGameMode, 2984727236);
	template<> STREET_RACING_API UClass* StaticClass<AStreet_RacingGameMode>()
	{
		return AStreet_RacingGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStreet_RacingGameMode(Z_Construct_UClass_AStreet_RacingGameMode, &AStreet_RacingGameMode::StaticClass, TEXT("/Script/Street_Racing"), TEXT("AStreet_RacingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStreet_RacingGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
