class CfgPatches
{
	class DinkyItemsPlus_BlackWayBro
	{
		
		units[]={"Clothing_Base","Clothing","SWInc_Coyote_Base","SWTortilla_Base","SWHuntingBag_Base","SWMountainBag_RedBlack","SWAssaultBag_ColorBase","SWAssaultBag_ColorBase","SWTShirt_ColorBase","SWInc_HighVest_Base","SWInc_PoliceVest_Base"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Characters","DZ_Characters_Vests"};
	};
};
class CfgVehicles
{
	class Clothing_Base
	{};
	class Clothing: Clothing_Base
	{};
	class SWInc_Coyote_Base
	{itemSize[]={5,4};};
	class SWTortilla_Base
	{itemSize[]={5,6};};
	class SWHuntingBag_Base
	{itemSize[]={5,4};};
	class SWMountainBag_RedBlack: Clothing
	{itemSize[]={5,4};};
	class SWAssaultBag_ColorBase: Clothing
	{itemSize[]={4,5};};
	class SWTShirt_ColorBase: Clothing
	{itemSize[]={1,1};};
	class SWInc_HighVest_Base: Clothing
	{itemSize[]={2,2};};
	class SWInc_PoliceVest_Base: Clothing
	{itemSize[]={2,2};};
};
