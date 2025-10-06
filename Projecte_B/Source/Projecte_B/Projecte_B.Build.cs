// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Projecte_B : ModuleRules
{
	public Projecte_B(ReadOnlyTargetRules Target) : base(Target)
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
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Projecte_B",
			"Projecte_B/Variant_Platforming",
			"Projecte_B/Variant_Combat",
			"Projecte_B/Variant_Combat/AI",
			"Projecte_B/Variant_SideScrolling",
			"Projecte_B/Variant_SideScrolling/Gameplay",
			"Projecte_B/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
