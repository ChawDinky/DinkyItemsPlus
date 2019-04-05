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
	class DinkyItemsPlus_Gear
	{
		units[]={"TentMedium_Packed","TentMedium_Pitched"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Books",
			"DZ_Gear_Camping",
			"DZ_Gear_Consumables",
			"DZ_Gear_Containers",
			"DZ_Gear_Cooking",
			"DZ_Gear_Crafting",
			"DZ_Gear_Cultivation",
			"DZ_Gear_Drinks",
			"DZ_Gear_Food",
			"DZ_Gear_Medical",
			"DZ_Gear_Navigation",
			"DZ_Gear_Optics",
			"DZ_Radio",
			"DZ_Gear_Tools",
			"DZ_Gear_Traps"
		};
	};
};
class CfgVehicles
{
	class ItemBook;
	class Inventory_Base;
	class Box_Base;
	class Container_Base;
	class Bottle_Base;
	class Edible_Base;
	class ItemOptics;
	class FishingRod_Base;
	class Trap_Base;
	class ItemMap;
	class Transmitter_Base;
	class BookBible: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheWarOfTheWorlds: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookAroundTheWorldIn80Days: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookCrimeAndPunishment: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheMetamorphosis: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheRaven: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheArtOfWar: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookRobinsonCrusoe: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookRussian: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookRussianCheatSheet: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookThePictureOfDorianGray: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookThePitAndThePendulum: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheTimeMachine: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheCountryOfTheBlind: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookBilaNemoc: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookYouth: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookVerwandlung: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheJungleBook: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheBrothersKaramazov: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheCallOfCthulhu: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheShunnedHouse: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheHoundOfTheBaskervilles: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookAndersen: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTonyAndTheBeetles: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheCosmicComputer: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookATravelerInTime: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheVariableMan: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheOutlet: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheBarrier: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheDesertOfWheat: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookFlyingURanch: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookCassidysRustlerRoundUp: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLonesomeLand: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTrailin: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookRonickyDoone: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookBettyZane: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookATexasMatchmaker: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheThunderBird: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookBlackJack: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheLastTrail: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookSelectedStories: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheHeritageOfTheSioux: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookDesertGold: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheHiddenChildren: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheLastOfThePlainsmen: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookGunmansReckoning: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookSkyrider: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookSpinifexAndSand: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookSunsetPass: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheCaveOfGold: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheDayOfTheBeast: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheQuirt: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookAVoyageToArcturus: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookWealthOfNations: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookAndersensFairyTales: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookBlackBeauty: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookBuddenbrooks: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookDeadSouls: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookErewhon: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookFatherGoriot: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookGreatExpectations: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookGulliversTravels: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookHeartOfDarkness: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookHerland: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookIvanhoe: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookKidnapped: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLaChartreuseDeParme: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLordJim: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookMadameBovary: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookNostromo: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookNaturalSelection: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheMetamorphosesOfOvid: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookMobyDick: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookKingLear: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLaDbcle: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheCanterburyTales: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheRightsOfWoman: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookToTheInteriorOfTheEarth: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookNjalsSaga: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheTrial: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookDonQuixote: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookPhilosophiaeNaturalis: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookPrideAndPrejudice: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookRasselas: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookScaramouche: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookShe: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookSonsAndLovers: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheCallOfTheWild: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheComingRace: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookRobinsonCrusoeAdventures: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheIslandOfDoctorMoreau: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheMahabharataOfKrishna: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheManWhoWasThursday: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookThePossessed: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookThePrisonerOfZenda: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookAPrincessOfMars: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookKingSolomonsMines: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookMiddlemarch: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheHouseOfTheSevenGables: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheMonkARomance: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheJustifiedSinner: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheRedBadgeOfCourage: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookADollsHouse: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookAfterLondon: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookGilgameshEpic: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookAnnaKarenina: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookCandide: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookFaust: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookHinduLiterature: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookHunger: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookJapaneseLiterature: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLeRougeEtLeNoir: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheDecameron: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheGiacomoLeopardi: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookAliceInWonderland: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheScarletPimpernel: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheThreeMusketeers: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheTurnOfTheScrew: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTranslationsOfShakuntala: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTreasureIsland: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookUlysses: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookUncleSilas: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheAeneid: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookWarAndPeace: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookWielandOrTheTransformation: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookWutheringHeights: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookCinqSemainesEnBallon: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookDracula: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookMrchenFrKinder: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLesTroisMousquetaires: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookDeLorigineDesEspces: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookDasNibelungenlied: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookTheLastMan: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookFaustErsterTeil: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLenfer1Of2: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookVoyageAuCentreDeLaTerre: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookRomeoUndJulia: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookFrankenstein: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookDeLaTerreLaLune: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookDonQuichotte: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLleMystrieuse: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLaComdieHumaine: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookLesCorneilles: ItemBook
	{
		itemSize[]={1,1};
	};
	class Book20000LieuesSousLesMers: ItemBook
	{
		itemSize[]={1,1};
	};
	class BookThreeMenInABoat: ItemBook
	{
		itemSize[]={1,1};
	};
	class CamoNetShelter: Inventory_Base
	{
		itemSize[]={4,1};
	};
	class FenceKit: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class WatchtowerKit: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Fence: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Watchtower: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class BarbedWire: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class CombinationLock: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class BarbedWireLocked: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class CamoNet: Inventory_Base
	{
		itemSize[]={3,1};
	};
	class UndergroundStash: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Spotlight: Inventory_Base
	{
		itemSize[]={2,4};
	};
	class XmasLights: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Refridgerator: Inventory_Base
	{
		itemSize[]={3,4};
	};
	class PowerGenerator: Inventory_Base
	{
		itemSize[]={4,4};
	};
	class CableReel: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class BatteryCharger: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class HescoBox: Inventory_Base
	{
		itemSize[]={4,4};
	};
	class SeaChest: Container_Base
	{
		itemSize[]={10,20};
	};
	class MediumTent: Container_Base
	{
		itemSize[]={4,2};
	};
	class LargeTent: Container_Base
	{
		itemSize[]={4,2};
	};
	class CarTent: Container_Base
	{
		itemSize[]={4,2};
	};
	class Paper: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class DuctTape: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class DuctTapeLocked: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Bandana_ColorBase: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Rag: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class BurlapStrip: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Stone: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class SmallStone: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Firewood: Inventory_Base
	{
		itemSize[]={3,1};
	};
	class Battery9V: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class LargeGasCanister: Inventory_Base
	{
		itemSize[]={3,3};
	};
	class MediumGasCanister: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class SmallGasCanister: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class ButaneCanister: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Spraycan_ColorBase: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Matchbox: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class NailBox: Box_Base
	{
		itemSize[]={1,1};
	};
	class Roadflare: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Chemlight_ColorBase: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Pelt_Base: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class TannedLeather: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Hook: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class BoneHook: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Bark_ColorBase: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Nail: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Bone: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Bait: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class BoneBait: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class GardenLime: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Netting: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class WoodenPlank: Inventory_Base
	{
		itemSize[]={1,4};
	};
	class PileOfWoodenPlanks: Inventory_Base
	{
		itemSize[]={1,4};
	};
	class MetalPlate: Inventory_Base
	{
		itemSize[]={4,4};
	};
	class WoodenLog: Inventory_Base
	{
		itemSize[]={1,5};
	};
	class Barrel_ColorBase: Container_Base
	{
		itemSize[]={8,6};
	};
	class FirstAidKit: Container_Base
	{
		itemSize[]={2,2};
	};
	class SmallProtectorCase: Container_Base
	{
		itemSize[]={2,2};
	};
	class PlateCarrierPouches: Container_Base
	{
		itemSize[]={1,1};
	};
	class AmmoBox: Container_Base
	{
		itemSize[]={3,3};
	};
	class Bear_ColorBase: Container_Base
	{
		itemSize[]={1,1};
	};
	class WaterproofBag_ColorBase: Container_Base
	{
		itemSize[]={2,3};
	};
	class GiftBox_Base: Container_Base
	{
		itemSize[]={1,1};
	};
	class FireplaceBase: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class Pot: Bottle_Base
	{
		itemSize[]={2,2};
	};
	class FryingPan: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class PortableGasStove: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class PortableGasLamp: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Candle: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class PetrolLighter: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Tripod: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Tripod_Proxy_Test: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class BurlapSack: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Rope: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class MetalWire: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class WoodenStick: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class Torch: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class ChickenFeather: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class LongWoodenStick: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class GorkaHelmetVisor: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class HandDrillKit: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Spear: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class SeedBase: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class TomatoSeedsPack: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class PepperSeedsPack: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class PumpkinSeedsPack: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class ZucchiniSeedsPack: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class CannabisSeedsPack: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class PlantMaterial: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class AntiPestsSpray: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class ParticleTest: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class PlantBase: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Canteen: Bottle_Base
	{
		itemSize[]={2,3};
	};
	class WaterBottle: Bottle_Base
	{
		itemSize[]={1,3};
	};
	class Vodka: Bottle_Base
	{
		itemSize[]={1,1};
	};
	class WaterPouch_ColorBase: Bottle_Base
	{
		itemSize[]={1,1};
	};
	class SodaCan_ColorBase: Edible_Base
	{
		itemSize[]={1,1};
	};
	class BoxCerealCrunchin: Edible_Base
	{
		itemSize[]={1,1};
	};
	class PowderedMilk: Edible_Base
	{
		itemSize[]={1,1};
	};
	class SmallGuts: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Guts: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Rice: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Marmalade: Edible_Base
	{
		itemSize[]={1,1};
	};
	class BakedBeansCan: Edible_Base
	{
		itemSize[]={1,1};
	};
	class BakedBeansCan_Opened: Edible_Base
	{
		itemSize[]={1,1};
	};
	class PeachesCan: Edible_Base
	{
		itemSize[]={1,1};
	};
	class PeachesCan_Opened: Edible_Base
	{
		itemSize[]={1,1};
	};
	class TacticalBaconCan: Edible_Base
	{
		itemSize[]={1,1};
	};
	class TacticalBaconCan_Opened: Edible_Base
	{
		itemSize[]={1,1};
	};
	class SpaghettiCan: Edible_Base
	{
		itemSize[]={1,1};
	};
	class SpaghettiCan_Opened: Edible_Base
	{
		itemSize[]={1,1};
	};
	class SardinesCan: Edible_Base
	{
		itemSize[]={1,1};
	};
	class SardinesCan_Opened: Edible_Base
	{
		itemSize[]={1,1};
	};
	class TunaCan: Edible_Base
	{
		itemSize[]={1,1};
	};
	class TunaCan_Opened: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Apple: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Banana: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Orange: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Tomato: Edible_Base
	{
		itemSize[]={1,1};
	};
	class GreenBellPepper: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Zucchini: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Pumpkin: Edible_Base
	{
		itemSize[]={1,1};
	};
	class SlicedPumpkin: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Potato: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Kiwi: Edible_Base
	{
		itemSize[]={1,1};
	};
	class SambucusBerry: Edible_Base
	{
		itemSize[]={1,1};
	};
	class CaninaBerry: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Cannabis: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Plum: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Pear: Edible_Base
	{
		itemSize[]={1,1};
	};
	class HumanSteakMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class GoatSteakMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class MouflonSteakMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class BoarSteakMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class PigSteakMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class DeerSteakMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class WolfSteakMeat: Edible_Base
	{
		itemSize[]={1,2};
	};
	class BearSteakMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class CowSteakMeat: Edible_Base
	{
		itemSize[]={1,2};
	};
	class SheepSteakMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class FoxSteakMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class ChickenBreastMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class RabbitLegMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class CarpFilletMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class MackerelFilletMeat: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Lard: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Carp: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Sardines: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Mackerel: Edible_Base
	{
		itemSize[]={1,1};
	};
	class Worm: Edible_Base
	{
		itemSize[]={1,1};
	};
	class MushroomBase: Edible_Base
	{
		itemSize[]={1,1};
	};
	class BandageDressing: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Epinephrine: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Morphine: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class ClearSyringe: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class BloodSyringe: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class InjectionVial: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class SalineBag: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class StartKitIV: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class SalineBagIV: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class BloodBagEmpty: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class BloodBagFull: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class BloodBagIV: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class BloodTestKit: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Splint: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Thermometer: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Defibrillator: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class CigarettePack_ColorBase: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class DisinfectantSpray: Edible_Base
	{
		itemSize[]={1,1};
	};
	class DisinfectantAlcohol: Edible_Base
	{
		itemSize[]={1,1};
	};
	class PurificationTablets: Edible_Base
	{
		itemSize[]={1,1};
	};
	class CharcoalTablets: Edible_Base
	{
		itemSize[]={1,1};
	};
	class PainkillerTablets: Edible_Base
	{
		itemSize[]={1,1};
	};
	class VitaminBottle: Edible_Base
	{
		itemSize[]={1,1};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		itemSize[]={1,1};
	};
	class ChernarusMap: ItemMap
	{
		itemSize[]={1,1};
	};
	class Compass: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class OrienteeringCompass: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Rangefinder: ItemOptics
	{
		itemSize[]={2,1};
	};
	class Binoculars: ItemOptics
	{
		itemSize[]={2,1};
	};
	class Megaphone: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class Radio: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class PersonalRadio: Transmitter_Base
	{
		itemSize[]={1,1};
	};
	class BaseRadio: Transmitter_Base
	{
		itemSize[]={3,3};
	};
	class Flashlight: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class NightLightPrototype: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Pen_ColorBase: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class CanOpener: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Heatpack: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class MessTin: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Pliers: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Lockpick: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class WeaponCleaningKit: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class SewingKit: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class LeatherSewingKit: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Handcuffs: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class HandcuffsLocked: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class HandcuffKeys: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Cassette: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Shovel: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class Crowbar: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class FireExtinguisher: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Hammer: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class MeatTenderizer: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Wrench: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class LugWrench: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Pipe: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class Screwdriver: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Sickle: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Hacksaw: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class KitchenKnife: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class SteakKnife: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class HayHook: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class StoneKnife: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Mace: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class FarmingHoe: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class SledgeHammer: Inventory_Base
	{
		itemSize[]={1,4};
	};
	class Iceaxe: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class Broom: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Paddle: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class ElectronicRepairKit: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class EpoxyPutty: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class Whetstone: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class HandSaw: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class DoorTestCamera: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class ImprovisedFishingRod: FishingRod_Base
	{
		itemSize[]={1,1};
	};
	class ObsoleteFishingRod: FishingRod_Base
	{
		itemSize[]={1,1};
	};
	class FishingRod: FishingRod_Base
	{
		itemSize[]={1,3};
	};
	class BearTrap: Trap_Base
	{
		itemSize[]={3,2};
	};
	class LandMineTrap: Trap_Base
	{
		itemSize[]={2,1};
	};
	class SmallFishTrap: Trap_Base
	{
		itemSize[]={1,1};
	};
	class FishNetTrap: Trap_Base
	{
		itemSize[]={1,1};
	};
	class TripwireTrap: Trap_Base
	{
		itemSize[]={1,1};
	};
	class RabbitSnareTrap: Trap_Base
	{
		itemSize[]={1,1};
	};
};
class CfgAmmo
{
	class DefaultAmmo;
	class LandMineExplosion: DefaultAmmo
	{
		itemSize[]={2,1};
	};
};
