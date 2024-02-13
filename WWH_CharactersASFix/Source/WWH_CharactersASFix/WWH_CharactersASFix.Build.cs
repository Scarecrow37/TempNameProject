// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WWH_CharactersASFix : ModuleRules
{
	public WWH_CharactersASFix(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
