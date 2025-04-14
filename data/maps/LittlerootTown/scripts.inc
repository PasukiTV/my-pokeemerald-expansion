# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 5
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 6
# 6 "data/maps/LittlerootTown/scripts.pory"

# 7 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 11 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 12 "data/maps/LittlerootTown/scripts.pory"

# 13 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 18 "data/maps/LittlerootTown/scripts.pory"

# 19 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 20 "data/maps/LittlerootTown/scripts.pory"
	// OLD# 					
# 21 "data/maps/LittlerootTown/scripts.pory"
	// @ 1: In truck male 				// wird übersprungen da der Spieler im Schlafzimmer spawned
# 22 "data/maps/LittlerootTown/scripts.pory"
	// @ 2: In truck female 			// wird übersprungen da der Spieler im Schlafzimmer spawned
# 23 "data/maps/LittlerootTown/scripts.pory"
	// @ 3: Entered house 				// wird übersprungen da der Spieler im Schlafzimmer spawned
# 24 "data/maps/LittlerootTown/scripts.pory"
	// @ 4: Told to go set clock 		// wird übersprungen da der Spieler im Schlafzimmer spawned
# 25 "data/maps/LittlerootTown/scripts.pory"
	// @ 5: Entered 2F to set clock 	// wird übersprungen da der Spieler im Schlafzimmer spawned
# 26 "data/maps/LittlerootTown/scripts.pory"
	// @ 6: Set clock 					// wird übersprungen da der Spieler im Schlafzimmer spawned
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 28 "data/maps/LittlerootTown/scripts.pory"

# 29 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 30 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 36 "data/maps/LittlerootTown/scripts.pory"

# 37 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 41 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"

# 44 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 45 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 46 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 47 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 57 "data/maps/LittlerootTown/scripts.pory"
	end
# 58 "data/maps/LittlerootTown/scripts.pory"

# 59 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 60 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 61 "data/maps/LittlerootTown/scripts.pory"
	return
# 62 "data/maps/LittlerootTown/scripts.pory"

# 63 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 64 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 65 "data/maps/LittlerootTown/scripts.pory"
	return
# 66 "data/maps/LittlerootTown/scripts.pory"

# 67 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 68 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 69 "data/maps/LittlerootTown/scripts.pory"
	return
# 70 "data/maps/LittlerootTown/scripts.pory"

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 72 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 73 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 74 "data/maps/LittlerootTown/scripts.pory"
	return
# 75 "data/maps/LittlerootTown/scripts.pory"

# 76 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 77 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 78 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 79 "data/maps/LittlerootTown/scripts.pory"
	return
# 80 "data/maps/LittlerootTown/scripts.pory"

# 81 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 82 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 83 "data/maps/LittlerootTown/scripts.pory"
	return
# 84 "data/maps/LittlerootTown/scripts.pory"

# 85 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 86 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 87 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 88 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 89 "data/maps/LittlerootTown/scripts.pory"
	return
# 90 "data/maps/LittlerootTown/scripts.pory"

# 91 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 92 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 93 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 94 "data/maps/LittlerootTown/scripts.pory"
	return
# 95 "data/maps/LittlerootTown/scripts.pory"

# 96 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 97 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 98 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 99 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 100 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 101 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 102 "data/maps/LittlerootTown/scripts.pory"
	return
# 103 "data/maps/LittlerootTown/scripts.pory"

# 104 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 105 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 106 "data/maps/LittlerootTown/scripts.pory"
	return
# 107 "data/maps/LittlerootTown/scripts.pory"

# 108 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 109 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 110 "data/maps/LittlerootTown/scripts.pory"
	return
# 111 "data/maps/LittlerootTown/scripts.pory"

# 112 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 113 "data/maps/LittlerootTown/scripts.pory"
	/* OLD#
# 114 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 115 "data/maps/LittlerootTown/scripts.pory"
	*/
# 116 "data/maps/LittlerootTown/scripts.pory"
	/* OLD#
# 117 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 118 "data/maps/LittlerootTown/scripts.pory"
	*/
# 119 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 120 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 121 "data/maps/LittlerootTown/scripts.pory"

# 122 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 123 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 124 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 125 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 126 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 127 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 128 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 129 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 130 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 131 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 132 "data/maps/LittlerootTown/scripts.pory"
	end
# 133 "data/maps/LittlerootTown/scripts.pory"
*/
# 134 "data/maps/LittlerootTown/scripts.pory"

