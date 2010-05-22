#define __F(A,B) class A : B { scope = 2; }

class CfgVehicles {
	class Car;
	class House;
	class Helicopter;
	class Truck;
	class ReammoBox;
	class Ship;
	class Man;
	class CAManBase: Man {};
	class SoldierEB: CAManBase {};
	class SoldierWB: CAManBase {};
	class SoldierGB: CAManBase {};
	class Boat: Ship {};
	class Mi17_Base: Helicopter {};
	class RU_Soldier_Base: SoldierEB {};
	class RU_Soldier: RU_Soldier_Base {};
	class MVD_Soldier_Base: SoldierEB {};
	class CDF_Soldier_Base: SoldierWB {};
	class INS_Soldier_Base: SoldierEB {};
	class GUE_Soldier_Base: SoldierGB {};
	class USMC_Soldier_Base: SoldierWB {};
	class USMC_Soldier: USMC_Soldier_Base { scope = 2; };
	class USMC_Soldier_Crew: USMC_Soldier_Base { scope = 2; };
	class WeaponHolder: ReammoBox {};
	class GUE_Soldier_1: GUE_Soldier_Base { scope = 2; };

	
// XEH
	__F(Land_Fire_barrel,House);
	__F(Land_Fire_barrel_burning,Land_Fire_barrel);
//

// ACE
	__F(Land_majak,House);

	__F(USBasicAmmunitionBox,ReammoBox);
	__F(USBasicWeaponsBox,ReammoBox);
	__F(USOrdnanceBox,USBasicAmmunitionBox);
	__F(USLaunchersBox,USBasicAmmunitionBox);
	__F(USVehicleBox,USBasicAmmunitionBox);
	__F(USSpecialWeaponsBox,USBasicAmmunitionBox);

	__F(RUBasicAmmunitionBox,ReammoBox);
	__F(RUBasicWeaponsBox,ReammoBox);
	__F(RULaunchersBox,RUBasicAmmunitionBox);
	__F(RUOrdnanceBox,RUBasicWeaponsBox);
	__F(RUSpecialWeaponsBox,RUBasicWeaponsBox);
	__F(RUVehicleBox,RUBasicWeaponsBox);
	__F(LocalBasicWeaponsBox,RUBasicWeaponsBox);
	__F(LocalBasicAmmunitionBox,LocalBasicWeaponsBox);
	__F(GuerillaCacheBox,RUBasicWeaponsBox);
	__F(SpecialWeaponsBox,RUBasicWeaponsBox);


	__F(Mi17_base_Ins,Mi17_base);
	__F(Mi17_base_CDF,Mi17_base);
	__F(Mi17_medevac_base_Ins,Mi17_base);
	__F(Mi17_medevac_base_Ru,Mi17_base);
	__F(Mi17_medevac_base_CDF,Mi17_base);
	__F(Mi17_Civilian_base_Ru,Mi17_base);
	__F(UralRepair_CDF,Truck);
	__F(UralReammo_CDF,UralRepair_CDF);
	__F(UralRefuel_CDF,UralRepair_CDF);
	__F(UralRepair_INS,Truck);
	__F(UralReammo_INS,UralRepair_INS);
	__F(UralRefuel_INS,UralRepair_INS);

	__F(Zodiac,Boat);
	__F(RU_Soldier_GL,RU_Soldier_Base);
	__F(MVD_Soldier,MVD_Soldier_Base);
	__F(MVD_Soldier_MG,MVD_Soldier);
//

// ACEX
	__F(UAZ_SPG9_INS,Car);
	__F(Su34Wreck,House);

	__F(USMC_Soldier_GL,USMC_Soldier);
	__F(USMC_SoldierS,USMC_Soldier);
	__F(USMC_SoldierS_Sniper,USMC_Soldier);
	__F(USMC_SoldierS_SniperH,USMC_Soldier);
	__F(USMC_Soldier_SL,USMC_Soldier);
	__F(USMC_Soldier_TL,USMC_Soldier);
	__F(USMC_Soldier_Officer,USMC_Soldier);

	__F(FR_TL,USMC_Soldier);
	__F(FR_Light,USMC_Soldier);
	__F(FR_AC,USMC_Soldier);
	__F(FR_Sapper,USMC_Soldier);
	__F(FR_Assault_R,USMC_Soldier);
	__F(FR_Assault_GL,USMC_Soldier);
//

	/*
Updating base class ->RscPicture, by ca\ui\config.bin/CA_Mainback/
Updating base class ->CA_Mainback, by ca\ui\config.bin/CA_Back/
Updating base class ->RscText, by ca\ui\config.bin/CA_Title/
Updating base class ->ReammoBox, by ca\weapons\config.bin/CfgVehicles/WeaponHolder/
Updating base class ->Default, by ca\weapons\config.bin/CfgMagazines/CA_Magazine/
Updating base class ->CA_Magazine, by ca\weapons\config.bin/CfgMagazines/CA_LauncherMagazine/
Updating base class ->RifleCore, by ca\weapons\config.bin/cfgWeapons/Rifle/
Updating base class M240->Rifle, by ca\weapons\config.bin/cfgWeapons/M249/
Updating base class ->LauncherCore, by ca\weapons\config.bin/cfgWeapons/Launcher/
Updating base class RscPictureKeepAspect->RscPicture, by x\ace\addons\c_ui\config.cpp/RscDisplayLoading/Variants/LoadingOne/controls/LoadingPic/
Updating base class RscPictureKeepAspect->RscPicture, by x\ace\addons\c_ui\config.cpp/RscDisplayLoadMission/controlsBackground/LoadingPic/
Updating base class RscPictureKeepAspect->RscPicture, by x\ace\addons\c_ui\config.cpp/RscDisplayStart/controls/LoadingPic/
Updating base class ->Helicopter, by ca\air\config.bin/CfgVehicles/Mi17_base/
Updating base class ->M16A2, by x\ace\addons\c_ai_rof\config.cpp/CfgWeapons/m16a4/
Updating base class ->M4A1, by x\ace\addons\c_ai_rof\config.cpp/CfgWeapons/M4A1_Aim/
Updating base class ->USBasicAmmunitionBox, by x\ace\addons\sys_disposal\config.cpp/CfgVehicles/USLaunchersBox/
Updating base class ->ReammoBox, by x\ace\addons\sys_disposal\config.cpp/CfgVehicles/RUBasicAmmunitionBox/
Updating base class ->RUBasicAmmunitionBox, by x\ace\addons\sys_disposal\config.cpp/CfgVehicles/RULaunchersBox/
Updating base class RscText->, by x\ace\addons\sys_roundcount\config.cpp/RscInGameUI/RscUnitInfoSoldier/Background/
Updating base class ->Ship, by x\ace\addons\sys_sight_adjustment\config.cpp/cfgVehicles/Boat/
Updating base class CA_LauncherMagazine->CA_Magazine, by x\ace\addons\sys_smaw_spottingrifle\config.cpp/CfgMagazines/SMAW/
Updating base class ->SoldierWB, by x\ace\addons\sys_stamina\config.cpp/CfgVehicles/USMC_Soldier_Base/
Updating base class ->SoldierEB, by x\ace\addons\sys_stamina\config.cpp/CfgVehicles/RU_Soldier_Base/
Updating base class ->USMC_Soldier_Base, by x\ace\addons\c_men_gear\config.cpp/CfgVehicles/USMC_Soldier/
Updating base class ->SoldierWB, by x\ace\addons\c_men_gear\config.cpp/CfgVehicles/CDF_Soldier_Base/
Updating base class ->RU_Soldier_Base, by x\ace\addons\c_men_gear\config.cpp/CfgVehicles/RU_Soldier/
Updating base class ->GUE_Soldier_Base, by x\ace\addons\c_men_gear\config.cpp/CfgVehicles/GUE_Soldier_1/
Updating base class ->SoldierEB, by x\ace\addons\c_men_gear\config.cpp/CfgVehicles/Ins_Soldier_Base/
Updating base class RU_Soldier->RU_Soldier_Base, by x\acex\addons\c_men_gear\config.cpp/CfgVehicles/RU_Soldier_GL/
Updating base class RU_Soldier->MVD_Soldier_Base, by x\acex\addons\c_men_gear\config.cpp/CfgVehicles/MVD_Soldier/
*/

	/*
	Updating base class ->RscPicture, by ca\ui\config.bin/CA_Mainback/
	Updating base class ->CA_Mainback, by ca\ui\config.bin/CA_Back/
	Updating base class ->RscText, by ca\ui\config.bin/CA_Title/
	Updating base class ->ReammoBox, by ca\weapons\config.bin/CfgVehicles/WeaponHolder/
	Updating base class RscPictureKeepAspect->RscPicture, by x\ace\addons\c_ui\config.cpp/RscDisplayLoading/Variants/LoadingOne/controls/LoadingPic/
	Updating base class RscPictureKeepAspect->RscPicture, by x\ace\addons\c_ui\config.cpp/RscDisplayLoadMission/controlsBackground/LoadingPic/
	Updating base class RscPictureKeepAspect->RscPicture, by x\ace\addons\c_ui\config.cpp/RscDisplayStart/controls/LoadingPic/
	Updating base class ->M16A2, by x\ace\addons\c_ai_rof\config.cpp/CfgWeapons/m16a4/
	Updating base class ->M4A1, by x\ace\addons\c_ai_rof\config.cpp/CfgWeapons/M4A1_Aim/
	Updating base class ->ReammoBox, by x\ace\addons\sys_disposal\config.cpp/CfgVehicles/USBasicAmmunitionBox/
	Updating base class ->USBasicAmmunitionBox, by x\ace\addons\sys_disposal\config.cpp/CfgVehicles/USLaunchersBox/
	Updating base class ->ReammoBox, by x\ace\addons\sys_disposal\config.cpp/CfgVehicles/RUBasicAmmunitionBox/
	Updating base class ->RUBasicAmmunitionBox, by x\ace\addons\sys_disposal\config.cpp/CfgVehicles/RULaunchersBox/
	Updating base class RscText->, by x\ace\addons\sys_roundcount\config.cpp/RscInGameUI/RscUnitInfoSoldier/Background/
	Updating base class ->Ship, by x\ace\addons\sys_sight_adjustment\config.cpp/cfgVehicles/Boat/
	Updating base class ->SoldierWB, by x\ace\addons\sys_stamina\config.cpp/CfgVehicles/USMC_Soldier_Base/
	Updating base class ->SoldierEB, by x\ace\addons\sys_stamina\config.cpp/CfgVehicles/RU_Soldier_Base/
	Updating base class ->SoldierWB, by x\ace\addons\c_men_gear\config.cpp/CfgVehicles/CDF_Soldier_Base/
	Updating base class ->GUE_Soldier_Base, by x\ace\addons\c_men_gear\config.cpp/CfgVehicles/GUE_Soldier_1/
	Updating base class ->SoldierEB, by x\ace\addons\c_men_gear\config.cpp/CfgVehicles/Ins_Soldier_Base/
	*/
	//
};
