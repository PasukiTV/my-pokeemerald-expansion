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
# 241 "data/maps/LittlerootTown/scripts.pory"
	lock
# 242 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 243 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 244 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 245 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 246 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 247 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoodLuck::
# 252 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 253 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_YouSavedBirch::
# 258 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 259 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 260 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirch::
# 265 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 266 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 267 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 268 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 269 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 270 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 271 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GoSaveBirchTrigger::
# 276 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 277 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 278 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 279 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 280 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 281 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 282 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 283 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 284 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 285 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 286 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 287 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 294 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RESULT, 0
# 295 "data/maps/LittlerootTown/scripts.pory"
	call Handle_NeedPokemonTrigger
	return


LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 299 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RESULT, 1
# 300 "data/maps/LittlerootTown/scripts.pory"
	call Handle_NeedPokemonTrigger
	return


Handle_NeedPokemonTrigger::
# 305 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 307 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Handle_NeedPokemonTrigger_2
# 310 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinApproach_Right
Handle_NeedPokemonTrigger_1:
# 312 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 314 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 316 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Handle_NeedPokemonTrigger_6
# 319 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinReturn_Right
Handle_NeedPokemonTrigger_5:
# 321 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 323 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Handle_NeedPokemonTrigger_2:
# 308 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinApproach_Left
	goto Handle_NeedPokemonTrigger_1

Handle_NeedPokemonTrigger_6:
# 317 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinReturn_Left
	goto Handle_NeedPokemonTrigger_5


LittlerootTown_EventScript_DangerousWithoutPokemon::
# 329 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 330 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 332 "data/maps/LittlerootTown/scripts.pory"
	applymovement 1, TwinPushPlayer
# 333 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPushBack
# 334 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 336 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 337 "data/maps/LittlerootTown/scripts.pory"
	closemessage
	return


# 341 "data/maps/LittlerootTown/scripts.pory"
TwinApproach_Left:
# 342 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 343 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 344 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 345 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 346 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 350 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 351 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 354 "data/maps/LittlerootTown/scripts.pory"
TwinApproach_Right:
# 355 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 356 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 357 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 358 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 359 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 363 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 364 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 367 "data/maps/LittlerootTown/scripts.pory"
TwinReturn_Left:
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 373 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 376 "data/maps/LittlerootTown/scripts.pory"
TwinReturn_Right:
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 381 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 384 "data/maps/LittlerootTown/scripts.pory"
TwinPushPlayer:
# 385 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 386 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 389 "data/maps/LittlerootTown/scripts.pory"
PlayerPushBack:
# 390 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 391 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 392 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 393 "data/maps/LittlerootTown/scripts.pory"
	step_end

LittlerootTown_EventScript_TownSign::
# 430 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BirchsLabSign::
# 440 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BrendansHouseSign::
# 449 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 450 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 451 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 452 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 453 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_PlayersHouseSignMale::
# 458 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_BirchsHouseSignFemale::
# 463 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_MaysHouseSign::
# 468 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 469 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 470 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 471 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 472 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_BirchsHouseSignMale::
# 477 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_PlayersHouseSignFemale::
# 482 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return


LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 496 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 497 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 498 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 4, 10, 9
# 499 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 504 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 505 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 506 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy 4, 11, 9
# 507 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 512 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 513 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 514 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 519 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 520 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 521 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 526 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 527 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 528 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 533 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 534 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 535 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 540 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomNoticePlayer
# 541 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoords
# 542 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 543 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 544 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayer
# 545 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 546 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 547 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHome
# 548 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end


LittlerootTown_EventScript_SetHomeDoorCoords::
# 553 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 554 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_SetHomeDoorCoords_2
# 558 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 559 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
LittlerootTown_EventScript_SetHomeDoorCoords_1:
	return

LittlerootTown_EventScript_SetHomeDoorCoords_2:
# 555 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 556 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
	goto LittlerootTown_EventScript_SetHomeDoorCoords_1


LittlerootTown_EventScript_MomNoticePlayer::
# 565 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 566 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomNoticePlayer_2
# 569 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
LittlerootTown_EventScript_MomNoticePlayer_1:
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomNoticePlayer_2:
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
	goto LittlerootTown_EventScript_MomNoticePlayer_1


