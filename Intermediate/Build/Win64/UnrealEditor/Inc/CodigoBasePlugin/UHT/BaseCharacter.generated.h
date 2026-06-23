// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/BaseCharacter.h"

#ifdef CODIGOBASEPLUGIN_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define CODIGOBASEPLUGIN_BaseCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABaseCharacter ***********************************************************
struct Z_Construct_UClass_ABaseCharacter_Statics;
CODIGOBASEPLUGIN_API UClass* Z_Construct_UClass_ABaseCharacter(ETypeConstructPhase);

#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ABaseCharacter_Statics; \
	friend CODIGOBASEPLUGIN_API UClass* ::Z_Construct_UClass_ABaseCharacter(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodigoBasePlugin"), Z_Construct_UClass_ABaseCharacter) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseCharacter(ABaseCharacter&&) = delete; \
	ABaseCharacter(const ABaseCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter) \
	NO_API virtual ~ABaseCharacter();


#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_BaseCharacter_h_9_PROLOG
#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_BaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseCharacter;

// ********** End Class ABaseCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_BaseCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
