class CfgPatches
{
	class DinkyItemsPlus_KuroAkita
	{
		units[]=
		{
			"KuroAkitaBlowTorch",
			"KuroAkitaAcetylene",
			"Shelf_Base",
			"KuroAkita_LadderLargePacked",
			"Board_Base",
			"AmmoBox_303_20Rnd",
			"Inventory_Base",
			"Container_Base",
			"CableReel",
			"Gunrack_Base",
			"WoodenPlank",
			"Box_Base"
		};
		weapons[]=
		{	
			"G36_Base",
			"Glock18_Base",
			"LeeEnfield_Base",
			"M14_Base",
			"M24_Base",
			"Mac10_Base",
			"G36",
			"Glock18",
			"LeeEnfield",
			"M14",
			"M24",
			"mac10"
			"Bullet_Base",
			"Bullet_556x45",
			"Bullet_303",
			"Bullet_556x45",
			"Mag_g36_30Rnd",
			"Mag_g18_30Rnd",
			"Mag_g18_15Rnd",
			"Mag_m14_20Rnd",
			"Mag_mac10_30Rnd",
			"Ammo_303"
		};
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
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class CableReel;
	class Gunrack_Base;
	class WoodenPlank;
	class Box_Base;
	class KuroAkitaBlowTorch: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class KuroAkitaAcetylene: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Shelf_Base: Gunrack_Base
	{
		itemSize[]={4,4};
	};
	class KuroAkita_LadderLargePacked: Inventory_Base
	{
		itemSize[]={1,4};
	};
	class Board_Base: WoodenPlank
	{
		itemSize[]={1,4};
	};
	class AmmoBox_303_20Rnd: Box_Base
	{
		itemSize[]={1,1};
	};
};
class CfgWeapons
{
	class G36_Base;
	class Glock18_Base;
	class LeeEnfield_Base;
	class M14_Base;
	class M24_Base;
	class Mac10_Base;
	class G36: G36_Base
	{
		itemSize[]={5,1};
	};
	class Glock18: Glock18_Base
	{
		itemSize[]={2,1};
	};
	class LeeEnfield: LeeEnfield_Base
	{
		itemSize[]={5,1};
	};
	class M14: M14_Base
	{
		itemSize[]={5,1};
	};
	class M24: M24_Base
	{
		itemSize[]={5,1};
	};
	class mac10: Mac10_Base
	{
		itemSize[]={2,1};
	};
};
class CfgMagazines
{
	class Mag_akm_30Rnd;
	class Ammo_762x54;
	class Mag_g36_30Rnd: Mag_akm_30Rnd
	{
		itemSize[]={1,1};
	};
	class Mag_g18_30Rnd: Mag_akm_30Rnd
	{
		itemSize[]={1,1};
	};
	class Mag_g18_15Rnd: Mag_akm_30Rnd
	{
		itemSize[]={1,1};
	};
	class Mag_m14_20Rnd: Mag_akm_30Rnd
	{
		itemSize[]={1,1};
	};
	class Mag_mac10_30Rnd: Mag_akm_30Rnd
	{
		itemSize[]={1,1};
	};
	class Ammo_303: Ammo_762x54
	{
		itemSize[]={1,1};
	};
};
Bullet_303
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_556x45;
	class Bullet_303: Bullet_556x45
	{
		itemSize[]={1,1};
	};
};
