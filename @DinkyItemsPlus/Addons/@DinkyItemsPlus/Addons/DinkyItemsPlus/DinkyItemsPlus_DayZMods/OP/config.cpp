////////////////////////////////////////////////////////////////////
//DeRap: DinkyItemsPlus\DinkyItemsPlus_DayZMods\OP\config.bin
//Produced from mikero's Dos Tools Dll version 7.19
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Apr 06 04:20:19 2019 : 'file' last modified on Sat Apr 06 04:02:31 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DinkyItemsPlus_OP
	{
		units[] = {"Locker","WoodStorage","Waterbarrelcomplete","Waterbarrel","BarrelFrame","OPLock","FieldShovel","Worktable_Base","ChawDinky_Locker"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee","DZ_Gear_Camping"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class Barrel_ColorBase;
	class Locker: Barrel_ColorBase
	{
		itemSize[] = {4,20};
	};
	class WoodStorage: Container_Base
	{
		itemSize[] = {10,20};
	};
	class Waterbarrelcomplete: Container_Base
	{
		itemSize[] = {9,8};
	};
	class Waterbarrel: Inventory_Base
	{
		itemSize[] = {5,6};
	};
	class BarrelFrame: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class OPLock: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class FieldShovel: Inventory_Base
	{
		itemSize[] = {1,3};
	};
	class Worktable_Base: Inventory_Base
	{
		itemSize[] = {9,6};
	};
	class ChawDinky_Locker: Locker
	{
		itemSize[] = {10,15};
	};
};
