SkyPillar_5F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_5F_OnTransition
	.byte 0

SkyPillar_5F_OnTransition:
	call_if_le VAR_SKY_PILLAR_STATE, 3, SkyPillar_5F_EventScript_CleanFloor
	return

SkyPillar_5F_EventScript_CleanFloor::
	setmaplayoutindex LAYOUT_SKY_PILLAR_5F_CLEAN
	return