LittlerootTown_EventScript_MomApproachPlayer::
# 577 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomApproachPlayer_2
# 582 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 583 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomApproachPlayer_5
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 600 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayer_14
# 602 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayer_15
# 604 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayer_16
# 606 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayer_17
LittlerootTown_EventScript_MomApproachPlayer_1:
# 611 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayer_2:
# 578 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 579 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 580 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayer
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_5:
# 584 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 585 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 586 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 587 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayer_9
# 589 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayer_10
# 591 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayer_11
# 593 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayer_12
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_9:
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale2
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_10:
# 590 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale3
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_11:
# 592 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale4
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_12:
# 594 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerMale5
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_14:
# 601 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale2
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_15:
# 603 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale3
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_16:
# 605 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale4
	goto LittlerootTown_EventScript_MomApproachPlayer_1

LittlerootTown_EventScript_MomApproachPlayer_17:
# 607 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomApproachPlayerFemale5
	goto LittlerootTown_EventScript_MomApproachPlayer_1


LittlerootTown_EventScript_MomReturnHome::
# 616 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomReturnHome_1
# 621 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 622 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_MomReturnHome_5
# 634 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 637 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHome_14
# 639 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHome_15
# 641 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHome_16
# 643 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHome_17
LittlerootTown_EventScript_MomReturnHome_4:
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 648 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 650 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitThroughDoor
# 651 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 652 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat 4, MAP_LITTLEROOT_TOWN
# 653 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return

LittlerootTown_EventScript_MomReturnHome_1:
# 617 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHome
# 618 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomReturnHome_5:
# 623 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 624 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHome_9
# 626 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHome_10
# 628 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHome_11
# 630 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHome_12
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_9:
# 625 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale2
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_10:
# 627 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale3
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_11:
# 629 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale4
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_12:
# 631 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeMale5
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_14:
# 638 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale2
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_15:
# 640 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale3
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_16:
# 642 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale4
	goto LittlerootTown_EventScript_MomReturnHome_4

LittlerootTown_EventScript_MomReturnHome_17:
# 644 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomReturnHomeFemale5
	goto LittlerootTown_EventScript_MomReturnHome_4


# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer:
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 661 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 664 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
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
LittlerootTown_Movement_MomApproachPlayerMale3:
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 671 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 674 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 675 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 675 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 676 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 679 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 681 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 684 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 685 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 685 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 685 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 686 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 689 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 691 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_left
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
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 701 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 704 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome:
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 705 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 706 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 709 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 710 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 710 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 710 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 710 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 711 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 712 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 715 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 716 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 716 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 716 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 716 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 716 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 717 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 718 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 721 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 722 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 722 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 723 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 724 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 727 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 730 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 733 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 736 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 739 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 742 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 745 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 747 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 748 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 751 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 754 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 757 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 759 "data/maps/LittlerootTown/scripts.pory"
	step_end

LittlerootTown_EventScript_Mom::
# 763 "data/maps/LittlerootTown/scripts.pory"
	lock
# 764 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 765 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 766 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoords
# 767 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 768 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 769 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 770 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 771 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 772 "data/maps/LittlerootTown/scripts.pory"
	applymovement 4, LittlerootTown_Movement_MomExitThroughDoor
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 774 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat 4, MAP_LITTLEROOT_TOWN
# 775 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 776 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 777 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end


LittlerootTown_EventScript_SetReceivedRunningShoes::
# 782 "data/maps/LittlerootTown/scripts.pory"
	removeobject 4
# 783 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 784 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 785 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_GiveRunningShoes::
# 790 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 791 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 792 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 793 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 794 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 795 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 796 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 797 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 798 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_Text_CanUsePCToStoreItems::
# 207 "data/maps/LittlerootTown/scripts.pory"
	.string "Wenn du einen PC benutzt, kannst du\n"
	.string "dort Items und POKéMON lagern.\p"
	.string "Die Kraft der Wissenschaft ist\n"
	.string "atemberaubend$"

