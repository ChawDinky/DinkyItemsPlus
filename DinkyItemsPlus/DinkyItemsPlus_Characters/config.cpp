enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};
class CfgPatches
{
	class DinkyItemsPlus_Characters
	{
		units[] = {"BagTaloon_Blue","BagTaloon_Green","BagTaloon_Orange","BagTaloon_Violet","BagCourierImprovised","BagCourierImprovisedFur","BagImprovised","BagImprovisedFur","BagHunting","BagMountain_Blue","BagMountain_Green","BagMountain_Orange","BagMountain_Red","BagChilds_Blue","BagChilds_Green","BagChilds_Red","GhillieBushragWoodland","GhillieTopWoodland","GhillieSuitWoodland","GhillieBushragTan","GhillieTopTan","GhillieSuitTan","GhillieBushragMossy","GhillieTopMossy","GhillieSuitMossy"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Characters"};
	};
};
class A
class cfgVehicles
{ // Bags
	class Clothing: Clothing_Base{};
	class Clothing_Base: DinkyClothing_Base{};
	class TaloonBag_ColorBase: DinkyClothing_Base
	{
		itemSize[]={4,5};
	};
	class TortillaBag: DinkyClothing_Base
	{
		itemSize[]={5,6};
	};
	class CourierBag: DinkyClothing_Base
	{
		itemSize[]={4,4};
	};
	class FurCourierBag: DinkyClothing_Base
	{
		itemSize[]={4,4};
	};
	class ImprovisedBag: DinkyClothing_Base
	{
		itemSize[]={4,5};
	};
	class FurImprovisedBag: DinkyClothing_Base
	{
		itemSize[]={4,5};
	};
	class DryBag_ColorBase: DinkyClothing_Base
	{
		itemSize[]={4,5};
	};
	class HuntingBag: DinkyClothing_Base
	{
		itemSize[]={5,4};
	};
	class MountainBag_ColorBase: DinkyClothing_Base
	{
		itemSize[]={5,4};
	};
	class SmershBag: DinkyClothing_Base
	{
		itemSize[]={4,4};
	};
	class ChildBag_ColorBase: DinkyClothing_Base
	{
		itemSize[]={4,4};
	};
	class GhillieBushrag_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class GhillieTop_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class GhillieSuit_ColorBase: DinkyClothing_Base
	{
		inventorySlot = "Belt";
		itemInfo[] = {"Clothing","Belt"};
		itemSize[]={1,1};
	};
	class LeatherSack_ColorBase: DinkyClothing_Base
	{
		itemSize[]={4,4};
	};
	class AssaultBag_ColorBase: DinkyClothing_Base
	{
		itemSize[]={4,5};
	};
	class CoyoteBag_ColorBase: DinkyClothing_Base
	{
		itemSize[]={5,4};
	};
	class AliceBag_ColorBase: DinkyClothing_Base
	{
		itemSize[]={5,4};
	};
	// Bags End
	//
	class LeatherBelt_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class SportGlasses_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class AviatorGlasses: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class DesignerGlasses: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ThickFramesGlasses: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ThinFramesGlasses: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TacticalGoggles: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class NVGHeadstrap: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class WorkingGloves_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TacticalGloves_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class NBCGloves_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class SurgicalGloves_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class LeatherGloves_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class OMNOGloves_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class BallisticHelmet_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class BaseballCap_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ZSh3PilotHelmet: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class ConstructionHelmet_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class BurlapSackCover: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class BeanieHat_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Ushanka_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PumpkinHelmet: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class MotoHelmet_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class DarkMotoHelmet_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class BandanaHead_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class RadarCap_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class MilitaryBeret_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class FlatCap_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ZmijovkaCap_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class CowboyHat_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class BoonieHat_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class OfficerHat: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PoliceCap: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PilotkaCap: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TankerHelmet: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class GorkaHelmet: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class FirefightersHelmet_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class SkateHelmet_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class WeldingMask: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class PrisonerCap: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class GhillieHood_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class LeatherHat_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class MedicalScrubsHat_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class GreatHelm: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class Ssh68Helmet: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class DirtBikeHelmet_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class DirtBikeHelmet_Visor: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class DirtBikeHelmet_Mouthguard: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class NBCHoodBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class HockeyHelmet_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class SantasHat: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Mich201Helmet: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class Mich2001Helmet: DinkyClothing_Base
	{
		itemSize[]={2,1};
	};
	class Universal_Bandana_Redpattern: DinkyClothing_Base_Base
	{
		itemSize[]={1,1};
	};
	class GasMask: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class BandanaMask_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class NioshFaceMask: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class BalaclavaMask_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class GP5GasMask: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class Balaclava3Holes_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class SantasBeard: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class MouthRag: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class SurgicalMask: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class HockeyMask: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Jeans_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class CargoPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TTSKOPants: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class HunterPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class CanvasPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class CanvasPantsMidi_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TrackSuitPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class GorkaPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PolicePants: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PolicePantsOrel: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ParamedicPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class FirefightersPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PrisonUniformPants: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class LeatherPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class MedicalScrubsPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class USMCPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class SlacksPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class BDUPants: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class NBCPantsBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Breeches_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ShortJeans_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Skirt_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class JumpsuitPants_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class AthleticShoes_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class HikingBoots_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class HikingBootsLow_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Wellies_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class WorkingBoots_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class JungleBoots_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class DressShoes_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class MilitaryBoots_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class CombatBoots_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class JoggingShoes_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class LeatherShoes_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Sneakers_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class NBCBootsBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Ballerinas_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TTSKOBoots: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Armband_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Sweater_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Shirt_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TShirt_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Hoodie_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TacticalShirt_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class HikingJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Raincoat_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class M65Jacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TTsKOJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class GorkaEJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class RidersJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class WoolCoat_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TrackSuitJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PoliceJacket: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PoliceJacketOrel: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ParamedicJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class FirefighterJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PrisonUniformJacket: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class MiniDress_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class QuiltedJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class BomberJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class LeatherJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class HuntingJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class MedicalScrubsShirt_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class LabCoat: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class NurseDress_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class USMCJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class Blouse_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class NBCJacketBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class DenimJacket: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class TelnyashkaShirt: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ChernarusSportShirt: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class JumpsuitJacket_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class BDUJacket: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ManSuit_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class WomanSuit_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class LeatherShirt_ColorBase: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class PlateCarrierVest: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class SmershVest: DinkyClothing_Base
	{
		itemSize[]={4,4};
	};
	class PressVest_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class UKAssVest_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class PoliceVest: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class PlateCarrierHolster: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class ChestHolster: DinkyClothing_Base
	{
		itemSize[]={1,1};
	};
	class HighCapacityVest_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class LeatherStorageVest_ColorBase: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class HuntingVest: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class ReflexVest: DinkyClothing_Base
	{
		itemSize[]={2,2};
	};
	class Headtorch_ColorBase: Switchable_Base // WTF
	{
		itemSize[]={1,1};
	};
};
	