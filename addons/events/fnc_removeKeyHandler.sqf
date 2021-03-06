/* ----------------------------------------------------------------------------
Function: CBA_fnc_removeKeyHandler

Description:
	Removes an action to a keyhandler

Parameters:
  _hashKey - handler identifier [String].
  _type    - "keydown" (default) = keyDown,  "keyup" = keyUp [String].


Returns:

Examples:
	(begin example)
		["cba_somesystem_keyevent"] call CBA_fnc_removeKeyHandler;
		["cba_anothersystem_keyup", "keyup"] call CBA_fnc_removeKeyHandler;
	(end)

Author:
	Sickboy

---------------------------------------------------------------------------- */
// #define DEBUG_MODE_FULL
#include "script_component.hpp"
SCRIPT(removeKeyHandler);
PARAMS_1(_hashKey);
DEFAULT_PARAM(1,_type,"keydown");
private ["_keyData", "_handlers", "_idx", "_myHandlers"];
_type = toLower _type;
if (_type in KEYS_ARRAY_WRONG) then { _type = ("key" + _type) };
if !(_type in KEYS_ARRAY) exitWith { ERROR("Type does not exist") };
_hashKey = toLower _hashKey;
_keyData = [if (_type == "keydown") then { GVAR(keyhandlers_down) } else { GVAR(keyhandlers_up) }, _hashKey] call CBA_fnc_hashGet;

_handlers = [GVAR(keyhandler_hash), _type] call CBA_fnc_hashGet;

// Remove existing key.
_idx = _keyData select 0;
if (count _handlers > _idx) then {
	_myHandlers = _handlers select _idx;
	if (_hashKey in _myHandlers) then {
		_myHandlers = _myHandlers - [_hashKey];
		_handlers set [_idx, _myHandlers];
	};
};


true;