LittlerootTown_Text_BirchSpendsDaysInLab::
# 231 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRK verbringt seine Tage in\n"
	.string "seinem LABOR, dann rennt er plötzlich\l"
	.string "nach draußen in die Wildnis, um zu\l"
	.string "forschen…\p"
	.string "Wann ist PROF.BIRK eigentlich mal\n"
	.string "zu Hause?$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut::
# 396 "data/maps/LittlerootTown/scripts.pory"
	.string "Äh, ähm, ähm!\p Wenn du durch das hohe Gras läufst,\n wirst du wilde POKéMON entdecken.$"

LittlerootTown_Text_DangerousIfYouDontHavePokemon::
# 402 "data/maps/LittlerootTown/scripts.pory"
	.string "Das ist gefährlich, wenn du kein eigenens\n"
	.string "POKéMON dabei hast.$"

LittlerootTown_Text_GoodLuckCatchingPokemon::
# 407 "data/maps/LittlerootTown/scripts.pory"
	.string "Willst du POKéMON fangen?\n"
	.string "Viel Glück!$"

LittlerootTown_Text_YouSavedBirch::
# 412 "data/maps/LittlerootTown/scripts.pory"
	.string "Du hast PROF. BIRK gerettet!\n"
	.string "Ich bin so froh!$"

LittlerootTown_Text_CanYouGoSeeWhatsHappening::
# 417 "data/maps/LittlerootTown/scripts.pory"
	.string "Ähm, hallo!\p"
	.string "Draußen sind unheimliche POKéMON!\n"
	.string "Ich kann ihre Schreie hören!\p"
	.string "Ich möchte nachsehen, was da los ist,\n"
	.string "aber ich habe keine POKéMON…\p"
	.string "Kannst du für mich nachsehen,\n"
	.string "was dort passiert?$"

LittlerootTown_Text_TownSign::
# 434 "data/maps/LittlerootTown/scripts.pory"
	.string "WURZELHEIM\n"
	.string "Ein Ort, wie es ihn nur einmal gibt.$"

LittlerootTown_Text_ProfBirchsLab::
# 444 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRK POKéMON-LABOR$"

LittlerootTown_Text_PlayersHouse::
# 486 "data/maps/LittlerootTown/scripts.pory"
	.string "Haus von {PLAYER}$"

LittlerootTown_Text_ProfBirchsHouse::
# 490 "data/maps/LittlerootTown/scripts.pory"
	.string "Haus von PROF. BIRK$"

LittlerootTown_Text_WaitPlayer::
# 802 "data/maps/LittlerootTown/scripts.pory"
	.string "MAMA: Warte, {PLAYER}!$"

LittlerootTown_Text_WearTheseRunningShoes::
# 806 "data/maps/LittlerootTown/scripts.pory"
	.string "MAMA: {PLAYER}! {PLAYER}! Hast du\n"
	.string "dich PROF.BIRK vorgestellt?\p"
	.string "Oh! Was für ein niedliches POKéMON!\n"
	.string "Du hast es von PROF. BIRK bekommen.\l"
	.string "Wie freundlich von ihm.\p"
	.string "Du kommst ganz nach deinem Vater.\p"
	.string "Du und das POKéMON, ihr passt\n"
	.string "wirklich gut zusammen!\p"
	.string "Hier, mein Schatz!\p"
	.string "Wenn du draußen unterwegs bist,\n"
	.string "trag diese LAUFSCHUHE.\p"
	.string "Damit bist du viel flotter unterwegs!$"

LittlerootTown_Text_SwitchShoesWithRunningShoes::
# 823 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} tauscht die Schuhe gegen die\n"
	.string "LAUFSCHUHE aus.$"

LittlerootTown_Text_ExplainRunningShoes::
# 828 "data/maps/LittlerootTown/scripts.pory"
	.string "MAMA: {PLAYER}, zu diesen Schuhen\n gab es eine Anleitung.\p Halte während des Laufens den B-Knopf\n gedrückt, um zu rennen.\p Zieh die LAUFSCHUHE an und lauf los\n in die große, weite Welt!$"

LittlerootTown_Text_ComeHomeIfAnythingHappens::
# 837 "data/maps/LittlerootTown/scripts.pory"
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
# 850 "data/maps/LittlerootTown/scripts.pory"
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
