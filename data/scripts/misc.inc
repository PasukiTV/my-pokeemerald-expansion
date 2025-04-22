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
# 31 "data/scripts/misc.pory"
	case 0, Misc_Follower_Mode_Slot_Message_3
# 33 "data/scripts/misc.pory"
	case 1, Misc_Follower_Mode_Slot_Message_4
# 35 "data/scripts/misc.pory"
	case 2, Misc_Follower_Mode_Slot_Message_5
# 37 "data/scripts/misc.pory"
	case 3, Misc_Follower_Mode_Slot_Message_6
# 39 "data/scripts/misc.pory"
	case 4, Misc_Follower_Mode_Slot_Message_7
# 41 "data/scripts/misc.pory"
	case 5, Misc_Follower_Mode_Slot_Message_8
Misc_Follower_Mode_Slot_Message_1:
# 44 "data/scripts/misc.pory"
	goto Misc_MessageEnd
	return

Misc_Follower_Mode_Slot_Message_3:
# 32 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_1_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_4:
# 34 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_2_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_5:
# 36 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_3_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_6:
# 38 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_4_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_7:
# 40 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_5_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1

Misc_Follower_Mode_Slot_Message_8:
# 42 "data/scripts/misc.pory"
	msgbox Misc_Follower_Mode_Slot_6_Message_Text
	goto Misc_Follower_Mode_Slot_Message_1


Misc_Follower_Mode_Off_Message_Text::
# 13 "data/scripts/misc.pory"
	.string "Follower Mode set to!\n"
	.string "Follower deactivated$"

Misc_Follower_Mode_First_Alive_Message_Text::
# 23 "data/scripts/misc.pory"
	.string "Follower Mode set to!\n"
	.string "First Alive Pokemon in Team$"

Misc_Follower_Mode_Slot_1_Message_Text::
# 47 "data/scripts/misc.pory"
	.string "The first Pokémon in your party\n"
	.string "is now following you$"

Misc_Follower_Mode_Slot_2_Message_Text::
# 52 "data/scripts/misc.pory"
	.string "The second Pokémon in your party \n"
	.string "is now following you$"

Misc_Follower_Mode_Slot_3_Message_Text::
# 57 "data/scripts/misc.pory"
	.string "The third Pokémon in your party \n"
	.string "is now following you$"

Misc_Follower_Mode_Slot_4_Message_Text::
# 62 "data/scripts/misc.pory"
	.string "The fourth Pokémon in your party \n"
	.string "is now following you$"

Misc_Follower_Mode_Slot_5_Message_Text::
# 67 "data/scripts/misc.pory"
	.string "The fifth Pokémon in your party \n"
	.string "is now following you$"

Misc_Follower_Mode_Slot_6_Message_Text::
# 72 "data/scripts/misc.pory"
	.string "The sixth Pokémon in your party \n"
	.string "is now following you$"
