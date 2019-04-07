////////////////////////////////////////////////////////////////////
//DeRap: DinkyItemsPlus\DinkyItemsPlus_DayZMods\Kuznecov\config.bin
//Produced from mikero's Dos Tools Dll version 7.19
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Apr 06 04:20:19 2019 : 'file' last modified on Sat Apr 06 04:02:31 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DinkyItemsPlus_Kuznecov
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Vehicles_Wheeled"};
	};
};
class CfgVehicles
{
	class Hatchbackwheel;
	class HatchbackWheel_Ruined;
	class cardoor;
	class uazbWheel: Hatchbackwheel{};
	class uazbWheel_destroyed: HatchbackWheel_Ruined{};
	class UazBDoors_Driver: cardoor{};
};
