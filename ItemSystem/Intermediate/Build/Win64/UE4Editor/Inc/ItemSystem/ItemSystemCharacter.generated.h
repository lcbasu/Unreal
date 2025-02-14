// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ITEMSYSTEM_ItemSystemCharacter_generated_h
#error "ItemSystemCharacter.generated.h already included, missing '#pragma once' in ItemSystemCharacter.h"
#endif
#define ITEMSYSTEM_ItemSystemCharacter_generated_h

#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_RPC_WRAPPERS
#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAItemSystemCharacter(); \
	friend ITEMSYSTEM_API class UClass* Z_Construct_UClass_AItemSystemCharacter(); \
	public: \
	DECLARE_CLASS(AItemSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ItemSystem"), NO_API) \
	DECLARE_SERIALIZER(AItemSystemCharacter) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAItemSystemCharacter(); \
	friend ITEMSYSTEM_API class UClass* Z_Construct_UClass_AItemSystemCharacter(); \
	public: \
	DECLARE_CLASS(AItemSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ItemSystem"), NO_API) \
	DECLARE_SERIALIZER(AItemSystemCharacter) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemSystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemSystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemSystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemSystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemSystemCharacter(AItemSystemCharacter&&); \
	NO_API AItemSystemCharacter(const AItemSystemCharacter&); \
public:


#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemSystemCharacter(AItemSystemCharacter&&); \
	NO_API AItemSystemCharacter(const AItemSystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemSystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemSystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemSystemCharacter)


#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AItemSystemCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AItemSystemCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AItemSystemCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AItemSystemCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AItemSystemCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AItemSystemCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AItemSystemCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AItemSystemCharacter, L_MotionController); }


#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_8_PROLOG
#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_RPC_WRAPPERS \
	ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_INCLASS \
	ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_INCLASS_NO_PURE_DECLS \
	ItemSystem_Source_ItemSystem_ItemSystemCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ItemSystem_Source_ItemSystem_ItemSystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
