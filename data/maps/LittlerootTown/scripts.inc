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
	end


LittlerootTown_EventScript_Boy::
# 214 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 215 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 216 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab
# 217 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 218 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 219 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_MEGA_RING
# 220 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 100
# 221 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 222 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_BULBASAUR, 10, , ITEM_POKE_BALL
# 223 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_CHARMANDER, 10, , ITEM_GREAT_BALL
# 224 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_SQUIRTLE, 10, , ITEM_ULTRA_BALL
# 225 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_SWAMPERT, 10, ITEM_SWAMPERTITE, ITEM_MASTER_BALL
# 226 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_Twin::
# 239 "data/maps/LittlerootTown/scripts.pory"
	lock
# 240 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 241 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 242 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 243 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 244 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 245 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoodLuck::
# 250 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 251 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_YouSavedBirch::
# 256 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 257 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 258 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirch::
# 263 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 264 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 265 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 266 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 267 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 268 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 269 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirchTrigger::
# 274 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 275 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 276 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 277 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 278 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 279 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 280 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 281 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 282 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 283 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 284 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 285 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 292 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RESULT, 0
# 293 "data/maps/LittlerootTown/scripts.pory"
	call Handle_NeedPokemonTrigger
	return


LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 297 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RESULT, 1
# 298 "data/maps/LittlerootTown/scripts.pory"
	call Handle_NeedPokemonTrigger
	return


Handle_NeedPokemonTrigger::
# 303 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 305 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Handle_NeedPokemonTrigger_2
# 308 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinApproach_Right
Handle_NeedPokemonTrigger_1:
# 310 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 314 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Handle_NeedPokemonTrigger_6
# 317 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinReturn_Right
Handle_NeedPokemonTrigger_5:
# 319 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 321 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Handle_NeedPokemonTrigger_2:
# 306 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinApproach_Left
	goto Handle_NeedPokemonTrigger_1

Handle_NeedPokemonTrigger_6:
# 315 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinReturn_Left
	goto Handle_NeedPokemonTrigger_5


LittlerootTown_EventScript_DangerousWithoutPokemon::
# 327 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 328 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 330 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinPushPlayer
# 331 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPushBack
# 332 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 334 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 335 "data/maps/LittlerootTown/scripts.pory"
	closemessage
	return


# 339 "data/maps/LittlerootTown/scripts.pory"
TwinApproach_Left:
# 340 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 341 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 342 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 343 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 344 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 348 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 349 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 352 "data/maps/LittlerootTown/scripts.pory"
TwinApproach_Right:
# 353 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 354 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 355 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 356 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 357 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 358 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 358 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 362 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 365 "data/maps/LittlerootTown/scripts.pory"
TwinReturn_Left:
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 371 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 374 "data/maps/LittlerootTown/scripts.pory"
TwinReturn_Right:
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 379 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 382 "data/maps/LittlerootTown/scripts.pory"
TwinPushPlayer:
# 383 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 384 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 387 "data/maps/LittlerootTown/scripts.pory"
PlayerPushBack:
# 388 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 389 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 390 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 391 "data/maps/LittlerootTown/scripts.pory"
	step_end

LittlerootTown_EventScript_TownSign::
# 428 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BirchsLabSign::
# 438 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BrendansHouseSign::
# 447 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 448 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 449 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 450 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 451 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_PlayersHouseSignMale::
# 456 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_BirchsHouseSignFemale::
# 461 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_MaysHouseSign::
# 466 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 467 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 468 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 469 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 470 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_BirchsHouseSignMale::
# 475 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_PlayersHouseSignFemale::
# 480 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 494 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 495 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 496 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 4, 10, 9
# 497 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 502 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 503 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 504 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 4, 11, 9
# 505 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 510 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 511 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 512 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 517 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 518 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 519 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 524 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 525 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 526 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 531 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 532 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 533 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 538 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomNoticePlayer
# 539 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoords
# 540 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 541 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 542 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayer
# 543 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 544 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 545 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHome
# 546 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end


LittlerootTown_EventScript_SetHomeDoorCoords::
# 551 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 552 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetHomeDoorCoords_2
# 556 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 557 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
LittlerootTown_EventScript_SetHomeDoorCoords_1:
	return

LittlerootTown_EventScript_SetHomeDoorCoords_2:
# 553 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 554 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
	goto LittlerootTown_EventScript_SetHomeDoorCoords_1


LittlerootTown_EventScript_MomNoticePlayer::
# 563 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 564 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomNoticePlayer_2
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
LittlerootTown_EventScript_MomNoticePlayer_1:
# 570 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomNoticePlayer_2:
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
	goto LittlerootTown_EventScript_MomNoticePlayer_1


LittlerootTown_EventScript_MomApproachPlayer::
# 575 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomApproachPlayer_2
# 580 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 581 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomApproachPlayer_5
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 598 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayer_14
# 600 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayer_15
# 602 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayer_16
# 604 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayer_17
LittlerootTown_EventScript_MomApproachPlayer_1:
# 609 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayer_2:
# 576 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 577 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 578 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayer
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_5:
# 582 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 583 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 584 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 585 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayer_9
# 587 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayer_10
# 589 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayer_11
# 591 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayer_12
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_9:
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale2
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_10:
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale3
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_11:
# 590 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale4
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_12:
# 592 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale5
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_14:
# 599 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale2
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_15:
# 601 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale3
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_16:
# 603 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale4
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_17:
# 605 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale5
	goto LittlerootTown_EventScript_MomApproachPlayer_1


