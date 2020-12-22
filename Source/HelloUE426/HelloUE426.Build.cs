// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HelloUE426 : ModuleRules
{
	public HelloUE426(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
