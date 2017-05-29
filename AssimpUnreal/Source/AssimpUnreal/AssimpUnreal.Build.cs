// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class AssimpUnreal : ModuleRules
{

    private string AssimpPath
    {
        get
        {
            return @"E:\Dev\VArch\VArch-Development\ThirdParty\Assimp\assimp-3.1.1-win-binaries";
        }
    }

    public AssimpUnreal(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "ProceduralMeshComponent" });


        // Assimp
        PublicAdditionalLibraries.Add(Path.Combine(AssimpPath, "lib64", "assimp.lib"));

        PublicIncludePaths.Add(Path.Combine(AssimpPath, "include"));
    }
}
