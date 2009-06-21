// Automatically generated by 'functions_config.rb' (Sun Jun 21 18:34:18 +0100 2009)
// DO NOT MANUALLY EDIT THIS FILE!

#ifndef FUNCTIONS_CONFIG
#define FUNCTIONS_CONFIG

class CfgFunctions
{
	class CBA
	{
		class Hashes
		{
			// CBA_fnc_hashGet
			class hashGet
			{
				description = "Gets a value for a given key from a Hash.";
				file = "\x\cba\Addons\main_hashes\fnc_hashGet.sqf";
			};
			// CBA_fnc_hashSet
			class hashSet
			{
				description = "Sets a value for a given key in a Hash.";
				file = "\x\cba\Addons\main_hashes\fnc_hashSet.sqf";
			};
			// CBA_fnc_hashEachPair
			class hashEachPair
			{
				description = "Iterate through all keys and values in a Hash.";
				file = "\x\cba\Addons\main_hashes\fnc_hashEachPair.sqf";
			};
			// CBA_fnc_hashCreate
			class hashCreate
			{
				description = "Check if a Hash has a value defined for a key.";
				file = "\x\cba\Addons\main_hashes\fnc_hashCreate.sqf";
			};
			// CBA_fnc_isHash
			class isHash
			{
				description = "Check if a value is a Hash data structure.";
				file = "\x\cba\Addons\main_hashes\fnc_isHash.sqf";
			};
			// CBA_fnc_hashHasKey
			class hashHasKey
			{
				description = "Check if a Hash has a value defined for a key.";
				file = "\x\cba\Addons\main_hashes\fnc_hashHasKey.sqf";
			};
		};
	};
};

#endif // FUNCTIONS_CONFIG