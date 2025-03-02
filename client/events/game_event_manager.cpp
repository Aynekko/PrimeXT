/*
game_event_manager.cpp - class that responsible for registering game events handlers
Copyright (C) 2024 SNMetamorph

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

#include "game_event_manager.h"
#include "hud.h"
#include "utils.h"
#include "event_api.h"
#include "event_args.h"
#include "glock_fire_event.h"
#include "crossbow_fire_event.h"
#include "python_fire_event.h"

CGameEventManager::CGameEventManager()
{
	RegisterGlockEvents();
	RegisterCrossbowEvents();
	RegisterPythonEvents();
}

void CGameEventManager::RegisterGlockEvents()
{
	gEngfuncs.pfnHookEvent("events/glock1.sc", [](event_args_s *args) {
		CGlockFireEvent event(args);
		event.Execute();
	});
	gEngfuncs.pfnHookEvent("events/glock2.sc", [](event_args_s *args) {
		CGlockFireEvent event(args);
		event.Execute();
	});
}

void CGameEventManager::RegisterCrossbowEvents()
{
	gEngfuncs.pfnHookEvent("events/crossbow1.sc", [](event_args_s *args) {
		CCrossbowFireEvent event(args);
		event.Execute();
	});
	gEngfuncs.pfnHookEvent("events/crossbow2.sc", [](event_args_s *args) {
		CCrossbowFireEvent event(args);
		event.Execute();
	});
}

void CGameEventManager::RegisterPythonEvents()
{
	gEngfuncs.pfnHookEvent("events/python.sc", [](event_args_s *args) {
		CPythonFireEvent event(args);
		event.Execute();
	});
}
