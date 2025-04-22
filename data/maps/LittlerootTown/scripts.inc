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
# 215 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 216 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 217 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab
# 218 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 219 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 220 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_MEGA_RING
# 221 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 100
# 222 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 223 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_BULBASAUR, 10, , ITEM_POKE_BALL
# 224 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_CHARMANDER, 10, , ITEM_GREAT_BALL
# 225 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_SQUIRTLE, 10, , ITEM_ULTRA_BALL
# 226 "data/maps/LittlerootTown/scripts.pory"
	givemon SPECIES_SWAMPERT, 10, ITEM_SWAMPERTITE, ITEM_MASTER_BALL
# 227 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_Twin::
# 240 "data/maps/LittlerootTown/scripts.pory"
	lock
# 241 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 242 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 243 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 244 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 245 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 246 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoodLuck::
# 251 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 252 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_YouSavedBirch::
# 257 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 258 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 259 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirch::
# 264 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 265 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 266 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 267 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 268 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 269 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 270 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirchTrigger::
# 275 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 276 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 277 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 279 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 281 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 283 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 284 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 285 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 286 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 293 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RESULT, 0
# 294 "data/maps/LittlerootTown/scripts.pory"
	call Handle_NeedPokemonTrigger
	return


LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 298 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RESULT, 1
# 299 "data/maps/LittlerootTown/scripts.pory"
	call Handle_NeedPokemonTrigger
	return


Handle_NeedPokemonTrigger::
# 304 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 306 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Handle_NeedPokemonTrigger_2
# 309 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinApproach_Right
Handle_NeedPokemonTrigger_1:
# 311 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 313 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 315 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Handle_NeedPokemonTrigger_6
# 318 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinReturn_Right
Handle_NeedPokemonTrigger_5:
# 320 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 322 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Handle_NeedPokemonTrigger_2:
# 307 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinApproach_Left
	goto Handle_NeedPokemonTrigger_1

Handle_NeedPokemonTrigger_6:
# 316 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinReturn_Left
	goto Handle_NeedPokemonTrigger_5


LittlerootTown_EventScript_DangerousWithoutPokemon::
# 328 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 329 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 331 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinPushPlayer
# 332 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPushBack
# 333 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 335 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 336 "data/maps/LittlerootTown/scripts.pory"
	closemessage
	return


# 340 "data/maps/LittlerootTown/scripts.pory"
TwinApproach_Left:
# 341 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 342 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 343 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 344 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 345 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 349 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 350 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 353 "data/maps/LittlerootTown/scripts.pory"
TwinApproach_Right:
# 354 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 355 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 356 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 357 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 358 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 359 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 362 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 363 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 366 "data/maps/LittlerootTown/scripts.pory"
TwinReturn_Left:
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 372 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 375 "data/maps/LittlerootTown/scripts.pory"
TwinReturn_Right:
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 380 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 383 "data/maps/LittlerootTown/scripts.pory"
TwinPushPlayer:
# 384 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 385 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 388 "data/maps/LittlerootTown/scripts.pory"
PlayerPushBack:
# 389 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 390 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 391 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 392 "data/maps/LittlerootTown/scripts.pory"
	step_end

LittlerootTown_EventScript_TownSign::
# 429 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BirchsLabSign::
# 439 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BrendansHouseSign::
# 448 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 449 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 450 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 451 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 452 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_PlayersHouseSignMale::
# 457 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_BirchsHouseSignFemale::
# 462 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_MaysHouseSign::
# 467 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 468 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 469 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 470 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 471 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_BirchsHouseSignMale::
# 476 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_PlayersHouseSignFemale::
# 481 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 495 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 496 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 497 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 4, 10, 9
# 498 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 503 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 504 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 505 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 4, 11, 9
# 506 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 511 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 512 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 513 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 518 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 519 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 520 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 525 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 526 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 527 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 532 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 533 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 534 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 539 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomNoticePlayer
# 540 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoords
# 541 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 542 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 543 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayer
# 544 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 545 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 546 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHome
# 547 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end


LittlerootTown_EventScript_SetHomeDoorCoords::
# 552 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 553 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetHomeDoorCoords_2
# 557 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 558 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
LittlerootTown_EventScript_SetHomeDoorCoords_1:
	return

LittlerootTown_EventScript_SetHomeDoorCoords_2:
# 554 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 555 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
	goto LittlerootTown_EventScript_SetHomeDoorCoords_1


LittlerootTown_EventScript_MomNoticePlayer::
# 564 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 565 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomNoticePlayer_2
# 568 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
LittlerootTown_EventScript_MomNoticePlayer_1:
# 571 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomNoticePlayer_2:
# 566 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
	goto LittlerootTown_EventScript_MomNoticePlayer_1


