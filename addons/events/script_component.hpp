#define COMPONENT events
#include "\x\cba\addons\main\script_macros.hpp"

#ifdef DEBUG_EVENTS
	#define DEBUG
#endif

#ifdef DEBUGSETTINGS_EVENTS
	#define DEBUGSETTINGS DEBUGSETTINGS_EVENTS
#else
	#define DEBUGSETTINGS DEFAULT_DEBUGSETTINGS
#endif