class CfgPatches
{
	class SleepysMedical
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
			
		};
	};
};
class CfgMods
{
	class SleepysMedical
	{
		dir="SleepysMedical";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SleepysMedical";
		credits="@Tylord";
		author="Sleepyshot";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"MyModFiles/SleepysMedical/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Edible_Base;
	class AntiChemInjector;
	class VitaminBottle;
	class SodaCan_Pipsi;
	class SalineBagIV;
	class SalineBag;
	
	class Tamiflu: AntiChemInjector
	{
		scope=2;
		displayName="Tamiflu";
		descriptionShort="Oseltamivir Phoshphate: Single dose treatment of Influenza in adults";
		model="\dz\gear\medical\Epinephrine.p3d";
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\Tamiflu.paa"

		};
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Doxycycline: AntiChemInjector
	{
		scope=2;
		displayName="Doxycycline";
		descriptionShort="Doxycycline Hyclate: Single dose treatment Best used to treat water-born illness";
		model="\dz\gear\medical\Epinephrine.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		soundImpactType="plastic";
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\Doxycycline.paa"

		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Cipro: AntiChemInjector
	{
		scope=2;
		displayName="Cipro";
		descriptionShort="Ciprofloxacin Hyclate: Single dose treatment of food-born illness";
		model="\dz\gear\medical\Epinephrine.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		soundImpactType="plastic";
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\Cipro.paa"

		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Zinacef: AntiChemInjector
	{
		scope=2;
		displayName="Zinacef";
		descriptionShort="Cefuroxime: Single dose treatment of severe wound infections";
		model="\dz\gear\medical\Epinephrine.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		soundImpactType="plastic";
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\Zinacef.paa"

		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BioStim: AntiChemInjector
	{
		scope=2;
		displayName="BioStim";
		descriptionShort="The lable is unclear as to effects. Just says promotes healing";
		model="\dz\gear\medical\Morphine.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		soundImpactType="plastic";
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\BioStim.paa"

		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\morphine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\morphine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\morphine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\morphine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MethInjector: AntiChemInjector
	{
		scope=2;
		displayName="C10H15N1";
		descriptionShort="A very strong stimulant";
		model="\dz\gear\medical\Morphine.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		soundImpactType="plastic";
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\C10H15N1.paa"

		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\morphine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\morphine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\morphine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\morphine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class UnknownInjector: AntiChemInjector
	{
		scope=2;
		displayName="Unlabeled AutoInjector";
		descriptionShort="You probably shouldn't inject yourself with unknown chemicals!";
		model="\dz\gear\medical\Morphine.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		soundImpactType="plastic";
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\UnknownInjector.paa"

		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\morphine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\morphine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\morphine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\morphine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BreakAid: AntiChemInjector
	{
		scope=2;
		displayName="BreakAid";
		descriptionShort="An experimental drug that combines an anabolic agent with a patented molecule designed to deliver the agents directly to the source of the fracture.";
		model="\dz\gear\medical\Epinephrine.p3d";
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\BreakAid.paa"

		};
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class EnergyDrink: SodaCan_Pipsi
	{
		scope=2;
		displayName="Energy Drink";
		descriptionShort="Want more energy? Want more focus? Drink it!";
		stackedRandom=0;
		itemSize[]={1,2};
		weight=15;
		stackedUnit="";
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\EnergyDrink.paa"
		};
		class Nutrition
		{
			totalVolume=1;
			energy=150;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FoodSupplement : VitaminBottle
	{
		scope=2;
		displayName="Meal Supplements";
		descriptionShort="Supplements to help promote a balanced diet";
		model="\dz\gear\medical\VitaminBottle.p3d";
		debug_ItemCategory=7;
		varQuantityInit=5;
		varQuantityMin=0;
		varQuantityMax=5;
		varQuantityDestroyOnMin=1;
		varTemperatureMax=1;
		itemSize[]={1,2};
		weight=100;
		weightPerQuantityUnit=2;
		stackedUnit="pills";
		quantityBar=0;
		soundImpactType="plastic";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\FoodSupplement.paa"

		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\vitamin_bottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\vitamin_bottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=0.75;
			treatment=0.5;
			diseaseExit=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class DextroseBagIV: SalineBagIV
	{
		scope=2;
		displayName="Dextrose IV Bag";
		descriptionShort="5 percent dextrose in normal water to treat extreme dehydration or Hypernatremia";
		model="\dz\gear\medical\TransfusionKit.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={2,2};
		weight=500;
		isMeleeWeapon=1;
		soundImpactType="plastic";
/* 		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\DextroseBagIV.paa"

		}; */
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\transfusion_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\transfusion_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\transfusion_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\transfusion_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\transfusion_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet="BloodBag_start_SoundSet";
					id=201;
				};
				class BloodBag_spear
				{
					soundSet="BloodBag_spear_SoundSet";
					id=202;
				};
				class BloodBag_loop
				{
					soundSet="BloodBag_loop_SoundSet";
					id=203;
				};
				class BloodBag_loop2
				{
					soundSet="BloodBag_loop_SoundSet";
					id=204;
				};
				class BloodBag_end
				{
					soundSet="BloodBag_end_SoundSet";
					id=205;
				};
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DextroseBag: SalineBag
	{
		scope=2;
		displayName="Saline Dextrose Bag";
		descriptionShort="Provides patient with large hydration and nutrition boost";
		model="\dz\gear\medical\SalineBag.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={2,2};
		weight=1000;
		isMeleeWeapon=1;
		soundImpactType="plastic";
/* 		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysMedical\data\DextroseBag.paa"

		}; */
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\Saline_Bag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\Saline_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\Saline_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\Saline_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\Saline_Bag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet="BloodBag_start_SoundSet";
					id=201;
				};
				class BloodBag_spear
				{
					soundSet="BloodBag_spear_SoundSet";
					id=202;
				};
				class BloodBag_loop
				{
					soundSet="BloodBag_loop_SoundSet";
					id=203;
				};
				class BloodBag_loop2
				{
					soundSet="BloodBag_loop_SoundSet";
					id=204;
				};
				class BloodBag_end
				{
					soundSet="BloodBag_end_SoundSet";
					id=205;
				};
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};

};