// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ClassShooter : ModuleRules
{
    public ClassShooter(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", 
            "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG", "Niagara", "CableComponent" });
    }
}