# 135 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 136 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 137 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 138 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 139 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 140 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 141 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 142 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 143 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 144 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 145 "data/maps/LittlerootTown/scripts.pory"
	end
# 146 "data/maps/LittlerootTown/scripts.pory"
*/
# 147 "data/maps/LittlerootTown/scripts.pory"

# 148 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 149 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 150 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 151 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 152 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 153 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 155 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 156 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 157 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 158 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 160 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 161 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 162 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 163 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 165 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 166 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 167 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 168 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 170 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 171 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 172 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 173 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 174 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 175 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 176 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 177 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 178 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 179 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 180 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 181 "data/maps/LittlerootTown/scripts.pory"
	return
# 182 "data/maps/LittlerootTown/scripts.pory"
*/
# 183 "data/maps/LittlerootTown/scripts.pory"

# 184 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 185 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 186 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 187 "data/maps/LittlerootTown/scripts.pory"

# 188 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 189 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 190 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 191 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown/scripts.pory"

# 193 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 194 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 195 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 196 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 197 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 198 "data/maps/LittlerootTown/scripts.pory"

# 199 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 200 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 202 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 203 "data/maps/LittlerootTown/scripts.pory"

# 204 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 205 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 207 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 209 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 210 "data/maps/LittlerootTown/scripts.pory"

# 211 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 213 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 214 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 215 "data/maps/LittlerootTown/scripts.pory"

# 216 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 217 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 218 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 219 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 220 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 221 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 222 "data/maps/LittlerootTown/scripts.pory"

# 223 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 224 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 225 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 226 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 227 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 228 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 229 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 230 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 231 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 232 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 233 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 234 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 235 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 236 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 237 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 238 "data/maps/LittlerootTown/scripts.pory"
	end
# 239 "data/maps/LittlerootTown/scripts.pory"

# 240 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 241 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 242 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 243 "data/maps/LittlerootTown/scripts.pory"

# 244 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 245 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 246 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 247 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 248 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 249 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 250 "data/maps/LittlerootTown/scripts.pory"
	end
# 251 "data/maps/LittlerootTown/scripts.pory"

# 252 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 253 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 254 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 255 "data/maps/LittlerootTown/scripts.pory"
	end
# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 258 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 259 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 260 "data/maps/LittlerootTown/scripts.pory"
	end
# 261 "data/maps/LittlerootTown/scripts.pory"

# 262 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 263 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 264 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 265 "data/maps/LittlerootTown/scripts.pory"
	end
# 266 "data/maps/LittlerootTown/scripts.pory"
*/
# 267 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 268 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 269 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 270 "data/maps/LittlerootTown/scripts.pory"
	end
# 271 "data/maps/LittlerootTown/scripts.pory"
*/
# 272 "data/maps/LittlerootTown/scripts.pory"

# 273 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 274 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 275 "data/maps/LittlerootTown/scripts.pory"
	lock
# 276 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 277 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 278 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 279 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 280 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 281 "data/maps/LittlerootTown/scripts.pory"
	release
# 282 "data/maps/LittlerootTown/scripts.pory"
	end
# 283 "data/maps/LittlerootTown/scripts.pory"
*/
# 284 "data/maps/LittlerootTown/scripts.pory"

# 285 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 286 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 287 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 288 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 289 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 290 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 291 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 292 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 293 "data/maps/LittlerootTown/scripts.pory"
	release
# 294 "data/maps/LittlerootTown/scripts.pory"
	end
# 295 "data/maps/LittlerootTown/scripts.pory"
*/
# 296 "data/maps/LittlerootTown/scripts.pory"

# 297 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 298 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 299 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 300 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 301 "data/maps/LittlerootTown/scripts.pory"
	release
# 302 "data/maps/LittlerootTown/scripts.pory"
	end
# 303 "data/maps/LittlerootTown/scripts.pory"
*/
# 304 "data/maps/LittlerootTown/scripts.pory"

# 305 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 306 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 307 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 308 "data/maps/LittlerootTown/scripts.pory"
	release
# 309 "data/maps/LittlerootTown/scripts.pory"
	end
# 310 "data/maps/LittlerootTown/scripts.pory"
*/
# 311 "data/maps/LittlerootTown/scripts.pory"

# 312 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 313 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 314 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 315 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 316 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 317 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 318 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 319 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 320 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 321 "data/maps/LittlerootTown/scripts.pory"
	end
# 322 "data/maps/LittlerootTown/scripts.pory"
*/
# 323 "data/maps/LittlerootTown/scripts.pory"

