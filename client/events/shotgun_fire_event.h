/*
shotgun_fire_event.h
Copyright (C) 2025 SNMetamorph

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

#pragma once
#include "base_game_event.h"
#include "matrix.h"

class CShotgunFireEvent : public CBaseGameEvent
{
public:
	CShotgunFireEvent(event_args_t *args);
	~CShotgunFireEvent() = default;

	void Execute(bool singleShot);

private:
	void SingleShot();
	void DoubleShot();
};
