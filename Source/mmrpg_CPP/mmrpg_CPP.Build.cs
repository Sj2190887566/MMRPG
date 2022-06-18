// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class mmrpg_CPP : ModuleRules
{
	public mmrpg_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