# 324 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 325 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 326 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 327 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 328 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 329 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 330 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 331 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 332 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 333 "data/maps/LittlerootTown/scripts.pory"
	return
# 334 "data/maps/LittlerootTown/scripts.pory"
*/
# 335 "data/maps/LittlerootTown/scripts.pory"

# 336 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 338 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 339 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 340 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 341 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 342 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 350 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 351 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 352 "data/maps/LittlerootTown/scripts.pory"

# 353 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 354 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 355 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 356 "data/maps/LittlerootTown/scripts.pory"

# 357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 358 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 367 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 368 "data/maps/LittlerootTown/scripts.pory"

# 369 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 370 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 372 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 373 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 374 "data/maps/LittlerootTown/scripts.pory"
*/
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 377 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 378 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 379 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 380 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 381 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 382 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 383 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 384 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 385 "data/maps/LittlerootTown/scripts.pory"
	end
# 386 "data/maps/LittlerootTown/scripts.pory"

# 387 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 388 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 389 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 390 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 391 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 392 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 393 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 394 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 395 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 396 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 397 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 398 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 399 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 400 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 401 "data/maps/LittlerootTown/scripts.pory"

# 402 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 403 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 404 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 405 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 406 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 407 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 408 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 409 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 410 "data/maps/LittlerootTown/scripts.pory"
*/
# 411 "data/maps/LittlerootTown/scripts.pory"

# 412 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 413 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 414 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 415 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 416 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 417 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 418 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 419 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 420 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 421 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 422 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 423 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 424 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 425 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 426 "data/maps/LittlerootTown/scripts.pory"
	end
# 427 "data/maps/LittlerootTown/scripts.pory"
*/
# 428 "data/maps/LittlerootTown/scripts.pory"

# 429 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 430 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 431 "data/maps/LittlerootTown/scripts.pory"
	end
# 432 "data/maps/LittlerootTown/scripts.pory"

# 433 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 434 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 435 "data/maps/LittlerootTown/scripts.pory"
	end
# 436 "data/maps/LittlerootTown/scripts.pory"

# 437 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 438 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 439 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 440 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 441 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 442 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 443 "data/maps/LittlerootTown/scripts.pory"
	end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 446 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 447 "data/maps/LittlerootTown/scripts.pory"
	return
# 448 "data/maps/LittlerootTown/scripts.pory"

# 449 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 450 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 451 "data/maps/LittlerootTown/scripts.pory"
	return
# 452 "data/maps/LittlerootTown/scripts.pory"

# 453 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 454 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 455 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 456 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 457 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 458 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 459 "data/maps/LittlerootTown/scripts.pory"
	end
# 460 "data/maps/LittlerootTown/scripts.pory"

# 461 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 462 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 463 "data/maps/LittlerootTown/scripts.pory"
	return
# 464 "data/maps/LittlerootTown/scripts.pory"

# 465 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 466 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 467 "data/maps/LittlerootTown/scripts.pory"
	return
# 468 "data/maps/LittlerootTown/scripts.pory"

# 469 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 470 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 471 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 472 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 473 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 474 "data/maps/LittlerootTown/scripts.pory"
	end
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 477 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 478 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 479 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 480 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 481 "data/maps/LittlerootTown/scripts.pory"
	end
# 482 "data/maps/LittlerootTown/scripts.pory"

# 483 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 484 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 485 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 486 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 487 "data/maps/LittlerootTown/scripts.pory"
	end
# 488 "data/maps/LittlerootTown/scripts.pory"

# 489 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 490 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 491 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 492 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 493 "data/maps/LittlerootTown/scripts.pory"
	end
# 494 "data/maps/LittlerootTown/scripts.pory"

# 495 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 496 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 497 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 498 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 499 "data/maps/LittlerootTown/scripts.pory"
	end
# 500 "data/maps/LittlerootTown/scripts.pory"

# 501 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 502 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 503 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 504 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 505 "data/maps/LittlerootTown/scripts.pory"
	end
# 506 "data/maps/LittlerootTown/scripts.pory"

# 507 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 508 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 509 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 510 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 511 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 512 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 513 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 514 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 515 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 516 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 517 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 518 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 519 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 520 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 521 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 522 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 523 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 524 "data/maps/LittlerootTown/scripts.pory"
	end
# 525 "data/maps/LittlerootTown/scripts.pory"

# 526 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 527 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 528 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 529 "data/maps/LittlerootTown/scripts.pory"
	return
