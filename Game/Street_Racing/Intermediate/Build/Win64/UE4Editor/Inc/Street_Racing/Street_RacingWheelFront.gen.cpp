// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Street_Racing/Street_RacingWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreet_RacingWheelFront() {}
// Cross Module References
	STREET_RACING_API UClass* Z_Construct_UClass_UStreet_RacingWheelFront_NoRegister();
	STREET_RACING_API UClass* Z_Construct_UClass_UStreet_RacingWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_Street_Racing();
// End Cross Module References
	void UStreet_RacingWheelFront::StaticRegisterNativesUStreet_RacingWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UStreet_RacingWheelFront_NoRegister()
	{
		return UStreet_RacingWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UStreet_RacingWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreet_RacingWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_Street_Racing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreet_RacingWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Street_RacingWheelFront.h" },
		{ "ModuleRelativePath", "Street_RacingWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreet_RacingWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreet_RacingWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreet_RacingWheelFront_Statics::ClassParams = {
		&UStreet_RacingWheelFront::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreet_RacingWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreet_RacingWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreet_RacingWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreet_RacingWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreet_RacingWheelFront, 1770270000);
	template<> STREET_RACING_API UClass* StaticClass<UStreet_RacingWheelFront>()
	{
		return UStreet_RacingWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreet_RacingWheelFront(Z_Construct_UClass_UStreet_RacingWheelFront, &UStreet_RacingWheelFront::StaticClass, TEXT("/Script/Street_Racing"), TEXT("UStreet_RacingWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreet_RacingWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
