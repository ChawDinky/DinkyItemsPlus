class CfgPatches
{
	class DinkyItemsPlus_NotABananaMisho
	{
		units[]=
		{
			"APS_Buttstock",
			"M1A_RailAtt",
			"AmmoBox_46x30_25rnd",
			"SniperOptic",
			"AmmoBox_8mm_15rnd"
		};
		weapons[]=
		{
			"AWMreal",
			"Kar98Real",
			"M1A",
			"M16",
			"Mk22",
			"MP7",
			"SCAR",
			"VityazSN",
			"StechkinAPS"
		};
		magazine[]=
		{
			"Mag_Vityaz_30Rnd",
			"Mag_APS_20Rnd",
			"Mag_SCAR_20Rnd",
			"Mag_MP7_40Rnd",
			"Mag_Mk22_14Rnd",
			"Mag_M14_10Rnd",
			"Mag_M14_20Rnd",
			"Mag_AWMreal_5rnd"
		};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Optics",
			"DZ_Weapons_Supports",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Lights",
			"DZ_Weapons_Ammunition",
			"DZ_Pistols"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Box_Base;
	class ItemOptics;
	class APS_Buttstock: Inventory_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class M1A_RailAtt: Inventory_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class AmmoBox_46x30_25rnd: Box_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class SniperOptic: ItemOptics
	{
		itemSize[] = {2,1};
		itemsCargoSize[] = {0,0};
	};
	class AmmoBox_8mm_15rnd: Box_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
};
class CfgWeapons
{
	class AWMreal_Base;
	class Kar98Real_Base;
	class M1A_Base;
	class M16_Base;
	class Mk22_Base;
	class MP7_Base;
	class Scar_Base;
	class Vityaz_Base;
	class StechkinAPS_Base;
	class AWMreal: AWMreal_Base
	{
		itemSize[] = {5,1};
		itemsCargoSize[] = {0,0};
	};
	class Kar98Real: Kar98Real_Base
	{
		itemSize[] = {5,1};
		itemsCargoSize[] = {0,0};
	};
	class M1A: M1A_Base
	{
		itemSize[] = {5,1};
		itemsCargoSize[] = {0,0};
	};
	class M16: M16_Base
	{
		itemSize[] = {5,1};
		itemsCargoSize[] = {0,0};
	};
	class Mk22: Mk22_Base
	{
		itemSize[] = {2,1};
		itemsCargoSize[] = {0,0};
	};
	class MP7: MP7_Base
	{
		itemSize[] = {3,1};
		itemsCargoSize[] = {0,0};
	};
	class SCAR: Scar_Base
	{
		itemSize[] = {5,1};
		itemsCargoSize[] = {0,0};
	};
	class VityazSN: Vityaz_Base
	{
		itemSize[] = {5,1};
		itemsCargoSize[] = {0,0};
	};
	class StechkinAPS: StechkinAPS_Base
	{
		itemSize[] = {2,1};
		itemsCargoSize[] = {0,0};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class Mag_Vityaz_30Rnd: Magazine_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class Mag_APS_20Rnd: Magazine_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class Mag_SCAR_20Rnd: Magazine_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class Mag_MP7_40Rnd: Magazine_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class Mag_Mk22_14Rnd: Magazine_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class Mag_M14_10Rnd: Magazine_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class Mag_M14_20Rnd: Mag_M14_10Rnd
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class Mag_AWMs_5rnd: Magazine_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
	class Mag_AWMreal_5rnd: Magazine_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
	};
};