# 530 "data/maps/LittlerootTown/scripts.pory"

# 531 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 532 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 533 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	return
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 542 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 543 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/LittlerootTown/scripts.pory"
	return
# 545 "data/maps/LittlerootTown/scripts.pory"

# 546 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 547 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 548 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 549 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 550 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 551 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 552 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 553 "data/maps/LittlerootTown/scripts.pory"
	return
# 554 "data/maps/LittlerootTown/scripts.pory"

# 555 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 556 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 557 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 558 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 559 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 560 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 561 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 562 "data/maps/LittlerootTown/scripts.pory"
	return
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 566 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	return
# 570 "data/maps/LittlerootTown/scripts.pory"

# 571 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 572 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown/scripts.pory"
	return
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	return
# 584 "data/maps/LittlerootTown/scripts.pory"

# 585 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	return
# 591 "data/maps/LittlerootTown/scripts.pory"

# 592 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	return
# 598 "data/maps/LittlerootTown/scripts.pory"

# 599 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 603 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 604 "data/maps/LittlerootTown/scripts.pory"
	return
# 605 "data/maps/LittlerootTown/scripts.pory"

# 606 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 607 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 608 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 609 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 610 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 611 "data/maps/LittlerootTown/scripts.pory"
	return
# 612 "data/maps/LittlerootTown/scripts.pory"

# 613 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 614 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 615 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 616 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 617 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 618 "data/maps/LittlerootTown/scripts.pory"
	return
# 619 "data/maps/LittlerootTown/scripts.pory"

# 620 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 621 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 622 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 623 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 624 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 625 "data/maps/LittlerootTown/scripts.pory"
	return
# 626 "data/maps/LittlerootTown/scripts.pory"

# 627 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 628 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 629 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 630 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 631 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 632 "data/maps/LittlerootTown/scripts.pory"
	return
# 633 "data/maps/LittlerootTown/scripts.pory"

# 634 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 635 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 636 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 637 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 638 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 639 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 640 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 641 "data/maps/LittlerootTown/scripts.pory"
	return
# 642 "data/maps/LittlerootTown/scripts.pory"

# 643 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 644 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 645 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 646 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 647 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 648 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 649 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 650 "data/maps/LittlerootTown/scripts.pory"
	return
# 651 "data/maps/LittlerootTown/scripts.pory"

# 652 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 653 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 655 "data/maps/LittlerootTown/scripts.pory"
	return
# 656 "data/maps/LittlerootTown/scripts.pory"

# 657 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 658 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 660 "data/maps/LittlerootTown/scripts.pory"
	return
# 661 "data/maps/LittlerootTown/scripts.pory"

# 662 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 663 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 665 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 666 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 667 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 669 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 670 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 671 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 672 "data/maps/LittlerootTown/scripts.pory"
	return
# 673 "data/maps/LittlerootTown/scripts.pory"

# 674 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 675 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 677 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 679 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 681 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 682 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 684 "data/maps/LittlerootTown/scripts.pory"
	return
# 685 "data/maps/LittlerootTown/scripts.pory"

# 686 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 687 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 688 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 689 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 691 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 693 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 694 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 696 "data/maps/LittlerootTown/scripts.pory"
	return
# 697 "data/maps/LittlerootTown/scripts.pory"

# 698 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 699 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 700 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 701 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 703 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 705 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 706 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 707 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 708 "data/maps/LittlerootTown/scripts.pory"
	return
# 709 "data/maps/LittlerootTown/scripts.pory"

# 710 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 711 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 712 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 713 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 715 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 717 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 718 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 719 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 720 "data/maps/LittlerootTown/scripts.pory"
	return
# 721 "data/maps/LittlerootTown/scripts.pory"

# 722 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 723 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 724 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 725 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 726 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 727 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 728 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 729 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 730 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 731 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 732 "data/maps/LittlerootTown/scripts.pory"
	return
# 733 "data/maps/LittlerootTown/scripts.pory"

# 734 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 735 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 736 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 737 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 738 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 739 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 740 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 741 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 742 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 743 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 744 "data/maps/LittlerootTown/scripts.pory"
	return
# 745 "data/maps/LittlerootTown/scripts.pory"

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 747 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 748 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 749 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 750 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 751 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 752 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 753 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 754 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 755 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 756 "data/maps/LittlerootTown/scripts.pory"
	return
# 757 "data/maps/LittlerootTown/scripts.pory"

