class CfgPatches
{
	class DinkyWalker
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Zombies"};
	};
};
class CfgVehicles
{
	class DayZInfected;
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