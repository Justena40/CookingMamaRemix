/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** timer while
*/

#include <SFML/System/Clock.h>
#include <stdlib.h>
#include <unistd.h>
#include "tools_cook.h"
#include "play_game.h"
#include "recipe.h"

static void	check_ingr(int *recipe, int *ingr, menu_t *tab_menu, ingr_e ingr_catch)
{
	if (tab_menu[*recipe].ingr[*ingr] != ingr_catch &&
	    tab_menu[*recipe].ingr[*ingr] == NO_CATCH_E) {
		*recipe = rand() % 4;
		*ingr = 0;
	}
	else if (tab_menu[*recipe].ingr[*ingr] == ingr_catch)
		*ingr++;
}

int	timer_game(window_t *wind, all_scene_t *scenes,	menu_t *tab_menu,
	int *second)
{
	ingr_e	ingr_catch = NO_CATCH_E;
	sfClock *clock = sfClock_create();
	sfTime time;
	int order = 0;
	int ingr = 0;
	int recipe = 0;

	recipe = rand() % 4;
	while (tab_menu[recipe].ingr[ingr] != END_E && *second < END_TIMER) {
		time_elapse(second, time, clock, &(scenes->change_window));
		analyse_event_game(wind, scenes, second);
		ingr_catch = manege_mouse_ingredient(wind->window,
					     scenes->i_game);
		check_ingr(&recipe, &ingr, tab_menu, ingr_catch);
		draw_sprite_game(scenes->i_game, wind->window);
	}
	order++;
	return (SUCCESS);
}