# 758 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 760 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 765 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 766 "data/maps/LittlerootTown/scripts.pory"

# 767 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 772 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 774 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 775 "data/maps/LittlerootTown/scripts.pory"

# 776 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 781 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 782 "data/maps/LittlerootTown/scripts.pory"

# 783 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 789 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 790 "data/maps/LittlerootTown/scripts.pory"

# 791 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 794 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 795 "data/maps/LittlerootTown/scripts.pory"

# 796 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 798 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 800 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 801 "data/maps/LittlerootTown/scripts.pory"

# 802 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 805 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 806 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 807 "data/maps/LittlerootTown/scripts.pory"

# 808 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 811 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 812 "data/maps/LittlerootTown/scripts.pory"

# 813 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 819 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 820 "data/maps/LittlerootTown/scripts.pory"

# 821 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 826 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 827 "data/maps/LittlerootTown/scripts.pory"

# 828 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 834 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 835 "data/maps/LittlerootTown/scripts.pory"

# 836 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 842 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 843 "data/maps/LittlerootTown/scripts.pory"

# 844 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 850 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 851 "data/maps/LittlerootTown/scripts.pory"

# 852 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 859 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 860 "data/maps/LittlerootTown/scripts.pory"

# 861 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 865 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 872 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 873 "data/maps/LittlerootTown/scripts.pory"

# 874 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 876 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 879 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 880 "data/maps/LittlerootTown/scripts.pory"

# 881 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 883 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 885 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 886 "data/maps/LittlerootTown/scripts.pory"

# 887 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 891 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 894 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 895 "data/maps/LittlerootTown/scripts.pory"

# 896 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 900 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 902 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 903 "data/maps/LittlerootTown/scripts.pory"

# 904 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 905 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 906 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 907 "data/maps/LittlerootTown/scripts.pory"

# 908 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 909 "data/maps/LittlerootTown/scripts.pory"
	lock
# 910 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 911 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 912 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 913 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 914 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 915 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 916 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 917 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 918 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 919 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 920 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 921 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 922 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 923 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 924 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 925 "data/maps/LittlerootTown/scripts.pory"
	end
# 926 "data/maps/LittlerootTown/scripts.pory"

# 927 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 928 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 929 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 930 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 931 "data/maps/LittlerootTown/scripts.pory"
	release
# 932 "data/maps/LittlerootTown/scripts.pory"
	end
# 933 "data/maps/LittlerootTown/scripts.pory"

# 934 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 935 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 936 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 937 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 938 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 939 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 940 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 941 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 942 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 943 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 944 "data/maps/LittlerootTown/scripts.pory"
	return
# 945 "data/maps/LittlerootTown/scripts.pory"

# 946 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 947 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 948 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 949 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 958 "data/maps/LittlerootTown/scripts.pory"
*/
# 959 "data/maps/LittlerootTown/scripts.pory"

# 960 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 962 "data/maps/LittlerootTown/scripts.pory"

# 963 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 973 "data/maps/LittlerootTown/scripts.pory"

# 974 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 977 "data/maps/LittlerootTown/scripts.pory"

# 978 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 980 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 985 "data/maps/LittlerootTown/scripts.pory"

# 986 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 992 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 995 "data/maps/LittlerootTown/scripts.pory"

# 996 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 997 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 1001 "data/maps/LittlerootTown/scripts.pory"
*/
# 1002 "data/maps/LittlerootTown/scripts.pory"

# 1003 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 1004 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 1008 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 1009 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1010 "data/maps/LittlerootTown/scripts.pory"
*/
# 1011 "data/maps/LittlerootTown/scripts.pory"

# 1012 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 1013 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1014 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 1017 "data/maps/LittlerootTown/scripts.pory"
*/
# 1018 "data/maps/LittlerootTown/scripts.pory"

# 1019 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1021 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 1022 "data/maps/LittlerootTown/scripts.pory"

# 1023 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 1024 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1031 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1032 "data/maps/LittlerootTown/scripts.pory"
*/
# 1033 "data/maps/LittlerootTown/scripts.pory"

# 1034 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 1035 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1036 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1037 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1038 "data/maps/LittlerootTown/scripts.pory"
*/
# 1039 "data/maps/LittlerootTown/scripts.pory"

# 1040 "data/maps/LittlerootTown/scripts.pory"
/* OLD#
# 1041 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1043 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1044 "data/maps/LittlerootTown/scripts.pory"
*/
# 1045 "data/maps/LittlerootTown/scripts.pory"