LittlerootTown_EventScript_MomReturnHome::
# 614 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomReturnHome_1
# 619 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 620 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomReturnHome_5
# 632 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 633 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 634 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 635 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHome_14
# 637 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHome_15
# 639 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHome_16
# 641 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHome_17
LittlerootTown_EventScript_MomReturnHome_4:
# 645 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 646 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 648 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitThroughDoor
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat 4, MAP_LITTLEROOT_TOWN
# 651 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return

LittlerootTown_EventScript_MomReturnHome_1:
# 615 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHome
# 616 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomReturnHome_5:
# 621 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 622 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHome_9
# 624 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHome_10
# 626 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHome_11
# 628 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHome_12
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_9:
# 623 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale2
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_10:
# 625 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale3
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_11:
# 627 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale4
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_12:
# 629 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale5
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_14:
# 636 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale2
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_15:
# 638 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale3
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_16:
# 640 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale4
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_17:
# 642 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale5
	goto LittlerootTown_EventScript_MomReturnHome_4


# 657 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer:
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 659 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 662 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 663 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 663 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 663 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 663 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 664 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 667 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 668 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 668 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 668 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 668 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 668 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 669 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 672 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 673 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 673 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 674 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 677 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 678 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 678 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 678 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 679 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 682 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 683 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 683 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 683 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 684 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 688 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 688 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 689 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 692 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 693 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 693 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 693 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 693 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 693 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 694 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 697 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 698 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 698 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 698 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 698 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 699 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 702 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome:
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 704 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 708 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 708 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 708 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 708 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 709 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 710 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 713 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 714 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 714 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 714 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 714 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 714 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 715 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 716 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 719 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 720 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 720 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 721 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 722 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 725 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 728 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 731 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 734 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 737 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 740 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 743 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 746 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 749 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 752 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 755 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 757 "data/maps/LittlerootTown/scripts.pory"
	step_end

LittlerootTown_EventScript_Mom::
# 761 "data/maps/LittlerootTown/scripts.pory"
	lock
# 762 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 763 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 764 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoords
# 765 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 766 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 767 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 768 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 769 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 770 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitThroughDoor
# 771 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 772 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat 4, MAP_LITTLEROOT_TOWN
# 773 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 774 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 775 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end


LittlerootTown_EventScript_SetReceivedRunningShoes::
# 780 "data/maps/LittlerootTown/scripts.pory"
	removeobject 4
# 781 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 782 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 783 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GiveRunningShoes::
# 788 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 789 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 790 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 791 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 792 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 793 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 794 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 795 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 796 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_Text_CanUsePCToStoreItems::
# 207 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
	.string "and POKéMON.\p"
	.string "The power of science is staggering!$"

LittlerootTown_Text_BirchSpendsDaysInLab::
# 230 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
	.string "studying, then he'll suddenly go out in\l"
	.string "the wild to do more research…\p"
	.string "When does PROF. BIRCH spend time\n"
	.string "at home?$"

LittlerootTown_Text_DangerousIfYouDontHavePokemon::
# 394 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
	.string "your own POKéMON.$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut::
# 399 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild POKéMON will jump out!$"

LittlerootTown_Text_GoodLuckCatchingPokemon::
# 405 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
	.string "Good luck!$"

LittlerootTown_Text_YouSavedBirch::
# 410 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
	.string "I'm so glad!$"

LittlerootTown_Text_CanYouGoSeeWhatsHappening::
# 415 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
	.string "There are scary POKéMON outside!\n"
	.string "I can hear their cries!\p"
	.string "I want to go see what's going on,\n"
	.string "but I don't have any POKéMON…\p"
	.string "Can you go see what's happening\n"
	.string "for me?$"

LittlerootTown_Text_TownSign::
# 432 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_Text_ProfBirchsLab::
# 442 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"

LittlerootTown_Text_PlayersHouse::
# 484 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

LittlerootTown_Text_ProfBirchsHouse::
# 488 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"

LittlerootTown_Text_WaitPlayer::
# 800 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"

LittlerootTown_Text_WearTheseRunningShoes::
# 804 "data/maps/LittlerootTown/scripts.pory"
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
# 816 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

LittlerootTown_Text_ExplainRunningShoes::
# 821 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
	.string "instructions.\p"
	.string "“Press the B Button while wearing these\n"
	.string "RUNNING SHOES to run extra-fast!\p"
	.string "“Slip on these RUNNING SHOES and race\n"
	.string "in the great outdoors!”$"

LittlerootTown_Text_ComeHomeIfAnythingHappens::
# 830 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "To think that you have your very own\n"
	.string "POKéMON now…\l"
	.string "Your father will be overjoyed.\p"
	.string "…But please be careful.\n"
	.string "If anything happens, you can come home.\p"
	.string "Go on, go get them, honey!$"

LittlerootTown_Text_BirchSomethingToShowYouAtLab::
# 841 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
	.string "That was good work out there!\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you,\l"
	.string "but I never expected this.\p"
	.string "Oh, yes. Do you still have the POKéDEX\n"
	.string "I gave you?\p"
	.string "I have something to show you.\n"
	.string "Let's go to my LAB.$"
