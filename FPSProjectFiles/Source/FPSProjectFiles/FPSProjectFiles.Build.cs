// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPSProjectFiles : ModuleRules
{
	public FPSProjectFiles(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"FPSProjectFiles",
			"FPSProjectFiles/Variant_Horror",
			"FPSProjectFiles/Variant_Horror/UI",
			"FPSProjectFiles/Variant_Shooter",
			"FPSProjectFiles/Variant_Shooter/AI",
			"FPSProjectFiles/Variant_Shooter/UI",
			"FPSProjectFiles/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
