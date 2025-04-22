#include "global.h"
#include "data.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_message_box.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "field_tasks.h"
#include "international_string_util.h"
#include "item.h"
#include "list_menu.h"
#include "m4a.h"
#include "main.h"
#include "main_menu.h"
#include "malloc.h"
#include "map_name_popup.h"
#include "menu.h"
#include "naming_screen.h"
#include "new_game.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "region_map.h"
#include "rtc.h"
#include "script.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "pokemon_summary_screen.h"
#include "wild_encounter.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_frontier.h"
#include "constants/coins.h"
#include "constants/expansion.h"
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/map_groups.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/species.h"
#include "constants/weather.h"
#include "save.h"

// *******************************
enum MiscMenu
{
    MISC_MENU_ITEM_FOLLOWERS,
    MISC_MENU_ITEM_CANCEL,
};

enum MiscFollowersMenu
{
    MISC_FOLLOWERS_MENU_ITEM_DEACTIVATED,
    MISC_FOLLOWERS_MENU_ITEM_FIRST_ALIVE,
    MISC_FOLLOWERS_MENU_ITEM_1,
    MISC_FOLLOWERS_MENU_ITEM_2,
    MISC_FOLLOWERS_MENU_ITEM_3,
    MISC_FOLLOWERS_MENU_ITEM_4,
    MISC_FOLLOWERS_MENU_ITEM_5,
    MISC_FOLLOWERS_MENU_ITEM_6,
};

// *******************************
// Constants
#define MISC_MENU_FONT FONT_NORMAL

#define MISC_MENU_WIDTH_MAIN 17
#define MISC_MENU_HEIGHT_MAIN 9

#define FOLLOWER_SLOT_AUTO 255
#define MISC_MAX_MENU_ITEMS 50

// *******************************
// Define functions
//static void Misc_ReShowMainMenu(void);
static void Misc_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate);
static void Misc_DestroyMenu(u8 taskId);
static void Misc_DestroyMenu_Full(u8 taskId);
static void MiscAction_Cancel(u8 taskId);
static void MiscAction_DestroyExtraWindow(u8 taskId);

static void MiscAction_OpenFollowersMenu(u8 taskId);
static void MiscAction_Followers_Deactivated(u8 taskId);
static void MiscAction_Followers_First_Alive(u8 taskId);
static void MiscAction_Followers_SetSlot(u8 taskId, u8 slot);
static void MiscAction_Followers_1(u8 taskId);
static void MiscAction_Followers_2(u8 taskId);
static void MiscAction_Followers_3(u8 taskId);
static void MiscAction_Followers_4(u8 taskId);
static void MiscAction_Followers_5(u8 taskId);
static void MiscAction_Followers_6(u8 taskId);


static void MiscTask_HandleMenuInput_Main(u8 taskId);
static void MiscTask_HandleMenuInput_Followers(u8 taskId);

extern const u8 Misc_Follower_Mode_Off_Message[];
extern const u8 Misc_Follower_Mode_First_Alive_Message[];
extern const u8 Misc_Follower_Mode_Slot_Message[];


// *******************************
// List Menu Items
static const struct ListMenuItem sMiscMenu_Items_Main[] =
{
    [MISC_MENU_ITEM_FOLLOWERS]      = {COMPOUND_STRING("Followers…{CLEAR_TO 110}{RIGHT_ARROW}"),    MISC_MENU_ITEM_FOLLOWERS},
    [MISC_MENU_ITEM_CANCEL]         = {COMPOUND_STRING("Cancel"),                                   MISC_MENU_ITEM_CANCEL},
};

static const struct ListMenuItem sMiscMenu_Items_Followers[] =
{
    [MISC_FOLLOWERS_MENU_ITEM_DEACTIVATED]  = {COMPOUND_STRING("Deactivated"),      MISC_FOLLOWERS_MENU_ITEM_DEACTIVATED},
    [MISC_FOLLOWERS_MENU_ITEM_FIRST_ALIVE]  = {COMPOUND_STRING("First Alive"),      MISC_FOLLOWERS_MENU_ITEM_FIRST_ALIVE},
    [MISC_FOLLOWERS_MENU_ITEM_1]            = {COMPOUND_STRING("Positon 1"),        MISC_FOLLOWERS_MENU_ITEM_1},
    [MISC_FOLLOWERS_MENU_ITEM_2]            = {COMPOUND_STRING("Positon 2"),        MISC_FOLLOWERS_MENU_ITEM_2},
    [MISC_FOLLOWERS_MENU_ITEM_3]            = {COMPOUND_STRING("Positon 3"),        MISC_FOLLOWERS_MENU_ITEM_3},
    [MISC_FOLLOWERS_MENU_ITEM_4]            = {COMPOUND_STRING("Positon 4"),        MISC_FOLLOWERS_MENU_ITEM_4},
    [MISC_FOLLOWERS_MENU_ITEM_5]            = {COMPOUND_STRING("Positon 5"),        MISC_FOLLOWERS_MENU_ITEM_5},
    [MISC_FOLLOWERS_MENU_ITEM_6]            = {COMPOUND_STRING("Positon 6"),        MISC_FOLLOWERS_MENU_ITEM_6},
};

