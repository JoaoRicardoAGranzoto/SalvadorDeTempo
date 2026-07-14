// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodigoBasePlugin_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CodigoBasePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CodigoBasePlugin(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_CodigoBasePlugin.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/CodigoBasePlugin",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x7DA239E0,
			0x52793749,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CodigoBasePlugin.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_CodigoBasePlugin.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CodigoBasePlugin(Z_Construct_UPackage__Script_CodigoBasePlugin, TEXT("/Script/CodigoBasePlugin"), Z_Registration_Info_UPackage__Script_CodigoBasePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7DA239E0, 0x52793749));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
