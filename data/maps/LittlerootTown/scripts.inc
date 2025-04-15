LittlerootTown_MapScripts::
# 13 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 49 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 53 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_VISITED_LITTLEROOT_TOWN, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 25 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 26 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 28 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 2
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 30 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 32 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 3
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 34 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 36 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 38 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_OLDALE_RIVAL_STATE, 1
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 40 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 42 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 44 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
	end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 17 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 18 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 21 "data/maps/LittlerootTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 28 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MoveMomToMaysDoor
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/LittlerootTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 30 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetTwinPos
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 32 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 34 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 36 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_19

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 38 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MoveRivalFromOldale
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 40 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetRivalLeftForRoute103
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 42 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_HideMapNamePopup
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 44 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_LeftLabAfterDexUpgrade
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 50 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
	.2byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 54 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
	.2byte 0


LittlerootTown_EventScript_BeginDexUpgradeScene::
# 89 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 90 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 91 "data/maps/LittlerootTown/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 92 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 94 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 95 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 96 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 97 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 98 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 99 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 100 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 101 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 102 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 107 "data/maps/LittlerootTown/scripts.pory"
	addobject 6
# 108 "data/maps/LittlerootTown/scripts.pory"
	addobject 5
# 109 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 110 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_2
# 113 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_1:
	end

LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_2:
# 111 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade_1


LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 119 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 5, 6, 10
# 120 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 6, 5, 10
	end


LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 125 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 5, 13, 10
# 126 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 6, 14, 10
	end


LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 131 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
	return


LittlerootTown_EventScript_HideMapNamePopup::
# 136 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 141 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
	return


LittlerootTown_EventScript_MoveRivalFromOldale::
# 146 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 147 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	return


LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 152 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 153 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
	return


LittlerootTown_EventScript_MoveMomToMaysDoor::
# 158 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 14, 8
	return


LittlerootTown_EventScript_SetTwinPos::
# 163 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_eq LittlerootTown_EventScript_SetTwinPos_2
LittlerootTown_EventScript_SetTwinPos_1:
# 167 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 1, 10, 1
# 168 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_EventScript_SetTwinPos_2:
# 164 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_SetTwinGuardingRoutePos
	goto LittlerootTown_EventScript_SetTwinPos_1


LittlerootTown_SetTwinGuardingRoutePos::
# 173 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 1, 7, 2
# 174 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 179 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 180 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 182 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 183 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_2
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_1:
# 186 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_5
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_4:
	return

LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_2:
# 184 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_SetMomInFrontOfDoorMale
	goto LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_1

LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_5:
# 187 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_SetMomInFrontOfDoorFemale
	goto LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos_4


LittlerootTown_SetMomInFrontOfDoorMale::
# 193 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 5, 9
	return


LittlerootTown_SetMomInFrontOfDoorFemale::
# 198 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm 4, 14, 9
	return


LittlerootTown_EventScript_FatMan::
# 203 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 204 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set B_FLAG_FOLLOWERS_DISABLED, LittlerootTown_EventScript_FatMan_2
# 207 "data/maps/LittlerootTown/scripts.pory"
	setflag B_FLAG_FOLLOWERS_DISABLED
LittlerootTown_EventScript_FatMan_1:
	end

LittlerootTown_EventScript_FatMan_2:
# 205 "data/maps/LittlerootTown/scripts.pory"
	clearflag B_FLAG_FOLLOWERS_DISABLED
	goto LittlerootTown_EventScript_FatMan_1


LittlerootTown_EventScript_Boy::
# 218 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 219 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_MEGA_RING
# 220 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 100
# 221 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 222 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_SWAMPERT, 10, ITEM_SWAMPERTITE, ITEM_MASTER_BALL
# 223 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_RAYQUAZA, 10, , ITEM_MASTER_BALL
	end


LittlerootTown_EventScript_Twin::
# 236 "data/maps/LittlerootTown/scripts.pory"
	lock
# 237 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 238 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 239 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 240 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 241 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 242 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoodLuck::
# 247 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 248 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_YouSavedBirch::
# 253 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 254 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 255 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirch::
# 260 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 261 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 262 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 263 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 264 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 265 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 266 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirchTrigger::
# 271 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 272 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 273 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 274 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 275 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 277 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 278 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 279 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 280 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 281 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 282 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 289 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RESULT, 0
# 290 "data/maps/LittlerootTown/scripts.pory"
	call Handle_NeedPokemonTrigger
	return


LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 294 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RESULT, 1
# 295 "data/maps/LittlerootTown/scripts.pory"
	call Handle_NeedPokemonTrigger
	return


