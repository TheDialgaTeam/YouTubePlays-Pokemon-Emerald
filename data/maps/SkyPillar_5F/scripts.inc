SkyPillar_5F_MapScripts:: @ 82396A2
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_5F_OnTransition
	.byte 0

SkyPillar_5F_OnTransition: @ 82396A8
	compare VAR_SKY_PILLAR_STATE, 3
	call_if_le SkyPillar_5F_EventScript_CleanFloor
	return

SkyPillar_5F_EventScript_CleanFloor:: @ 82396B4
	setmaplayoutindex LAYOUT_SKY_PILLAR_5F_CLEAN
	return

