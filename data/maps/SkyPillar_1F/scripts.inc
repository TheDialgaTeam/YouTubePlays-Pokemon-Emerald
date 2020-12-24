SkyPillar_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_1F_OnTransition
	.byte 0

SkyPillar_1F_OnTransition:
	call_if_le VAR_SKY_PILLAR_STATE, 3, SkyPillar_1F_EventScript_CleanFloor
	end

SkyPillar_1F_EventScript_CleanFloor::
	setmaplayoutindex LAYOUT_SKY_PILLAR_1F_CLEAN
	return