// *******************************
// Menu Actions

static void (*const sMiscMenu_Actions_Main[])(u8) =
{
    [MISC_MENU_ITEM_FOLLOWERS]      = MiscAction_OpenFollowersMenu,
    [MISC_MENU_ITEM_CANCEL]         = MiscAction_Cancel,
};

static void (*const sMiscMenu_Actions_Followers[])(u8) =
{
    [MISC_FOLLOWERS_MENU_ITEM_DEACTIVATED]  = MiscAction_Followers_Deactivated,
    [MISC_FOLLOWERS_MENU_ITEM_FIRST_ALIVE]  = MiscAction_Followers_First_Alive,
    [MISC_FOLLOWERS_MENU_ITEM_1]            = MiscAction_Followers_1,
    [MISC_FOLLOWERS_MENU_ITEM_2]            = MiscAction_Followers_2,
    [MISC_FOLLOWERS_MENU_ITEM_3]            = MiscAction_Followers_3,
    [MISC_FOLLOWERS_MENU_ITEM_4]            = MiscAction_Followers_4,
    [MISC_FOLLOWERS_MENU_ITEM_5]            = MiscAction_Followers_5,
    [MISC_FOLLOWERS_MENU_ITEM_6]            = MiscAction_Followers_6,
};

// *******************************
// Windows
static const struct WindowTemplate sMiscMenuWindowTemplateMain =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = MISC_MENU_WIDTH_MAIN,
    .height = 2 * MISC_MENU_HEIGHT_MAIN,
    .paletteNum = 15,
    .baseBlock = 1,
};
static const struct WindowTemplate sMiscMenuWindowTemplateFollower =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = MISC_MENU_WIDTH_MAIN - 5,
    .height = 2 * MISC_MENU_HEIGHT_MAIN,
    .paletteNum = 15,
    .baseBlock = 1,
};

// *******************************
// List Menu Templates
static const struct ListMenuTemplate sMiscMenu_ListTemplate_Main =
{
    .items = sMiscMenu_Items_Main,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sMiscMenu_Items_Main),
};

static const struct ListMenuTemplate sMiscMenu_ListTemplate_Followers =
{
    .items = sMiscMenu_Items_Followers,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sMiscMenu_Items_Followers),
};

// *******************************
// Functions universal
void Misc_ShowMainMenu(void)
{
    Misc_ShowMenu(MiscTask_HandleMenuInput_Main, sMiscMenu_ListTemplate_Main);
}

// static void Misc_ReShowMainMenu(void)
// {
//     Misc_ShowMenu(MiscTask_HandleMenuInput_Main, sMiscMenu_ListTemplate_Main);
// }

#define tMenuTaskId   data[0]
#define tWindowId     data[1]
#define tSubWindowId  data[2]
#define tInput        data[3]
#define tDigit        data[4]

