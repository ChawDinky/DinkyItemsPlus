class CfgPatches
{
	class DinkyItemsPlus_Kuznecov
	{
		units[]=
		{
			"Hatchbackwheel",
			"HatchbackWheel_Ruined",
			"cardoor",
			"uazbWheel",
			"uazbWheel_destroyed",
			"UazBDoors_Driver"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Vehicles_Wheeled"
		};
	};
};
class CfgVehicles
{
	class Hatchbackwheel;
	class HatchbackWheel_Ruined;
	class cardoor;
	class uazbWheel: Hatchbackwheel
	{
	};
	class uazbWheel_destroyed: HatchbackWheel_Ruined
	{
	};
	class UazBDoors_Driver: cardoor
	{
	};
};
