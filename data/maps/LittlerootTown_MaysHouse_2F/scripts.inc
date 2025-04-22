# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 8, 2
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth::
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth::
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest::
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast::
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end

RivalsHouse_2F_Text_MayWhoAreYou::
# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hä?\n"
	.string "Wer… wer bist du?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Oh, du bist {PLAYER}{KUN}.\n"
	.string "Also seid ihr heute eingezogen.\p"
	.string "Ähm… Ich bin MAIKE.\n"
	.string "Schön, dich kennenzulernen!\p"
	.string "Ich…\n"
	.string "Ich habe den Traum, mit POKéMON aus\l"
	.string "aller Welt Freundschaft zu schließen.\p"
	.string "Ich… Ich habe von dir gehört, {PLAYER}{KUN},\n"
	.string "von meinem Vater, PROF. BIRK.\p"
	.string "Ich hatte gehofft, dass du nett bist,\n"
	.string "{PLAYER}{KUN}, und dass wir Freunde werden.\p"
	.string "Oh, das ist albern, oder?\n"
	.string "Ich kenne dich ja kaum, {PLAYER}{KUN}.\p"
	.string "Eheheh…\p"
	.string "Oh nein! Ich habe ganz vergessen!\p"
	.string "Ich sollte meinem Vater helfen,\n"
	.string "wilde POKéMON zu fangen!\p"
	.string "{PLAYER}{KUN}, wir sehen uns später!$"

RivalsHouse_2F_Text_MayGettingReady::
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON vollständig geheilt!\n"
	.string "Items bereit, und…$"

RivalsHouse_2F_Text_BrendanWhoAreYou::
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
	.string "Du…\p"
	.string "Wer bist du?\p"
	.string "Oh, du bist {PLAYER}, oder?\n"
	.string "Neu eingezogen, richtig?\p"
	.string "Ich wusste gar nicht, dass du ein Mädchen bist.\p"
	.string "Mein Vater, PROF. BIRK, meinte, unser\n"
	.string "neuer Nachbar sei das Kind eines\l"
	.string "ARENALEITERS, also dachte ich,\n"
	.string "du wärst ein Junge.\p"
	.string "Ich heiße BRENDAN.\n"
	.string "Also, hallo Nachbarin!\p"
	.string "Hm? Hey, {PLAYER}, hast du etwa\n"
	.string "kein eigenes POKéMON?\p"
	.string "Soll ich dir eins fangen?\p"
	.string "Oh Mist, ich hab was vergessen…\p"
	.string "Ich soll meinem Vater helfen,\n"
	.string "wilde POKéMON zu fangen.\p"
	.string "Ein andermal, okay?$"

RivalsHouse_2F_Text_BrendanGettingReady::
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON vollständig geheilt…\n"
	.string "Alle Items eingepackt, und…$"

RivalsHouse_2F_Text_ItsRivalsPokeBall::
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Das ist {RIVAL}s POKéBALL!\p"
	.string "Am besten lässt du ihn da, wo er ist.$"

RivalsHouse_2F_Text_MayJustCheckingMyPokedex::
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAIKE: {PLAYER}{KUN}!\p"
	.string "Ich habe gerade meinen POKéDEX überprüft.\p"
	.string "Es gibt noch viele POKéMON, die ich\n"
	.string "gesehen, aber nicht gefangen habe.\p"
	.string "Und viele andere könnten sich\n"
	.string "vielleicht noch entwickeln.\p"
	.string "Ich frage mich, wo ich als Nächstes\n"
	.string "welche fangen soll?$"

RivalsHouse_2F_Text_MayWhereShouldIGoNext::
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAIKE: Ich frage mich, wo ich als\n"
	.string "Nächstes POKéMON fangen soll?\p"
	.string "Wäre doch lustig, wenn wir uns\n"
	.string "unterwegs begegnen, {PLAYER}{KUN}!$"

RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex::
# 397 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: Hey, da bist du ja, {PLAYER}.\p"
	.string "Ich hab mir gerade meinen POKéDEX\n"
	.string "angeschaut.\p"
	.string "Ich muss noch viele POKéMON fangen,\n"
	.string "aber das hier sieht schon ziemlich gut aus.\p"
	.string "Wenn ich mir den POKéDEX so anschaue,\n"
	.string "kribbelt es mir schon in den Füßen,\l"
	.string "wieder loszuziehen.$"

RivalsHouse_2F_Text_BrendanWhereShouldIGoNext::
# 408 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: Ich kann mich nicht entscheiden,\n"
	.string "wo ich als Nächstes POKéMON fangen soll.\p"
	.string "Hey, {PLAYER}, wenn ich dich unterwegs\n"
	.string "sehe, können wir ja einen Kampf machen,\l"
	.string "wenn du Lust hast.$"
