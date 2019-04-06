class CfgPatches
{
	class DinkyWalker
	{
		units[] = {"DZ_LightAI"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Zombies"};
	};
};
class CfgVehicles
{
	class DZ_LightAI;
	class DayZInfected: DZ_LightAI{};
	class ZombieBase: DayZInfected
	{
		class Cargo
		{
			itemsCargoSize[] = {4,5};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
};