# 1046 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1047 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1049 "data/maps/LittlerootTown/scripts.pory"

# 1050 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1051 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1052 "data/maps/LittlerootTown/scripts.pory"

# 1053 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1054 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1055 "data/maps/LittlerootTown/scripts.pory"

# 1056 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1058 "data/maps/LittlerootTown/scripts.pory"

# 1059 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1061 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1062 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1064 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1065 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1066 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1067 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1068 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_FatMan::
# 1072 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
	end


LittlerootTown_EventScript_Boy::
# 1083 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
	end


LittlerootTown_EventScript_Twin::
# 1096 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1097 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1099 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_Twin_2
# 1103 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_Twin_3
# 1107 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_ne LittlerootTown_EventScript_Twin_4
LittlerootTown_EventScript_Twin_1:
# 1111 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 1112 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_Twin_2:
# 1100 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GoodLuck
	goto LittlerootTown_EventScript_Twin_1

LittlerootTown_EventScript_Twin_3:
# 1104 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_YouSavedBirch
	goto LittlerootTown_EventScript_Twin_1

LittlerootTown_EventScript_Twin_4:
# 1108 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GoSaveBirch
	goto LittlerootTown_EventScript_Twin_1


LittlerootTown_EventScript_GoodLuck::
# 1117 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 1118 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_YouSavedBirch::
# 1123 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1124 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 1125 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirch::
# 1130 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1131 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 1132 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1133 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 1134 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1135 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1136 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirchTrigger::
# 1141 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1142 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 1143 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1144 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1145 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1146 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1147 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 1148 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1149 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 1150 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1151 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 1152 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 1157 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1158 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 1159 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1160 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 1161 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 1162 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1163 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_DangerousWithoutPokemon::
# 1168 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 1169 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1170 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 1171 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 1172 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1173 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 1174 "data/maps/LittlerootTown/scripts.pory"
	closemessage
	return


LittlerootTown_Movement_TwinApproachPlayerLeft::
# 1179 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 1180 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 1181 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 1182 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 1183 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 1184 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1185 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1186 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1187 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1188 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 1189 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 1190 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 1191 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 1192 "data/maps/LittlerootTown/scripts.pory"
	step_end
	return


LittlerootTown_Movement_TwinPushPlayerFromRoute::
# 1196 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1197 "data/maps/LittlerootTown/scripts.pory"
	step_end
	return


LittlerootTown_Movement_TwinReturnLeft::
# 1201 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1202 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1203 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1204 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1205 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1206 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1207 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1208 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1209 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 1210 "data/maps/LittlerootTown/scripts.pory"
	step_end
	return


LittlerootTown_Movement_PushPlayerBackFromRoute::
# 1214 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 1215 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1216 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 1217 "data/maps/LittlerootTown/scripts.pory"
	step_end
	return


LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 1221 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1222 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 1223 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1224 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 1225 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 1226 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1227 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_Movement_TwinApproachPlayerRight::
# 1232 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 1233 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 1234 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 1235 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 1236 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 1237 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1238 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1239 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1240 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 1241 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 1242 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 1243 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 1244 "data/maps/LittlerootTown/scripts.pory"
	step_end
	return


LittlerootTown_Movement_TwinReturnRight::
# 1248 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1249 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 1250 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1251 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1252 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1253 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 1254 "data/maps/LittlerootTown/scripts.pory"
	step_end
	return


LittlerootTown_Text_CanUsePCToStoreItems::
# 1076 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
	.string "and POKéMON.123.\p"
	.string "The power of science is staggering!$"

LittlerootTown_Text_BirchSpendsDaysInLab::
# 1087 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
	.string "studying, then he'll suddenly go out in\l"
	.string "the wild to do more research…\p"
	.string "When does PROF. BIRCH spend time\n"
	.string "at home?$"

LittlerootTown_Text_GoodLuckCatchingPokemon::
# 1257 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
	.string "Good luck!$"

LittlerootTown_Text_YouSavedBirch::
# 1262 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
	.string "I'm so glad!$"

LittlerootTown_Text_CanYouGoSeeWhatsHappening::
# 1267 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
	.string "There are scary POKéMON outside!\n"
	.string "I can hear their cries!\p"
	.string "I want to go see what's going on,\n"
	.string "but I don't have any POKéMON…\p"
	.string "Can you go see what's happening\n"
	.string "for me?$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut::
# 1277 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild POKéMON will jump out!$"