LittlerootTown_EventScript_MomApproachPlayer::
# 576 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomApproachPlayer_2
# 581 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 582 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomApproachPlayer_5
# 596 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 597 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 598 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 599 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayer_14
# 601 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayer_15
# 603 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayer_16
# 605 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayer_17
LittlerootTown_EventScript_MomApproachPlayer_1:
# 610 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayer_2:
# 577 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 578 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayer
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_5:
# 583 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 584 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 585 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 586 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayer_9
# 588 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayer_10
# 590 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayer_11
# 592 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayer_12
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_9:
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale2
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_10:
# 589 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale3
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_11:
# 591 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale4
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_12:
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale5
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_14:
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale2
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_15:
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale3
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_16:
# 604 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale4
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_17:
# 606 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale5
	goto LittlerootTown_EventScript_MomApproachPlayer_1


LittlerootTown_EventScript_MomReturnHome::
# 615 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomReturnHome_1
# 620 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 621 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomReturnHome_5
# 633 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 634 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 635 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 636 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHome_14
# 638 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHome_15
# 640 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHome_16
# 642 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHome_17
LittlerootTown_EventScript_MomReturnHome_4:
# 646 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 649 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitThroughDoor
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat 4, MAP_LITTLEROOT_TOWN
# 652 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 653 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return

LittlerootTown_EventScript_MomReturnHome_1:
# 616 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHome
# 617 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomReturnHome_5:
# 622 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 623 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHome_9
# 625 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHome_10
# 627 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHome_11
# 629 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHome_12
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_9:
# 624 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale2
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_10:
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale3
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_11:
# 628 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale4
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_12:
# 630 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale5
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_14:
# 637 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale2
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_15:
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale3
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_16:
# 641 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale4
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_17:
# 643 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale5
	goto LittlerootTown_EventScript_MomReturnHome_4


# 658 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer:
# 659 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 659 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 659 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 659 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 659 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 659 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 660 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 663 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 664 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 664 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 664 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 664 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 665 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 668 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 669 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 669 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 669 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 669 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 669 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 670 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 673 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 674 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 674 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 675 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 678 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 679 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 679 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 679 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 680 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 683 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 684 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 684 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 684 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 685 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 688 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 689 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 689 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 690 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 693 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 694 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 694 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 694 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 694 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 694 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 695 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 698 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 699 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 699 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 699 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 699 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 700 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 703 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome:
# 704 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 704 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 704 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 704 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 704 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 705 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 708 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 709 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 709 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 709 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 709 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 710 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 711 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 714 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 715 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 715 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 715 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 715 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 715 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 716 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 717 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 720 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 721 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 721 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 722 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 723 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 726 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 729 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 732 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 735 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 738 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 741 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 744 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 747 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 750 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 753 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 758 "data/maps/LittlerootTown/scripts.pory"
	step_end

LittlerootTown_EventScript_Mom::
# 762 "data/maps/LittlerootTown/scripts.pory"
	lock
# 763 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 764 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 765 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoords
# 766 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 767 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 769 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 770 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 771 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitThroughDoor
# 772 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 773 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat 4, MAP_LITTLEROOT_TOWN
# 774 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 775 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 776 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end


LittlerootTown_EventScript_SetReceivedRunningShoes::
# 781 "data/maps/LittlerootTown/scripts.pory"
	removeobject 4
# 782 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 783 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 784 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GiveRunningShoes::
# 789 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 790 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 791 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 793 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 794 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 795 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 796 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 797 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_Text_CanUsePCToStoreItems::
# 207 "data/maps/LittlerootTown/scripts.pory"
	.string "Wenn du einen PC benutzt, kannst du\n"
	.string "Items und POKéMON lagern.\p"
	.string "Die Wissenschaft macht unglaubliche\n"
	.string "Fortschritte!$"

LittlerootTown_Text_BirchSpendsDaysInLab::
# 231 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRK verbringt den ganzen Tag\n"
	.string "im LABOR mit seinen Studien und geht\l"
	.string "plötzlich in die freie Natur, um weiter\n"
	.string "zu forschen…\p"
	.string "Wann ist PROF. BIRK denn mal zu Hause?$"

LittlerootTown_Text_DangerousIfYouDontHavePokemon::
# 395 "data/maps/LittlerootTown/scripts.pory"
	.string "Es ist gefährlich, wenn du keine\n"
	.string "eigenen POKéMON hast.$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut::
