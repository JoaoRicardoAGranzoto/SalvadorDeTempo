// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/BaseCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CodigoBasePlugin(ETypeConstructPhase);
CODIGOBASEPLUGIN_API UClass* Z_Construct_UClass_ABaseCharacter(ETypeConstructPhase);
CODIGOBASEPLUGIN_API UClass* Z_Construct_UClass_AAssetBase(ETypeConstructPhase);
CODIGOBASEPLUGIN_API UClass* Z_Construct_UClass_ABaseCharacter(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ABaseCharacter ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ABaseCharacter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Characters/BaseCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABaseCharacter constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABaseCharacter constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ABaseCharacter Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, Asset), Z_Construct_UClass_AAssetBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ABaseCharacter Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_ACharacter,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CodigoBasePlugin,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ABaseCharacter,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseCharacter;
UClass* Z_Construct_UClass_ABaseCharacter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ABaseCharacter;
		if (!Z_Registration_Info_UClass_ABaseCharacter.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BaseCharacter"),
				Z_Registration_Info_UClass_ABaseCharacter.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_ABaseCharacter.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABaseCharacter);
ABaseCharacter::~ABaseCharacter() {}
// ********** End Class ABaseCharacter *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_CodigoBase_Plugins_SalvadorDeTempo_Source_CodigoBasePlugin_Public_Characters_BaseCharacter_h__Script_CodigoBasePlugin_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 2632609826U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodigoBase_Plugins_SalvadorDeTempo_Source_CodigoBasePlugin_Public_Characters_BaseCharacter_h__Script_CodigoBasePlugin_a0129639742cbb5ebac2fc397dddbb38ec03f0a0{
	TEXT("/Script/CodigoBasePlugin"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