static void Misc_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate)
{
    struct ListMenuTemplate menuTemplate;
    u8 windowId;
    u8 menuTaskId;
    u8 inputTaskId;

    // create window
    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sMiscMenuWindowTemplateMain);
    DrawStdWindowFrame(windowId, FALSE);

    // create list menu
    menuTemplate = LMtemplate;
    menuTemplate.maxShowed = MISC_MENU_HEIGHT_MAIN;
    menuTemplate.windowId = windowId;
    menuTemplate.header_X = 0;
    menuTemplate.item_X = 8;
    menuTemplate.cursor_X = 0;
    menuTemplate.upText_Y = 1;
    menuTemplate.cursorPal = 2;
    menuTemplate.fillValue = 1;
    menuTemplate.cursorShadowPal = 3;
    menuTemplate.lettersSpacing = 1;
    menuTemplate.itemVerticalPadding = 0;
    menuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    menuTemplate.fontId = MISC_MENU_FONT;
    menuTemplate.cursorKind = 0;
    menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    // create input handler task
    inputTaskId = CreateTask(HandleInput, 3);
    gTasks[inputTaskId].tMenuTaskId = menuTaskId;
    gTasks[inputTaskId].tWindowId = windowId;
    gTasks[inputTaskId].tSubWindowId = 0;
    

    // draw everything
    CopyWindowToVram(windowId, COPYWIN_FULL);
}
static void Misc_ShowMenuFollower(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate)
{
    struct ListMenuTemplate menuTemplate;
    u8 windowId;
    u8 menuTaskId;
    u8 inputTaskId;

    // create window
    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sMiscMenuWindowTemplateFollower);
    DrawStdWindowFrame(windowId, FALSE);

    // create list menu
    menuTemplate = LMtemplate;
    menuTemplate.maxShowed = MISC_MENU_HEIGHT_MAIN;
    menuTemplate.windowId = windowId;
    menuTemplate.header_X = 0;
    menuTemplate.item_X = 8;
    menuTemplate.cursor_X = 0;
    menuTemplate.upText_Y = 1;
    menuTemplate.cursorPal = 2;
    menuTemplate.fillValue = 1;
    menuTemplate.cursorShadowPal = 3;
    menuTemplate.lettersSpacing = 1;
    menuTemplate.itemVerticalPadding = 0;
    menuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    menuTemplate.fontId = MISC_MENU_FONT;
    menuTemplate.cursorKind = 0;
    menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    // create input handler task
    inputTaskId = CreateTask(HandleInput, 3);
    gTasks[inputTaskId].tMenuTaskId = menuTaskId;
    gTasks[inputTaskId].tWindowId = windowId;
    gTasks[inputTaskId].tSubWindowId = 0;

    // draw everything
    CopyWindowToVram(windowId, COPYWIN_FULL);
}
static void Misc_DestroyMenu(u8 taskId)
{
    DestroyListMenuTask(gTasks[taskId].tMenuTaskId, NULL, NULL);
    RemoveWindow(gTasks[taskId].tWindowId);
    DestroyTask(taskId);
}

static void Misc_DestroyMenu_Full(u8 taskId)
{
    if (gTasks[taskId].tSubWindowId != 0)
    {
        ClearStdWindowAndFrame(gTasks[taskId].tSubWindowId, FALSE);
        MiscAction_DestroyExtraWindow(taskId);
    }
    DestroyListMenuTask(gTasks[taskId].tMenuTaskId, NULL, NULL);
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
    DestroyTask(taskId);
    UnfreezeObjectEvents();
}

void Misc_DestroyMenu_Full_Script(u8 taskId, const u8 *script)
{
    Misc_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    FreezeObjectEvents();
    ScriptContext_SetupScript(script);
}
static void MiscAction_Cancel(u8 taskId)
{
    Misc_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}

static void MiscAction_DestroyExtraWindow(u8 taskId)
{
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);

    ClearStdWindowAndFrame(gTasks[taskId].tSubWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tSubWindowId);

    DestroyListMenuTask(gTasks[taskId].tMenuTaskId, NULL, NULL);
    DestroyTask(taskId);
    ScriptContext_Enable();
    UnfreezeObjectEvents();
}

// *******************************
// Handle Inputs
static void MiscTask_HandleMenuInput_Main(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].tMenuTaskId);

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        if ((func = sMiscMenu_Actions_Main[input]) != NULL)
            func(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Misc_DestroyMenu_Full(taskId);
        ScriptContext_Enable();
    }
}

static void MiscTask_HandleMenuInput_General(u8 taskId, const void (*const actions[])(u8), void (*callbackInput)(u8), struct ListMenuTemplate callbackMenuTemplate)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].tMenuTaskId);

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        if ((func = actions[input]) != NULL)
            func(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Misc_DestroyMenu(taskId);
        Misc_ShowMenu(callbackInput, callbackMenuTemplate);
    }
}



static void MiscTask_HandleMenuInput_Followers(u8 taskId)
{
    MiscTask_HandleMenuInput_General(taskId, sMiscMenu_Actions_Followers, MiscTask_HandleMenuInput_Main, sMiscMenu_ListTemplate_Main);
}

// *******************************
// Open sub-menus
static void MiscAction_OpenFollowersMenu(u8 taskId)
{
    Misc_DestroyMenu_Full(taskId);
    Misc_ShowMenuFollower(MiscTask_HandleMenuInput_Followers, sMiscMenu_ListTemplate_Followers);
}

void ReopenFollowersMenu(void)
{
    Misc_ShowMenuFollower(MiscTask_HandleMenuInput_Followers, sMiscMenu_ListTemplate_Followers);
}
// *******************************
// Actions Followers

