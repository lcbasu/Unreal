// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKINGTUTORIAL_1_NetworkingTutorial_1Character_generated_h
#error "NetworkingTutorial_1Character.generated.h already included, missing '#pragma once' in NetworkingTutorial_1Character.h"
#endif
#define NETWORKINGTUTORIAL_1_NetworkingTutorial_1Character_generated_h

#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_RPC_WRAPPERS \
	virtual bool MyServerFunc_Validate(); \
	virtual void MyServerFunc_Implementation(); \
 \
	DECLARE_FUNCTION(execMyServerFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->MyServerFunc_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MyServerFunc_Validate")); \
			return; \
		} \
		this->MyServerFunc_Implementation(); \
		P_NATIVE_END; \
	}


#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyServerFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->MyServerFunc_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("MyServerFunc_Validate")); \
			return; \
		} \
		this->MyServerFunc_Implementation(); \
		P_NATIVE_END; \
	}


#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_EVENT_PARMS
extern NETWORKINGTUTORIAL_1_API  FName NETWORKINGTUTORIAL_1_MyServerFunc;
#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_CALLBACK_WRAPPERS
#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesANetworkingTutorial_1Character(); \
	friend NETWORKINGTUTORIAL_1_API class UClass* Z_Construct_UClass_ANetworkingTutorial_1Character(); \
	public: \
	DECLARE_CLASS(ANetworkingTutorial_1Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/NetworkingTutorial_1"), NO_API) \
	DECLARE_SERIALIZER(ANetworkingTutorial_1Character) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesANetworkingTutorial_1Character(); \
	friend NETWORKINGTUTORIAL_1_API class UClass* Z_Construct_UClass_ANetworkingTutorial_1Character(); \
	public: \
	DECLARE_CLASS(ANetworkingTutorial_1Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/NetworkingTutorial_1"), NO_API) \
	DECLARE_SERIALIZER(ANetworkingTutorial_1Character) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetworkingTutorial_1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkingTutorial_1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkingTutorial_1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkingTutorial_1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkingTutorial_1Character(ANetworkingTutorial_1Character&&); \
	NO_API ANetworkingTutorial_1Character(const ANetworkingTutorial_1Character&); \
public:


#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkingTutorial_1Character(ANetworkingTutorial_1Character&&); \
	NO_API ANetworkingTutorial_1Character(const ANetworkingTutorial_1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkingTutorial_1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkingTutorial_1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkingTutorial_1Character)


#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ANetworkingTutorial_1Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ANetworkingTutorial_1Character, FollowCamera); }


#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_6_PROLOG \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_EVENT_PARMS


#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_PRIVATE_PROPERTY_OFFSET \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_RPC_WRAPPERS \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_CALLBACK_WRAPPERS \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_INCLASS \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_PRIVATE_PROPERTY_OFFSET \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_CALLBACK_WRAPPERS \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_INCLASS_NO_PURE_DECLS \
	NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkingTutorial_1_Source_NetworkingTutorial_1_NetworkingTutorial_1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
