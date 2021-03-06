////////////////////////////////////////////////////////////////////
//DeRap: DinkyItemsPlus\DinkyItemsPlus_DayZMods\MassPwnaged\config.bin
//Produced from mikero's Dos Tools Dll version 7.19
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Apr 06 04:20:19 2019 : 'file' last modified on Sat Apr 06 04:02:31 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DinkyItemsPlus_MassPwnaged
	{
		units[] = {"MassGhillieSuitBoxWoodland","MassGhillieSuitBoxMossy","MassGhillieSuitBoxWinter","MassGhillieTopBoxWoodland","MassGhillieTopBoxWinter","MassGhillieTopBoxMossy","MassBlackGP5","MassWinterGhillieWrap","Mass762x39_ConversionKit","Mass556x45_ConversionKit","AmmoBox_408Chey","AmmoBox_12gaBB","AmmoBox_338","MassStew","MassScoutLRS","MassScoutSuppressor","shotgun_Suppressor","AkRail"};
		weapons[] = {"MassScout556","Massm300","MassKivaari","MassM4A1","MassPpskn","Mp133Shotgun_Base","Massarmsan","MassB52"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Characters_Pants","DZ_Characters_Backpacks","DZ_Gear_Navigation","DZ_Weapons_Melee_Blade","DZ_Gear_Tools","DZ_Characters_Belts","DZ_Radio","DZ_Scripts","DZ_Gear_Containers"};
		magazines[] = {};
		ammo[] = {"Bullet_408","Bullet_12GaugeBB","Bullet_338"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Box_Base;
	class Edible_Base;
	class GhillieAtt_ColorBase;
	class LongrangeOptic;
	class M4_Suppressor;
	class ItemSuppressor;
	class Clothing;
	class ItemOptics;
	class MassBox;
	class MassBlackGP5: Clothing
	{
		itemSize[] = {2,1};
	};
	class MassGhillieSuitBoxWoodland: MassBox
	{
		itemSize[] = {1,1};
	};
	class MassGhillieSuitBoxMossy: MassBox
	{
		itemSize[] = {1,1};
	};
	class MassGhillieSuitBoxWinter: MassBox
	{
		itemSize[] = {1,1};
	};
	class MassGhillieTopBoxWoodland: MassBox
	{
		itemSize[] = {1,1};
	};
	class MassGhillieTopBoxWinter: MassBox
	{
		itemSize[] = {1,1};
	};
	class MassGhillieTopBoxMossy: MassBox
	{
		itemSize[] = {1,1};
	};
	class MassWinterGhillieWrap: GhillieAtt_ColorBase
	{
		itemSize[] = {1,1};
	};
	class Mass762x39_ConversionKit: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class Mass556x45_ConversionKit: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class AmmoBox_408Chey: Box_Base
	{
		itemSize[] = {1,1};
	};
	class AmmoBox_12gaBB: Box_Base
	{
		itemSize[] = {1,1};
	};
	class AmmoBox_338: Box_Base
	{
		itemSize[] = {1,1};
	};
	class MassStew: Edible_Base
	{
		itemSize[] = {1,1};
	};
	class MassScoutLRS: LongrangeOptic
	{
		itemSize[] = {1,1};
	};
	class MassScoutSuppressor: M4_Suppressor
	{
		itemSize[] = {1,1};
	};
	class shotgun_Suppressor: ItemSuppressor
	{
		itemSize[] = {1,1};
	};
	class AkRail: ItemOptics
	{
		itemSize[] = {1,1};
	};
};
class cfgWeapons
{
	class MassScout556_Base;
	class Massm300_Base;
	class gevar_base;
	class PPSKN_Base;
	class MassM4A1_Base;
	class Shotgun_Base;
	class Mp133Shotgun;
	class MassB52_Base;
	class MassArmsan_Base;
	class MassScout556: MassScout556_Base
	{
		itemSize[] = {5,1};
	};
	class Massm300: Massm300_Base
	{
		itemSize[] = {5,1};
	};
	class MassKivaari: gevar_base
	{
		itemSize[] = {5,1};
	};
	class MassM4A1: MassM4A1_Base
	{
		itemSize[] = {5,1};
	};
	class MassPpskn: PPSKN_Base
	{
		itemSize[] = {5,1};
	};
	class Mp133Shotgun_Base: Shotgun_Base
	{
		itemSize[] = {5,1};
	};
	class Massarmsan: MassArmsan_Base
	{
		itemSize[] = {5,1};
	};
	class MassB52: MassB52_Base
	{
		itemSize[] = {5,1};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_408: Bullet_Base
	{
		itemSize[] = {1,1};
	};
	class Bullet_12GaugeBB: Bullet_Base
	{
		itemSize[] = {1,1};
	};
	class Bullet_338: Bullet_Base
	{
		itemSize[] = {1,1};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Mag_AKM_30Rnd;
	class Ammo_408Chey: Ammunition_Base
	{
		itemSize[] = {1,1};
	};
	class Ammo_338: Ammunition_Base
	{
		itemSize[] = {1,1};
	};
	class Ammo_12GaBB: Ammunition_Base
	{
		itemSize[] = {1,1};
	};
	class Mass762Stanag: Mag_AKM_30Rnd
	{
		itemSize[] = {1,1};
	};
	class MassM300Mag: Mag_AKM_30Rnd
	{
		itemSize[] = {1,1};
	};
	class kivaarimag: Mag_AKM_30Rnd
	{
		itemSize[] = {1,1};
	};
};
