ToggleFollowerMenu::
# 3 "data/scripts/toggle_follower.pory"
	goto_if_set B_FLAG_FOLLOWERS_DISABLED, ToggleFollowerMenu_2
# 6 "data/scripts/toggle_follower.pory"
	msgbox activated, MSGBOX_NPC
ToggleFollowerMenu_1:
	return

ToggleFollowerMenu_2:
# 4 "data/scripts/toggle_follower.pory"
	msgbox deactivated, MSGBOX_NPC
	goto ToggleFollowerMenu_1


deactivated::
# 11 "data/scripts/toggle_follower.pory"
	.string "Follower Pokemon deactivated$"

activated::
# 15 "data/scripts/toggle_follower.pory"
	.string "Follower Pokemon activated$"
