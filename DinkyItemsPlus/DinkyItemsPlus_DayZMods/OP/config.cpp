class CfgPatches
{
	class DinkyItemsPlus_OP
	{
		units[]=
		{
			"Inventory_Base",
			"Container_Base",
			"Barrel_ColorBase",
			"Locker",
			"WoodStorage",
			"Waterbarrelcomplete",
			"Waterbarrel",
			"BarrelFrame",
			"OPLock",
			"FieldShovel",
			"Worktable_Base",
			"ChawDinky_Locker"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Gear_Camping"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class Barrel_ColorBase;
	class Locker: Barrel_ColorBase
	{
		itemSize[]={4,20};
	};
	class WoodStorage: Container_Base
	{
		itemSize[]={10,20};
	};
	class Waterbarrelcomplete: Container_Base
	{
		itemSize[]={9,8};
	};
	class Waterbarrel: Inventory_Base
	{
		itemSize[]={5,6};
	};
	class BarrelFrame: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class OPLock: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class FieldShovel: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class Worktable_Base: Inventory_Base
	{
		itemSize[]={9,6};
	};
	class ChawDinky_Locker: Locker
	{
		itemSize[]={10,15};
	};
};