Handle_NeedPokemonTrigger::
# 300 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 302 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Handle_NeedPokemonTrigger_2
# 305 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinApproach_Right
Handle_NeedPokemonTrigger_1:
# 307 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 311 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Handle_NeedPokemonTrigger_6
# 314 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinReturn_Right
Handle_NeedPokemonTrigger_5:
# 316 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 318 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Handle_NeedPokemonTrigger_2:
# 303 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinApproach_Left
	goto Handle_NeedPokemonTrigger_1

Handle_NeedPokemonTrigger_6:
# 312 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinReturn_Left
	goto Handle_NeedPokemonTrigger_5


LittlerootTown_EventScript_DangerousWithoutPokemon::
# 324 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 325 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 327 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinPushPlayer
# 328 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPushBack
# 329 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 331 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 332 "data/maps/LittlerootTown/scripts.pory"
	closemessage
	return


# 336 "data/maps/LittlerootTown/scripts.pory"
TwinApproach_Left:
# 337 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 338 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 339 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 340 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 341 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 345 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 346 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 349 "data/maps/LittlerootTown/scripts.pory"
TwinApproach_Right:
# 350 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 351 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 352 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 353 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 354 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 355 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 355 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 355 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 357 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 359 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 362 "data/maps/LittlerootTown/scripts.pory"
TwinReturn_Left:
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 368 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 371 "data/maps/LittlerootTown/scripts.pory"
TwinReturn_Right:
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 376 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 379 "data/maps/LittlerootTown/scripts.pory"
TwinPushPlayer:
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 381 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 384 "data/maps/LittlerootTown/scripts.pory"
PlayerPushBack:
# 385 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 386 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 387 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 388 "data/maps/LittlerootTown/scripts.pory"
	step_end

LittlerootTown_EventScript_TownSign::
# 425 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BirchsLabSign::
# 435 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BrendansHouseSign::
# 444 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 445 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 446 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 447 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 448 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_PlayersHouseSignMale::
# 453 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_BirchsHouseSignFemale::
# 458 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_MaysHouseSign::
# 463 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 464 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 465 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 466 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 467 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_BirchsHouseSignMale::
# 472 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_PlayersHouseSignFemale::
# 477 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 491 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 492 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 493 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 4, 10, 9
# 494 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 499 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 500 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 501 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 4, 11, 9
# 502 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 507 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 508 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 509 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 514 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 515 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 516 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 521 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 522 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 523 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 528 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 529 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 530 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 535 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomNoticePlayer
# 536 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoords
# 537 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 538 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 539 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayer
# 540 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 541 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 542 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHome
# 543 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end


LittlerootTown_EventScript_SetHomeDoorCoords::
# 548 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 549 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetHomeDoorCoords_2
# 553 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 554 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
LittlerootTown_EventScript_SetHomeDoorCoords_1:
	return

LittlerootTown_EventScript_SetHomeDoorCoords_2:
# 550 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 551 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
	goto LittlerootTown_EventScript_SetHomeDoorCoords_1


LittlerootTown_EventScript_MomNoticePlayer::
# 560 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 561 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomNoticePlayer_2
# 564 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
LittlerootTown_EventScript_MomNoticePlayer_1:
# 567 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomNoticePlayer_2:
# 562 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
	goto LittlerootTown_EventScript_MomNoticePlayer_1


LittlerootTown_EventScript_MomApproachPlayer::
# 572 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomApproachPlayer_2
# 577 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 578 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomApproachPlayer_5
# 592 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 593 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 595 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayer_14
# 597 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayer_15
# 599 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayer_16
# 601 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayer_17
LittlerootTown_EventScript_MomApproachPlayer_1:
# 606 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayer_2:
# 573 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 575 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayer
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_5:
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 582 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayer_9
# 584 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayer_10
# 586 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayer_11
# 588 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayer_12
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_9:
# 583 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale2
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_10:
# 585 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale3
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_11:
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale4
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_12:
# 589 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale5
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_14:
# 596 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale2
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_15:
# 598 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale3
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_16:
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale4
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_17:
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale5
	goto LittlerootTown_EventScript_MomApproachPlayer_1


LittlerootTown_EventScript_MomReturnHome::
# 611 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomReturnHome_1
# 616 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 617 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomReturnHome_5
# 629 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 630 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 631 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 632 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHome_14
# 634 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHome_15
# 636 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHome_16
# 638 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHome_17
LittlerootTown_EventScript_MomReturnHome_4:
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 645 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitThroughDoor
# 646 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat 4, MAP_LITTLEROOT_TOWN
# 648 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return

