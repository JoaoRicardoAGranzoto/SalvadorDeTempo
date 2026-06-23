// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/PlayableCharacters/BasePlayableCharacter.h"

#ifdef CODIGOBASEPLUGIN_BasePlayableCharacter_generated_h
#error "BasePlayableCharacter.generated.h already included, missing '#pragma once' in BasePlayableCharacter.h"
#endif
#define CODIGOBASEPLUGIN_BasePlayableCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABasePlayableCharacter ***************************************************
struct Z_Construct_UClass_ABasePlayableCharacter_Statics;
CODIGOBASEPLUGIN_API UClass* Z_Construct_UClass_ABasePlayableCharacter(ETypeConstructPhase);

#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayableCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ABasePlayableCharacter_Statics; \
	friend CODIGOBASEPLUGIN_API UClass* ::Z_Construct_UClass_ABasePlayableCharacter(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ABasePlayableCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodigoBasePlugin"), Z_Construct_UClass_ABasePlayableCharacter) \
	DECLARE_SERIALIZER(ABasePlayableCharacter)


#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayableCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasePlayableCharacter(ABasePlayableCharacter&&) = delete; \
	ABasePlayableCharacter(const ABasePlayableCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayableCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayableCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayableCharacter) \
	NO_API virtual ~ABasePlayableCharacter();


#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayableCharacter_h_9_PROLOG
#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayableCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayableCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayableCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasePlayableCharacter;

// ********** End Class ABasePlayableCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayableCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
