// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/PlayableCharacters/BasePlayerController.h"

#ifdef CODIGOBASEPLUGIN_BasePlayerController_generated_h
#error "BasePlayerController.generated.h already included, missing '#pragma once' in BasePlayerController.h"
#endif
#define CODIGOBASEPLUGIN_BasePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABasePlayerController ****************************************************
struct Z_Construct_UClass_ABasePlayerController_Statics;
CODIGOBASEPLUGIN_API UClass* Z_Construct_UClass_ABasePlayerController(ETypeConstructPhase);

#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ABasePlayerController_Statics; \
	friend CODIGOBASEPLUGIN_API UClass* ::Z_Construct_UClass_ABasePlayerController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodigoBasePlugin"), Z_Construct_UClass_ABasePlayerController) \
	DECLARE_SERIALIZER(ABasePlayerController)


#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasePlayerController(ABasePlayerController&&) = delete; \
	ABasePlayerController(const ABasePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerController) \
	NO_API virtual ~ABasePlayerController();


#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayerController_h_10_PROLOG
#define FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasePlayerController;

// ********** End Class ABasePlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodigoBase_Plugins_CodigoBasePlugin_Source_CodigoBasePlugin_Public_Characters_PlayableCharacters_BasePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
