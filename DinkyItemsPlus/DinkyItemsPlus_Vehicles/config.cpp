class CfgPatches
{
	class DinkyItemsPlus_Vehicle
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts"
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class Inventory_Base;
	class Bottle_Base;
	class CarWheel: Inventory_Base
	{
	};
	class CarDoor: Inventory_Base
	{
	};
	class HatchbackWheel: CarWheel
	{
	};
	class HatchbackWheel_Ruined: CarWheel
	{
	};
	class HatchbackDoors_Driver: CarDoor
	{
	};
	class HatchbackHood: CarDoor
	{
	};
	class HatchbackTrunk: CarDoor
	{
	};
	class TruckBattery: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class CarBattery: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class AircraftBattery: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class TruckExhaust: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class EngineBelt: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class BrakeFluid: Inventory_Base
	{
	};
	class EngineOil: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class CarRadiator: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class TruckRadiator: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class TireRepairKit: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class HeadlightH7: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class WindscreenBox: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class GlowPlug: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class SparkPlug: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class HeadlightH7_Box: Box_Base
	{
		itemSize[]={1,1};
	};
	class CanisterGasoline: Bottle_Base
	{
		itemSize[]={3,3};
	};
};
