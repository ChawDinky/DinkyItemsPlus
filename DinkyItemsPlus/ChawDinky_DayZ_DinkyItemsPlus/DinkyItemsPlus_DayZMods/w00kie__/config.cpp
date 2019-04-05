class CfgPatches
{
	class DinkyItemsPlus_w00kie__
	{
		units[]=
		{
			"Inventory_Base",
			"Container_Base",
			"WorldContainer_Base",
			"HouseNoDestruct",
			"Static",
			"KitMaster",
			"ci_Plypack",
			"ci_Frame",
			"ci_FrameBig",
			"WallKit",
			"PlatformKit",
			"StairsKit",
			"WallKitDeployed",
			"PlatformKitDeployed",
			"StairsKitDeployed"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class HouseNoDestruct;
	class Static;
	class KitMaster: Inventory_Base
	{
		itemSize[]={2,2};
	};
	class ci_Plypack: Inventory_Base
	{
		itemSize[]={2,7};
	};
	class ci_Frame: Inventory_Base
	{
		itemSize[]={4,7};
	};
	class ci_FrameBig: Inventory_Base
	{
		itemSize[]={7,7};
	};
	class WallKit: KitMaster
	{
	};
	class PlatformKit: KitMaster
	{
	};
	class StairsKit: KitMaster
	{
	};
	class WallKitDeployed: WallKit
	{
	};
	class PlatformKitDeployed: PlatformKit
	{
	};
	class StairsKitDeployed: StairsKit
	{
	};
};
