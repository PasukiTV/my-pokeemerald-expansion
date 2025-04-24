# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 2
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 5
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor_2
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighborr, MSGBOX_DEFAULT
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor_1:
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor_2:
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
	goto LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor_1


PlayersHouse_1F_Text_IsntItNiceInHere::
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Siehst du, {PLAYER}?\n"
	.string "Ist es hier nicht auch schön?$"

PlayersHouse_1F_Text_MoversPokemonGoSetClock::
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Die POKéMON der Umzugsfirma machen\n"
	.string "die ganze Arbeit beim Umzug und Putzen.\l"
	.string "Das ist so praktisch!\p"
	.string "{PLAYER}, dein Zimmer ist oben.\n"
	.string "Geh und sieh es dir an, Liebling!\p"
	.string "VATI hat dir eine neue Uhr gekauft,\n"
	.string "zur Erinnerung an unseren Umzug.\l"
	.string "Vergiss nicht, sie zu stellen!$"

PlayersHouse_1F_Text_ArentYouInterestedInRoom::
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Na, {PLAYER}?\p"
	.string "Willst du dir nicht dein eigenes\n"
	.string "Zimmer ansehen?$"

PlayersHouse_1F_Text_GoSetTheClock::
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: {PLAYER}.\p"
	.string "Geh und stell die Uhr in deinem Zimmer,\n"
	.string "Liebling.$"

PlayersHouse_1F_Text_OhComeQuickly::
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Oh! {PLAYER}, {PLAYER}!\n"
	.string "Schnell! Komm schnell her!$"

PlayersHouse_1F_Text_MaybeDadWillBeOn::
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Da! Da ist die ARENA von\n"
	.string "BLÜTENBURG CITY!\n"
	.string "Ich glaube, VATI ist im Fernsehen!$"

PlayersHouse_1F_Text_ReportFromPetalburgGym::
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "REPORTER: Das war unsere Reportage\n"
	.string "über die ARENA von BLÜTENBURG CITY.$"

PlayersHouse_1F_Text_ItsOverWeMissedHim::
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Oh… Schon vorbei.\p"
	.string "Ich glaube, VATI war im Fernsehen und\n"
	.string "wir haben ihn verpast. Schade!$"

PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor::
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ach ja.\n"
	.string "Einer von VATIs Freunden wohnt hier.\p"
	.string "Er heißt PROF.BIRK.\p"
	.string "Er wohnt gleich nebenan, daher solltest\n"
	.string "du hinübergehen und dich vorstellen.$"

PlayersHouse_1F_Text_SeeYouHoney::
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Bis später, Spatz!$"

PlayersHouse_1F_Text_DidYouMeetProfBirch::
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Hast du dich bei PROF. BIRK\n"
	.string "vorgestellt?$"

PlayersHouse_1F_Text_YouShouldRestABit::
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Wie gehts dir, {PLAYER}?\n"
	.string "Du siehst ein wenig müde aus.\p"
	.string "Du solltest dich ein wenig ausruhen.$"

PlayersHouse_1F_Text_TakeCareHoney::
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Pass auf dich auf, Liebling!$"

PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom::
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Oh? Hat dir VATI diesen ORDEN\n"
	.string "gegeben?\p"
	.string "Dann habe ich auch etwas für dich,\n"
	.string "von deiner MUTTER!$"

PlayersHouse_1F_Text_DontPushYourselfTooHard::
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Streng dich nicht zu sehr an,\n"
	.string "Liebling. Du kannst jederzeit heimkommen.\p"
	.string "Viel Erfolg, mein Schatz!$"

PlayersHouse_1F_Text_IsThatAPokenav::
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Was ist das, Liebling? Ein POKéNAV?\n"
	.string "Hat dir jemand von DEVON den gegeben?\p"
	.string "Wie wäre es, wenn du deine MUTTER\n"
	.string "registrierst?\p"
	.string "… … …$"

PlayersHouse_1F_Text_RegisteredMom::
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER wurde im\n"
	.string "POKéNAV registriert.$"

PlayersHouse_1F_Text_Vigoroth1::
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"

PlayersHouse_1F_Text_Vigoroth2::
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"

PlayersHouse_1F_Text_TheresAMovieOnTV::
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Im Fernsehen läuft ein Film.\p"
	.string "Zwei Männer tanzen auf riesengroßen\n"
	.string "Klaviertasten.\p"
	.string "Aber es wird Zeit aufzubrechen!$"

PlayersHouse_1F_Text_RunningShoesManual::
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Das ist die Gebrauchsanleitung für die\n"
	.string "TURBO-SCHUHE.\p"
	.string "Drücke die B-Taste, während du diese\n"
	.string "TURBO-SCHUHE trägst, um zu rennen.\p"
	.string "Zieh deine TURBO-SCHUHE an und lauf\n"
	.string "los in die große weite Welt!“$"

PlayersHouse_1F_Text_TicketFromBrineyCameForYou::
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "VATI: Hm?\p"
	.string "He, {PLAYER}!\p"
	.string "Es ist schon eine Weile her, dass wir uns\n"
	.string "gesehen haben… Du wirkst irgendwie\n"
	.string "stärker.\p"
	.string "Das ist zumindest mein Eindruck.\n"
	.string "Aber dein alter Herr gibt noch lange nicht auf!\p"
	.string "Ach ja, ich habe etwas für dich.\n"
	.string "Das kam von einem gewissen MR. BRACK.$"

PlayersHouse_1F_Text_PortsInSlateportLilycove::
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "VATI: Hm, ein TICKET für eine Fähre?\p"
	.string "Wenn ich mich recht erinnere, gibt es\n"
	.string "Fährhäfen in GRAPHITPORT und SEEGRASULB.$"

PlayersHouse_1F_Text_BetterGetBackToGym::
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ich sollte lieber zur ARENA von\n"
	.string "BLÜTENBURG zurückkehren.\p"
	.string "MUTTER, danke, dass du dich während\n"
	.string "meiner Abwesenheit um das Haus gekümmert hast.$"

PlayersHouse_1F_Text_DadShouldStayLonger::
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Dein VATI…\p"
	.string "Er ist das erste Mal seit Langem zu Hause,\n"
	.string "und dann redet er nur über POKéMON.\p"
	.string "Er sollte sich lieber entspannen und\n"
	.string "etwas länger bleiben.$"

PlayersHouse_1F_Text_IsThatABreakingStory::
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Ist das etwa eine Eilmeldung?$"

PlayersHouse_1F_Text_LatiEmergencyNewsFlash::
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Und nun eine Eilmeldung!\p"
	.string "An verschiedenen Orten in HOENN wurden\n"
	.string "sichtungen eines BZZT…farbenen POKéMONS\l"
	.string "gemeldet.\p"
	.string "Die Identität des POKéMONS ist bisher\n"
	.string "nicht bekannt.\p"
	.string "Wir kehren nun zurück zum regulären\n"
	.string "Filmprogramm.$"

PlayersHouse_1F_Text_WhatColorDidTheySay::
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: {PLAYER}, hast du das gehört?\p"
	.string "Welche Farbe hatte das POKéMON laut\n"
	.string "dem Nachrichtensprecher?$"

PlayersHouse_1F_Text_StillUnknownPokemon::
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MUTTER: Das ist ja erstaunlich!\n"
	.string "Es gibt also immer noch unbekannte POKéMON.$"