LittlerootTown_EventScript_MomReturnHome_1:
# 612 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHome
# 613 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomReturnHome_5:
# 618 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 619 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHome_9
# 621 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHome_10
# 623 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHome_11
# 625 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHome_12
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_9:
# 620 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale2
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_10:
# 622 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale3
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_11:
# 624 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale4
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_12:
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale5
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_14:
# 633 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale2
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_15:
# 635 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale3
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_16:
# 637 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale4
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_17:
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale5
	goto LittlerootTown_EventScript_MomReturnHome_4


# 654 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer:
# 655 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 655 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 655 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 655 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 655 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 655 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 656 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 661 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 664 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 666 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 669 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 671 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 674 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 675 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 675 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 675 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 676 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 679 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 681 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 684 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 685 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 685 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 686 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 689 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 691 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 696 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 699 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome:
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 701 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 704 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 706 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 707 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 710 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 712 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 713 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 716 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 717 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 717 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 718 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 719 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 722 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 723 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 723 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 723 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 724 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 725 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 728 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 730 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 731 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 734 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 737 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 740 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 743 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 746 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 748 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 749 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 752 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 754 "data/maps/LittlerootTown/scripts.pory"
	step_end

LittlerootTown_EventScript_Mom::
# 758 "data/maps/LittlerootTown/scripts.pory"
	lock
# 759 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 760 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 761 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoords
# 762 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 763 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 764 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 765 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 766 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 767 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitThroughDoor
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 769 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat 4, MAP_LITTLEROOT_TOWN
# 770 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 771 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 772 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end


LittlerootTown_EventScript_SetReceivedRunningShoes::
# 777 "data/maps/LittlerootTown/scripts.pory"
	removeobject 4
# 778 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 779 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 780 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GiveRunningShoes::
# 785 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 786 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 787 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 788 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 789 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 790 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 791 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 792 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 793 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_Text_CanUsePCToStoreItems::
# 211 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
	.string "and POKéMON.\p"
	.string "The power of science is staggering!$"

LittlerootTown_Text_BirchSpendsDaysInLab::
# 227 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
	.string "studying, then he'll suddenly go out in\l"
	.string "the wild to do more research…\p"
	.string "When does PROF. BIRCH spend time\n"
	.string "at home?$"

LittlerootTown_Text_DangerousIfYouDontHavePokemon::
# 391 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
	.string "your own POKéMON.$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut::
# 396 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild POKéMON will jump out!$"

LittlerootTown_Text_GoodLuckCatchingPokemon::
# 402 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
	.string "Good luck!$"

LittlerootTown_Text_YouSavedBirch::
# 407 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
	.string "I'm so glad!$"

LittlerootTown_Text_CanYouGoSeeWhatsHappening::
# 412 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
	.string "There are scary POKéMON outside!\n"
	.string "I can hear their cries!\p"
	.string "I want to go see what's going on,\n"
	.string "but I don't have any POKéMON…\p"
	.string "Can you go see what's happening\n"
	.string "for me?$"

LittlerootTown_Text_TownSign::
# 429 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_Text_ProfBirchsLab::
# 439 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"

LittlerootTown_Text_PlayersHouse::
# 481 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

LittlerootTown_Text_ProfBirchsHouse::
# 485 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"

LittlerootTown_Text_WaitPlayer::
# 797 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"

LittlerootTown_Text_WearTheseRunningShoes::
# 801 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
	.string "introduce yourself to PROF. BIRCH?\p"
	.string "Oh! What an adorable POKéMON!\n"
	.string "You got it from PROF. BIRCH. How nice!\p"
	.string "You're your father's child, all right.\n"
	.string "You look good together with POKéMON!\p"
	.string "Here, honey! If you're going out on an\n"
	.string "adventure, wear these RUNNING SHOES.\p"
	.string "They'll put a zip in your step!$"

LittlerootTown_Text_SwitchShoesWithRunningShoes::
# 813 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

LittlerootTown_Text_ExplainRunningShoes::
# 818 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
	.string "instructions.\p"
	.string "“Press the B Button while wearing these\n"
	.string "RUNNING SHOES to run extra-fast!\p"
	.string "“Slip on these RUNNING SHOES and race\n"
	.string "in the great outdoors!”$"

LittlerootTown_Text_ComeHomeIfAnythingHappens::
# 827 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "To think that you have your very own\n"
	.string "POKéMON now…\l"
	.string "Your father will be overjoyed.\p"
	.string "…But please be careful.\n"
	.string "If anything happens, you can come home.\p"
	.string "Go on, go get them, honey!$"

LittlerootTown_Text_BirchSomethingToShowYouAtLab::
# 838 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
	.string "That was good work out there!\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you,\l"
	.string "but I never expected this.\p"
	.string "Oh, yes. Do you still have the POKéDEX\n"
	.string "I gave you?\p"
	.string "I have something to show you.\n"
	.string "Let's go to my LAB.$"
