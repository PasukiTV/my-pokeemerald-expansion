# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 2
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 5
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_2
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighborr, MSGBOX_DEFAULT
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_1:
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_2:
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
	goto LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_1


RivalsHouse_1F_Text_OhYoureTheNewNeighbor::
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hallo. Und du bist…?\p"
	.string "… … … … … … … … …\n"
	.string "… … … … … … … … …\p"
	.string "Oh, du bist {PLAYER}{KUN}, unser neuer\n"
	.string "Nachbar! Hallo!\p"
	.string "Wir haben eine {STR_VAR_1} in deinem Alter.\p"
	.string "Meine {STR_VAR_1} freut sich schon\n"
	.string "darauf, mit dir Freundschaft zu\l"
	.string "schließen$"

RivalsHouse_1F_Text_OhYoureTheNewNeighborr::
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hallo. Und du bist…?\p"
	.string "… … … … … … … … …\n"
	.string "… … … … … … … … …\p"
	.string "Oh, du bist {PLAYER}{KUN}, unser neuer\n"
	.string "Nachbar! Hallo!\p"
	.string "Wir haben ein {STR_VAR_1} in deinem Alter.\p"
	.string "Mein {STR_VAR_1} freut sich schon\n"
	.string "darauf, mit dir Freundschaft zu\l"
	.string "schließen$"

RivalsHouse_1F_Text_LikeChildLikeFather::
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Wie der Vater, so das Kind.\p"
	.string "Mein Mann ist genauso verrückt nach\n"
	.string "POKéMON wie unser Kind.\p"
	.string "Wenn er nicht gerade in seinem LABOR\n"
	.string "ist, krabbelt er mit Sicherheit draußen\l"
	.string "durch das Gras.$"

RivalsHouse_1F_Text_TooBusyToNoticeVisit::
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL}…\p"
	.string "Ich vermute, unser Kind ist viel zu sehr\n"
	.string "mit POKéMON beschäftigt und merkt gar\l"
	.string "nicht, dass du zu Besuch hier bist,\n"
	.string "{PLAYER}{KUN}.$"

RivalsHouse_1F_Text_WentOutToRoute103::
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} ist vor Kurzem auf ROUTE 103\n"
	.string "gegangen.\p"
	.string "Wie der Vater, so das Kind.\n"
	.string "{RIVAL} kann einfach nicht still zu Hause bleiben.$"

RivalsHouse_1F_Text_ShouldGoHomeEverySoOften::
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich finde es toll, dass Menschen mit\n"
	.string "ihren POKéMON reisen.\p"
	.string "Aber man sollte ab und zu zu Hause\n"
	.string "vorbeischauen, damit die Mutter weiß,\l"
	.string "dass es einem gut geht.\p"
	.string "Auch wenn sie es nicht sagt, macht sie\n"
	.string "sich bestimmt Sorgen um dich, {PLAYER}{KUN}.$"

RivalsHouse_1F_Text_MayWhoAreYou::
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hä?\n"
	.string "Wer… wer bist du denn?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Oh, du bist {PLAYER}{KUN}.\n"
	.string "Du bist also gestern hierher gezogen.\p"
	.string "Ähm… ich bin MAIKE.\n"
	.string "Schön, dich kennenzulernen!\p"
	.string "Ich… Ich habe diesen Traum…\n"
	.string "Mit POKéMON in der ganzen Welt\l"
	.string "Freundschaft zu schließen.\p"
	.string "Ich… Ich habe schon von dir gehört.\n"
	.string "Mein Vater, PROF. BIRK. hat mir von\l"
	.string "dir erzählt.\p"
	.string "Ich habe gehofft, dass du nett bist,\n"
	.string "{PLAYER}{KUN}, und wir Freunde werden.\p"
	.string "Oh, das ist albern, oder?\n"
	.string "Ich habe dich doch gerade erst \l"
	.string "kennen gelernt.\p"
	.string "Hihihihi…\p"
	.string "Oh, nein! Das habe ich ja total\n"
	.string "vergessen\p"
	.string "Ich sollte Vati doch helfen, ein paar\n"
	.string "wilde POKéMON zu fangen!\p"
	.string "{PLAYER}{KUN}, wir sehen uns später!$"

RivalsHouse_1F_Text_BrendanWhoAreYou::
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "He!\n"
	.string "Du…\p"
	.string "Wer bist du?\p"
	.string "Oh, du bist {PLAYER}, oder?\n"
	.string "Du bist der neue Nachbar?\p"
	.string "Ich wusste gar nicht, dass du ein Mädchen bist.\p"
	.string "Mein Vater, PROF. BIRK, meinte,\n"
	.string "unser neuer Nachbar sei das Kind\l"
	.string "eines ARENALEITERS. Ich dachte also,\l"
	.string "du wärst ein Junge.\p"
	.string "Ich heiße BRENDAN.\n"
	.string "Na dann, hallo Nachbarin!\p"
	.string "Hm? Hey, {PLAYER}, hast du etwa\n"
	.string "kein eigenes POKéMON?\p"
	.string "Soll ich dir eins fangen?\p"
	.string "Oh, Mist, ich hab was vergessen…\p"
	.string "Ich sollte meinem Vater helfen,\n"
	.string "wilde POKéMON zu fangen.\p"
	.string "Ein andermal, okay?$"

RivalsHouse_1F_Text_DoYouHavePokemon::
# 441 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hallo, Nachbar!\p"
	.string "Hast du schon ein\n"
	.string "eigens POKéMON?$"
