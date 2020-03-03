// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Street_Racing/Street_RacingWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreet_RacingWheelRear() {}
// Cross Module References
	STREET_RACING_API UClass* Z_Construct_UClass_UStreet_RacingWheelRear_NoRegister();
	STREET_RACING_API UClass* Z_Construct_UClass_UStreet_RacingWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_Street_Racing();
// End Cross Module References
	void UStreet_RacingWheelRear::StaticRegisterNativesUStreet_RacingWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UStreet_RacingWheelRear_NoRegister()
	{
		return UStreet_RacingWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UStreet_RacingWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreet_RacingWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_Street_Racing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreet_RacingWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Street_RacingWheelRear.h" },
		{ "ModuleRelativePath", "Street_RacingWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreet_RacingWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreet_RacingWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreet_RacingWheelRear_Statics::ClassParams = {
		&UStreet_RacingWheelRear::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStreet_RacingWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreet_RacingWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreet_RacingWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreet_RacingWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreet_RacingWheelRear, 2255960995);
	template<> STREET_RACING_API UClass* StaticClass<UStreet_RacingWheelRear>()
	{
		return UStreet_RacingWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreet_RacingWheelRear(Z_Construct_UClass_UStreet_RacingWheelRear, &UStreet_RacingWheelRear::StaticClass, TEXT("/Script/Street_Racing"), TEXT("UStreet_RacingWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreet_RacingWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
