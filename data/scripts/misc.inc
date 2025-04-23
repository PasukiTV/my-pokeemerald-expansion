Misc_MessageEnd::
# 2 "data/scripts/misc.pory"
	waitmessage
# 3 "data/scripts/misc.pory"
	waitbuttonpress
# 4 "data/scripts/misc.pory"
	releaseall
	end


Misc_Follower_Mode_Off_Message::
# 9 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Off_Message_Text
# 10 "data/scripts/misc.pory"
	goto Misc_MessageEnd
	return


Misc_Follower_Mode_First_Alive_Message::
# 19 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_First_Alive_Message_Text
# 20 "data/scripts/misc.pory"
	goto Misc_MessageEnd
	return


Misc_Follower_Mode_Slot_Message::
# 29 "data/scripts/misc.pory"
	switch VAR_FOLLOWER_INDEX
# 30 "data/scripts/misc.pory"
	case 0, Misc_Follower_Mode_Slot_Message_3
# 32 "data/scripts/misc.pory"
	case 1, Misc_Follower_Mode_Slot_Message_4
# 34 "data/scripts/misc.pory"
	case 2, Misc_Follower_Mode_Slot_Message_5
# 36 "data/scripts/misc.pory"
	case 3, Misc_Follower_Mode_Slot_Message_6
# 38 "data/scripts/misc.pory"
	case 4, Misc_Follower_Mode_Slot_Message_7
# 40 "data/scripts/misc.pory"
	case 5, Misc_Follower_Mode_Slot_Message_8
Misc_Follower_Mode_Slot_Message_1:
# 43 "data/scripts/misc.pory"
	goto Misc_MessageEnd
	return

Misc_Follower_Mode_Slot_Message_3:
# 31 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_1_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_4:
# 33 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_2_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_5:
# 35 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_3_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_6:
# 37 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_4_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_7:
# 39 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_5_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_8:
# 41 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_6_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1


Misc_Follower_Mode_Off_Message_Text::
# 13 "data/scripts/misc.pory"
	.string "Begleiter-Modus eingestellt!\n"
	.string "Begleiter deaktiviert$"

Misc_Follower_Mode_First_Alive_Message_Text::
# 23 "data/scripts/misc.pory"
	.string "Begleiter-Modus eingestellt!\n"
	.string "Erstes kampfbereites Pokémon im Team$"

Misc_Follower_Mode_Slot_1_Message_Text::
# 46 "data/scripts/misc.pory"
	.string "Das erste Pokémon in deinem Team\n"
	.string "folgt dir jetzt!$"

Misc_Follower_Mode_Slot_2_Message_Text::
# 51 "data/scripts/misc.pory"
	.string "Das zweite Pokémon in deinem Team\n"
	.string "folgt dir jetzt!$"

Misc_Follower_Mode_Slot_3_Message_Text::
# 56 "data/scripts/misc.pory"
	.string "Das dritte Pokémon in deinem Team\n"
	.string "folgt dir jetzt!$"

Misc_Follower_Mode_Slot_4_Message_Text::
# 61 "data/scripts/misc.pory"
	.string "Das vierte Pokémon in deinem Team\n"
	.string "folgt dir jetzt!$"

Misc_Follower_Mode_Slot_5_Message_Text::
# 66 "data/scripts/misc.pory"
	.string "Das fünfte Pokémon in deinem Team\n"
	.string "folgt dir jetzt!$"

Misc_Follower_Mode_Slot_6_Message_Text::
# 71 "data/scripts/misc.pory"
	.string "Das sechste Pokémon in deinem Team\n"
	.string "folgt dir jetzt!$"
