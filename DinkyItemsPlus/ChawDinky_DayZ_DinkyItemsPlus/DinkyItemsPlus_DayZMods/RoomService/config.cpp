class CfgPatches
{
	class DinkyItemsPlus_RoomService
	{
		units[]=
		{
			"CombinationLock",
			"CodeLock"
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
	class CombinationLock;
	class CodeLock: CombinationLock
	{
		itemSize[]={1,1};
	};
};