static void MiscAction_Followers_Deactivated(u8 taskId)
{
    Misc_DestroyMenu_Full(taskId);
    ResetFollowerPositionHistory();

    struct ObjectEvent *followerObject = GetFollowerObject();

    // Wenn Follower sichtbar ist, Animation abspielen
    if (followerObject && !FlagGet(B_FLAG_FOLLOWERS_DISABLED))
    {
        ClearObjectEventMovement(followerObject, &gSprites[followerObject->spriteId]);
        ObjectEventSetHeldMovement(followerObject, MOVEMENT_ACTION_ENTER_POKEBALL);

        u8 task = CreateTask(Task_RemoveFollowerAfterAnimAndUpdateFollower, 0);
        gTasks[task].data[1] = FOLLOWER_SLOT_AUTO; // egal, deaktiviert sowieso
        SetWordTaskArg(task, 2, (uintptr_t)Misc_Follower_Mode_Off_Message); // Nachricht merken
        FlagSet(B_FLAG_FOLLOWERS_DISABLED);
        return;
    }

    // Kein Follower sichtbar – sofort deaktivieren
    FlagSet(B_FLAG_FOLLOWERS_DISABLED);
    Misc_DestroyMenu_Full_Script(taskId, Misc_Follower_Mode_Off_Message);
    UpdateFollowingPokemon();
    ScriptContext_Enable();
}


static void MiscAction_Followers_First_Alive(u8 taskId)
{
    Misc_DestroyMenu_Full(taskId);
    ResetFollowerPositionHistory();

    struct ObjectEvent *followerObject = GetFollowerObject();

    if (followerObject && !FlagGet(B_FLAG_FOLLOWERS_DISABLED) && GetFirstLiveMon() != NULL)
    {
        // Spielt die Pokéball-Animation ab, wenn bereits ein Follower da ist
        ClearObjectEventMovement(followerObject, &gSprites[followerObject->spriteId]);
        ObjectEventSetHeldMovement(followerObject, MOVEMENT_ACTION_ENTER_POKEBALL);

        u8 taskId = CreateTask(Task_RemoveFollowerAfterAnimAndUpdateFollower, 0);
        gTasks[taskId].data[1] = FOLLOWER_SLOT_AUTO; // Slot
        SetWordTaskArg(taskId, 2, (uintptr_t)Misc_Follower_Mode_First_Alive_Message); // Nachricht-Zeiger

        return; // Erst Animation abspielen
    }

    // Kein Follower oder keine Animation nötig – direkt ausführen
    VarSet(VAR_FOLLOWER_INDEX, FOLLOWER_SLOT_AUTO);
    FlagClear(B_FLAG_FOLLOWERS_DISABLED);
    Misc_DestroyMenu_Full_Script(taskId, Misc_Follower_Mode_First_Alive_Message);
    UpdateFollowingPokemon();
    ScriptContext_Enable();
}


static void MiscAction_Followers_1(u8 taskId) { MiscAction_Followers_SetSlot(taskId, 0); }
static void MiscAction_Followers_2(u8 taskId) { MiscAction_Followers_SetSlot(taskId, 1); }
static void MiscAction_Followers_3(u8 taskId) { MiscAction_Followers_SetSlot(taskId, 2); }
static void MiscAction_Followers_4(u8 taskId) { MiscAction_Followers_SetSlot(taskId, 3); }
static void MiscAction_Followers_5(u8 taskId) { MiscAction_Followers_SetSlot(taskId, 4); }
static void MiscAction_Followers_6(u8 taskId) { MiscAction_Followers_SetSlot(taskId, 5); }

static void MiscAction_Followers_SetSlot(u8 taskId, u8 slot)
{
    Misc_DestroyMenu_Full(taskId);
    ResetFollowerPositionHistory();

    struct ObjectEvent *followerObject = GetFollowerObject();
    u8 currentSlot = VarGet(VAR_FOLLOWER_INDEX);

    if (followerObject && !FlagGet(B_FLAG_FOLLOWERS_DISABLED) && slot != currentSlot)
    {
        ClearObjectEventMovement(followerObject, &gSprites[followerObject->spriteId]);
        ObjectEventSetHeldMovement(followerObject, MOVEMENT_ACTION_ENTER_POKEBALL);
        
        u8 task = CreateTask(Task_RemoveFollowerAfterAnimAndUpdateFollower, 0);
        gTasks[task].data[1] = slot; // neuen Slot speichern
        SetWordTaskArg(task, 2, (uintptr_t)Misc_Follower_Mode_Slot_Message); // <- fix!
        return; // NICHT direkt UpdateFollowingPokemon aufrufen!
    }

    // Fallback, falls keine Animation nötig
    VarSet(VAR_FOLLOWER_INDEX, slot);
    FlagClear(B_FLAG_FOLLOWERS_DISABLED);
    Misc_DestroyMenu_Full_Script(taskId, Misc_Follower_Mode_Slot_Message);
    UpdateFollowingPokemon();
    ScriptContext_Enable();
}
