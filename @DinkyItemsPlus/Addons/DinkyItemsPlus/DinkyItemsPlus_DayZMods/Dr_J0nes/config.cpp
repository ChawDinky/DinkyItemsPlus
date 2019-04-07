class CfgPatches
{
	class DinkyItemsPlus_Dr_J0nes
	{
		units[] = 
		{
			"MoneyRuble1",
			"MoneyRuble5",
			"MoneyRuble10",
			"MoneyRuble25",
			"MoneyRuble50",
			"MoneyRuble100"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class MoneyRuble1: Inventory_Base
	{
		itemSize[] = {1,1};
		varQuantityMax = 10000;
	};
	class MoneyRuble5: MoneyRuble1
	{
		itemSize[] = {1,1};
		varQuantityMax = 10000;
	};
	class MoneyRuble10: MoneyRuble1
	{
		itemSize[] = {1,1};
		varQuantityMax = 10000;
	};
	class MoneyRuble25: MoneyRuble1
	{
		itemSize[] = {1,1};
		varQuantityMax = 10000;
	};
	class MoneyRuble50: MoneyRuble1
	{
		itemSize[] = {1,1};
		varQuantityMax = 10000;
	};
	class MoneyRuble100: MoneyRuble1
	{
		itemSize[] = {1,1};
		varQuantityMax = 10000;
	};
};