# 400 "data/maps/LittlerootTown/scripts.pory"
	.string "Ähm, ähm, ähm!\p"
	.string "Wenn du rausgehst und ins hohe Gras\n"
	.string "gehst, springen wilde POKéMON heraus!$"

LittlerootTown_Text_GoodLuckCatchingPokemon::
# 406 "data/maps/LittlerootTown/scripts.pory"
	.string "Willst du POKéMON fangen?\n"
	.string "Viel Glück!$"

LittlerootTown_Text_YouSavedBirch::
# 411 "data/maps/LittlerootTown/scripts.pory"
	.string "Du hast PROF. BIRK gerettet!\n"
	.string "Ich bin so froh!$"

LittlerootTown_Text_CanYouGoSeeWhatsHappening::
# 416 "data/maps/LittlerootTown/scripts.pory"
	.string "Ähm, hallo!\p"
	.string "Draußen sind unheimliche POKéMON!\n"
	.string "Ich kann ihre Schreie hören!\p"
	.string "Ich möchte nachsehen, was da los ist,\n"
	.string "aber ich habe keine POKéMON…\p"
	.string "Kannst du für mich nachsehen,\n"
	.string "was dort passiert?$"

LittlerootTown_Text_TownSign::
# 433 "data/maps/LittlerootTown/scripts.pory"
	.string "WURZELHEIM\n"
	.string "Ein Ort, der keinen Schatten kennt.$"

LittlerootTown_Text_ProfBirchsLab::
# 443 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON-LABOR von PROF. BIRK$"

LittlerootTown_Text_PlayersHouse::
# 485 "data/maps/LittlerootTown/scripts.pory"
	.string "Haus von {PLAYER}$"

LittlerootTown_Text_ProfBirchsHouse::
# 489 "data/maps/LittlerootTown/scripts.pory"
	.string "Haus von PROF. BIRK$"

LittlerootTown_Text_WaitPlayer::
# 801 "data/maps/LittlerootTown/scripts.pory"
	.string "MAMA: Warte, {PLAYER}!$"

LittlerootTown_Text_WearTheseRunningShoes::
# 805 "data/maps/LittlerootTown/scripts.pory"
	.string "MAMA: {PLAYER}! {PLAYER}! Hast du dich\n"
	.string "PROF. BIRK vorgestellt?\p"
	.string "Oh! Was für ein niedliches POKéMON!\n"
	.string "Du hast es von PROF. BIRK bekommen.\p"
	.string "Wie nett! Du bist ganz das Kind deines\n"
	.string "Vaters. Du und das POKéMON, ihr passt\n"
	.string "wirklich gut zusammen!\p"
	.string "Hier, mein Schatz! Wenn du draußen\n"
	.string "unterwegs bist, trag diese LAUFSCHUHE.\p"
	.string "Damit bist du viel flotter unterwegs!$"

LittlerootTown_Text_SwitchShoesWithRunningShoes::
# 818 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} tauschte die Schuhe gegen die\n"
	.string "LAUFSCHUHE aus.$"

LittlerootTown_Text_ExplainRunningShoes::
# 823 "data/maps/LittlerootTown/scripts.pory"
	.string "MAMA: {PLAYER}, zu diesen Schuhen\n"
	.string "gab es eine Anleitung.\p"
	.string "Halte während des Laufens den B-Knopf\n"
	.string "gedrückt, um zu rennen.\p"
	.string "Zieh die LAUFSCHUHE an und lauf los\n"
	.string "in die große, weite Welt!“$"

LittlerootTown_Text_ComeHomeIfAnythingHappens::
# 832 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Kaum zu glauben, dass du jetzt dein\n"
	.string "ganz eigenes POKéMON hast…\l"
	.string "Dein Vater wird überglücklich sein.\p"
	.string "…Aber sei bitte vorsichtig.\n"
	.string "Wenn etwas ist, kannst du immer nach\n"
	.string "Hause kommen.\p"
	.string "Los, zeig allen, was du drauf hast,\n"
	.string "mein Schatz!$"

LittlerootTown_Text_BirchSomethingToShowYouAtLab::
# 845 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRK: Na, na, {PLAYER}{KUN}!\n"
	.string "Das war gute Arbeit da draußen!\p"
	.string "Ich wusste schon beim ersten Anblick,\n"
	.string "dass du etwas Besonderes bist.\p"
	.string "Aber dass du das so gut meisterst,\n"
	.string "hätte ich nicht erwartet.\p"
	.string "Ach ja… Hast du noch den POKéDEX,\n"
	.string "den ich dir gegeben habe?\p"
	.string "Ich möchte dir etwas zeigen.\n"
	.string "Lass uns in mein LABOR gehen.$"
