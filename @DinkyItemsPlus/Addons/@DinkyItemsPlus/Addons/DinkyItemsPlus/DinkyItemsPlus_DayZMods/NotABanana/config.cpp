////////////////////////////////////////////////////////////////////
//DeRap: DinkyItemsPlus\DinkyItemsPlus_DayZMods\NotABanana\config.bin
//Produced from mikero's Dos Tools Dll version 7.19
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sat Apr 06 04:20:19 2019 : 'file' last modified on Sat Apr 06 04:02:31 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DinkyItemsPlus_NotABanana
	{
		units[] = {"HuntingOptic","PistolOptic"};
		weapons[] = {"GP_AK101","GP_Colt1911","GP_Colt1911Engraved","GP_AK74","GP_AKS74U","GP_MKII","GP_AugSteyr","GP_Blaze95New","GP_DE","GP_FAL","GP_Glock19","gp_shotgunIzh43","gp_shotgunIzh43_Sawedoff","GP_LongHorn","GP_M249","GP_MiniUzi","GP_P1","GP_Saiga12KShotgun","GP_ScoutNew","GP_Scout","GP_Ruger1022","GP_Trumpet","GP_VSS","GP_Winchester70","GP_Blaze95","gp_izh43new","gp_izh43new_SawedOff"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgWeapons
{
	class GP_AK101_Base;
	class GP_Colt1911_Base;
	class GP_AK74_Base;
	class GP_MKII_Base;
	class GP_AugSteyr_Base;
	class GP_Blaze95New_Base;
	class GP_DE_Base;
	class GP_Fal_Base;
	class GP_Glock19_Base;
	class GP_shotgunIzh43_Base;
	class GP_LongHorn_Base;
	class GP_M249Para_Base;
	class GP_MiniUzi_Base;
	class GP_P1_Base;
	class GP_Saiga12KShotgun_Base;
	class GP_Scoutnew_Base;
	class GP_Scout_Base;
	class GP_Ruger1022_Base;
	class GP_Trumpet_Base;
	class GP_VSS_Base;
	class GP_Winchester70_Base;
	class GP_Blaze95_Base;
	class gp_Izh43New_Base;
	class GP_AK101: GP_AK101_Base
	{
		itemSize[] = {5,1};
	};
	class GP_Colt1911: GP_Colt1911_Base
	{
		itemSize[] = {2,1};
	};
	class GP_Colt1911Engraved: GP_Colt1911_Base
	{
		itemSize[] = {2,1};
	};
	class GP_AK74: GP_AK74_Base
	{
		itemSize[] = {5,1};
	};
	class GP_AKS74U: GP_AK74_Base
	{
		itemSize[] = {5,1};
	};
	class GP_MKII: GP_MKII_Base
	{
		itemSize[] = {2,1};
	};
	class GP_AugSteyr: GP_AugSteyr_Base
	{
		itemSize[] = {5,1};
	};
	class GP_Blaze95New: GP_Blaze95New_Base
	{
		itemSize[] = {5,1};
	};
	class GP_DE: GP_DE_Base
	{
		itemSize[] = {2,1};
	};
	class GP_FAL: GP_Fal_Base
	{
		itemSize[] = {5,1};
	};
	class GP_Glock19: GP_Glock19_Base
	{
		itemSize[] = {2,1};
	};
	class gp_shotgunIzh43: GP_shotgunIzh43_Base
	{
		itemSize[] = {5,1};
	};
	class gp_shotgunIzh43_Sawedoff: gp_shotgunIzh43
	{
		itemSize[] = {4,1};
	};
	class GP_LongHorn: GP_LongHorn_Base
	{
		itemSize[] = {5,1};
	};
	class GP_M249: GP_M249Para_Base
	{
		itemSize[] = {5,1};
	};
	class GP_MiniUzi: GP_MiniUzi_Base
	{
		itemSize[] = {3,1};
	};
	class GP_P1: GP_P1_Base
	{
		itemSize[] = {2,1};
	};
	class GP_Saiga12KShotgun: GP_Saiga12KShotgun_Base
	{
		itemSize[] = {5,1};
	};
	class GP_ScoutNew: GP_Scoutnew_Base
	{
		itemSize[] = {5,1};
	};
	class GP_Scout: GP_Scout_Base
	{
		itemSize[] = {5,1};
	};
	class GP_Ruger1022: GP_Ruger1022_Base
	{
		itemSize[] = {5,1};
	};
	class GP_Trumpet: GP_Trumpet_Base
	{
		itemSize[] = {5,1};
	};
	class GP_VSS: GP_VSS_Base
	{
		itemSize[] = {5,1};
	};
	class GP_Winchester70: GP_Winchester70_Base
	{
		itemSize[] = {5,1};
	};
	class GP_Blaze95: GP_Blaze95_Base
	{
		itemSize[] = {5,1};
	};
	class gp_izh43new: gp_Izh43New_Base
	{
		itemSize[] = {5,1};
	};
	class gp_izh43new_SawedOff: gp_izh43new
	{
		itemSize[] = {4,1};
	};
};
class cfgVehicles
{
	class ItemOptics;
	class HuntingOptic: ItemOptics
	{
		itemSize[] = {1,1};
	};
	class PistolOptic: ItemOptics
	{
		itemSize[] = {1,1};
	};
};
