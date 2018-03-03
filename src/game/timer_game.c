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

static int	check_ingr(int *recipe, int *ingre, menu_t *tab_menu,
			ingr_e ingr_catch)
{
	static int	time_pass = 0;
	if (tab_menu[*recipe].ingr[*ingre] == ingr_catch) {
		(*ingre)++;
		time_pass = 0;
	}
	else if (tab_menu[*recipe].ingr[*ingre] != ingr_catch &&
		ingr_catch != NO_CATCH_E) {
		if (time_pass >= 12) {
			(*recipe) = rand() % 4;
			(*ingre) = 0;
			time_pass = 0;
			return (ERROR);
		} else
			time_pass++;
	}
	return (SUCCESS);
}

static void	time_elapse(int *second, sfTime time, sfClock *clock,
	int *change_window)
{
	if (*second >= END_TIMER) {
		*second = 0;
		*change_window = MENU_RESTO;
	}
	time = sfClock_getElapsedTime(clock);
	*second = time.microseconds / 1000000;
}

void	timer_game(window_t *wind, all_scene_t *scenes,	menu_t *tab_menu,
		clocks_t *clock)
{
	ingr_e	ingr_catch = NO_CATCH_E;
	int ingr = 0;
	int recipe = 0;

	recipe = rand() % 4;
	while (tab_menu[recipe].ingr[ingr] != END_E &&
	clock->second < END_TIMER) {
		time_elapse(&(clock->second), clock->time,
			clock->clock, &(scenes->change_window));
		analyse_event_game(wind, scenes, &(clock->second));
		ingr_catch = manege_mouse_ingredient(wind->window,
						scenes->i_game);
		if (check_ingr(&recipe, &ingr, tab_menu,
			ingr_catch) == ERROR)
			sfMusic_play(wind->bad_m);
		sfText_setString(wind->score_order, wind->tab_score);
		sfText_setString(wind->time_text, wind->tab_time);
		draw_sprite_game(scenes->i_game, wind, recipe);
		change_second(wind, clock->second);
	}
}
