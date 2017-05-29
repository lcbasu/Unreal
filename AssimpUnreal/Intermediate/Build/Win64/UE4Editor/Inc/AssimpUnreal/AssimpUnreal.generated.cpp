// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AssimpUnreal.h"
#include "AssimpUnreal.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1AssimpUnreal() {}
	void AAssimpActor::StaticRegisterNativesAAssimpActor()
	{
		FNativeFunctionRegistrar::RegisterFunction(AAssimpActor::StaticClass(), "LoadModelThroghAssimp",(Native)&AAssimpActor::execLoadModelThroghAssimp);
	}
	IMPLEMENT_CLASS(AAssimpActor, 1364158695);
	void AAssimpUnrealCharacter::StaticRegisterNativesAAssimpUnrealCharacter()
	{
	}
	IMPLEMENT_CLASS(AAssimpUnrealCharacter, 2970738406);
	void AAssimpUnrealGameMode::StaticRegisterNativesAAssimpUnrealGameMode()
	{
	}
	IMPLEMENT_CLASS(AAssimpUnrealGameMode, 3639163014);
	void AAssimpUnrealHUD::StaticRegisterNativesAAssimpUnrealHUD()
	{
	}
	IMPLEMENT_CLASS(AAssimpUnrealHUD, 3341323414);
	void AAssimpUnrealProjectile::StaticRegisterNativesAAssimpUnrealProjectile()
	{
		FNativeFunctionRegistrar::RegisterFunction(AAssimpUnrealProjectile::StaticClass(), "OnHit",(Native)&AAssimpUnrealProjectile::execOnHit);
	}
	IMPLEMENT_CLASS(AAssimpUnrealProjectile, 4185195335);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	PROCEDURALMESHCOMPONENT_API class UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();

	ASSIMPUNREAL_API class UFunction* Z_Construct_UFunction_AAssimpActor_LoadModelThroghAssimp();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpActor_NoRegister();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpActor();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealCharacter_NoRegister();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealCharacter();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealGameMode_NoRegister();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealGameMode();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealHUD_NoRegister();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealHUD();
	ASSIMPUNREAL_API class UFunction* Z_Construct_UFunction_AAssimpUnrealProjectile_OnHit();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealProjectile_NoRegister();
	ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealProjectile();
	ASSIMPUNREAL_API class UPackage* Z_Construct_UPackage__Script_AssimpUnreal();
	UFunction* Z_Construct_UFunction_AAssimpActor_LoadModelThroghAssimp()
	{
		struct AssimpActor_eventLoadModelThroghAssimp_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AAssimpActor();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadModelThroghAssimp"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(AssimpActor_eventLoadModelThroghAssimp_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AssimpActor_eventLoadModelThroghAssimp_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AssimpActor_eventLoadModelThroghAssimp_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AssimpActor_eventLoadModelThroghAssimp_Parms), sizeof(bool), true);
			UProperty* NewProp_FilePath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FilePath, AssimpActor_eventLoadModelThroghAssimp_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Assimp"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AssimpActor.h"));
			MetaData->SetValue(NewProp_FilePath, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAssimpActor_NoRegister()
	{
		return AAssimpActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssimpActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_AssimpUnreal();
			OuterClass = AAssimpActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AAssimpActor_LoadModelThroghAssimp());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, AAssimpActor), 0x00100000000a0009, Z_Construct_UClass_UProceduralMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAssimpActor_LoadModelThroghAssimp(), "LoadModelThroghAssimp"); // 737906694
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AssimpActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AssimpActor.h"));
				MetaData->SetValue(NewProp_Mesh, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh, TEXT("ModuleRelativePath"), TEXT("AssimpActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssimpActor(Z_Construct_UClass_AAssimpActor, &AAssimpActor::StaticClass, TEXT("AAssimpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssimpActor);
	UClass* Z_Construct_UClass_AAssimpUnrealCharacter_NoRegister()
	{
		return AAssimpUnrealCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssimpUnrealCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_AssimpUnreal();
			OuterClass = AAssimpUnrealCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUsingMotionControllers, AAssimpUnrealCharacter, uint8);
				UProperty* NewProp_bUsingMotionControllers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUsingMotionControllers"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUsingMotionControllers, AAssimpUnrealCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUsingMotionControllers, AAssimpUnrealCharacter), sizeof(uint8), false);
				UProperty* NewProp_FireAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireAnimation, AAssimpUnrealCharacter), 0x0010000000000005, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_FireSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireSound, AAssimpUnrealCharacter), 0x0010000000000005, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, AAssimpUnrealCharacter), 0x0014000000010001, Z_Construct_UClass_AAssimpUnrealProjectile_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_GunOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GunOffset, AAssimpUnrealCharacter), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AAssimpUnrealCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AAssimpUnrealCharacter), 0x0010000000020015);
				UProperty* NewProp_L_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("L_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(L_MotionController, AAssimpUnrealCharacter), 0x00400000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_R_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("R_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(R_MotionController, AAssimpUnrealCharacter), 0x00400000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_FirstPersonCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, AAssimpUnrealCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_VR_MuzzleLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VR_MuzzleLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VR_MuzzleLocation, AAssimpUnrealCharacter), 0x00400000000b0009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_VR_Gun = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VR_Gun"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VR_Gun, AAssimpUnrealCharacter), 0x00400000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FP_MuzzleLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FP_MuzzleLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FP_MuzzleLocation, AAssimpUnrealCharacter), 0x00400000000b0009, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_FP_Gun = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FP_Gun"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FP_Gun, AAssimpUnrealCharacter), 0x00400000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, AAssimpUnrealCharacter), 0x00400000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_bUsingMotionControllers, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_bUsingMotionControllers, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_bUsingMotionControllers, TEXT("ToolTip"), TEXT("Whether to use motion controller location for aiming."));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ToolTip"), TEXT("AnimMontage to play each time we fire"));
				MetaData->SetValue(NewProp_FireSound, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ToolTip"), TEXT("Sound to play each time we fire"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_GunOffset, TEXT("ToolTip"), TEXT("Gun muzzle's offset from the characters location"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("Category"), TEXT("AssimpUnrealCharacter"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ToolTip"), TEXT("Motion controller (left hand)"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("Category"), TEXT("AssimpUnrealCharacter"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ToolTip"), TEXT("Motion controller (right hand)"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ToolTip"), TEXT("First person camera"));
				MetaData->SetValue(NewProp_VR_MuzzleLocation, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_VR_MuzzleLocation, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VR_MuzzleLocation, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_VR_MuzzleLocation, TEXT("ToolTip"), TEXT("Location on VR gun mesh where projectiles should spawn."));
				MetaData->SetValue(NewProp_VR_Gun, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_VR_Gun, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VR_Gun, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_VR_Gun, TEXT("ToolTip"), TEXT("Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)"));
				MetaData->SetValue(NewProp_FP_MuzzleLocation, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FP_MuzzleLocation, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FP_MuzzleLocation, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_FP_MuzzleLocation, TEXT("ToolTip"), TEXT("Location on gun mesh where projectiles should spawn."));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_FP_Gun, TEXT("ToolTip"), TEXT("Gun mesh: 1st person view (seen only by self)"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ToolTip"), TEXT("Pawn mesh: 1st person view (arms; seen only by self)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssimpUnrealCharacter(Z_Construct_UClass_AAssimpUnrealCharacter, &AAssimpUnrealCharacter::StaticClass, TEXT("AAssimpUnrealCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssimpUnrealCharacter);
	UClass* Z_Construct_UClass_AAssimpUnrealGameMode_NoRegister()
	{
		return AAssimpUnrealGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssimpUnrealGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_AssimpUnreal();
			OuterClass = AAssimpUnrealGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AssimpUnrealGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssimpUnrealGameMode(Z_Construct_UClass_AAssimpUnrealGameMode, &AAssimpUnrealGameMode::StaticClass, TEXT("AAssimpUnrealGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssimpUnrealGameMode);
	UClass* Z_Construct_UClass_AAssimpUnrealHUD_NoRegister()
	{
		return AAssimpUnrealHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssimpUnrealHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_AssimpUnreal();
			OuterClass = AAssimpUnrealHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AssimpUnrealHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssimpUnrealHUD(Z_Construct_UClass_AAssimpUnrealHUD, &AAssimpUnrealHUD::StaticClass, TEXT("AAssimpUnrealHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssimpUnrealHUD);
	UFunction* Z_Construct_UFunction_AAssimpUnrealProjectile_OnHit()
	{
		struct AssimpUnrealProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AAssimpUnrealProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(AssimpUnrealProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, AssimpUnrealProjectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, AssimpUnrealProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, AssimpUnrealProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, AssimpUnrealProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, AssimpUnrealProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when projectile hits something"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAssimpUnrealProjectile_NoRegister()
	{
		return AAssimpUnrealProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssimpUnrealProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_AssimpUnreal();
			OuterClass = AAssimpUnrealProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_AAssimpUnrealProjectile_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovement, AAssimpUnrealProjectile), 0x00400000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, AAssimpUnrealProjectile), 0x00400000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAssimpUnrealProjectile_OnHit(), "OnHit"); // 4041414108
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AssimpUnrealProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ToolTip"), TEXT("Projectile movement component"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("AssimpUnrealProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssimpUnrealProjectile(Z_Construct_UClass_AAssimpUnrealProjectile, &AAssimpUnrealProjectile::StaticClass, TEXT("AAssimpUnrealProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssimpUnrealProjectile);
	UPackage* Z_Construct_UPackage__Script_AssimpUnreal()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/AssimpUnreal")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x61812B90;
			Guid.B = 0x4FF0107E;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS