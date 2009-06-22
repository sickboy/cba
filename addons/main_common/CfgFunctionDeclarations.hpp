// ----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// ----------------------------------------------------------------------------

#ifndef FUNCTIONS_CONFIG
#define FUNCTIONS_CONFIG

class CfgFunctions
{
	class CBA
	{
		class Common
		{
			// CBA_fnc_testMain
			class testMain
			{
				description = "Tests CBA main functions.";
				file = "\x\cba\Addons\main_common\fnc_testMain.sqf";
			};
			// CBA_fnc_defaultParam
			class defaultParam
			{
				description = "Gets a value from parameters list (usually _this) with a default.";
				file = "\x\cba\Addons\main_common\fnc_defaultParam.sqf";
			};
			// CBA_fnc_getGroupIndex
			class getGroupIndex
			{
				description = "Finds out the actual ID number of a person within his group as assigned by the game and used in the squad leader's command menu, not just the order within the units of his group (this order can change due to players joining and leaving the game, deaths or promotions).";
				file = "\x\cba\Addons\main_common\fnc_getGroupIndex.sqf";
			};
			// CBA_fnc_parseYAML
			class parseYAML
			{
				description = "Parses a YAML file into a nexted array/Hash structure.";
				file = "\x\cba\Addons\main_common\fnc_parseYAML.sqf";
			};
		};
	};
};

#endif // FUNCTIONS_CONFIG