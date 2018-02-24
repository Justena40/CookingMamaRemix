/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** timer while
*/

#include <stdlib.h>
#include <unistd.h>
#include "tools_cook.h"
#include "play_game.h"
#include "recipe.h"

int	check_bad_ing(menu_t *recipe, int *ingr)
{
//	if ()
//		return (ERROR);
	return (SUCCESS);
}

int	done_recipe(sfEvent *event, sfRenderWindow **window,
		    scene_m_t *i_game, menu_t *recipe) {

	int res = 0;
	int ingr = 0;

	while (ingr != 5) {
		manege_mouse_ingredient(&event->mouseButton, *window, i_game);
		if ((res = check_bad_ing(recipe, &ingr)) == 84)
			return (ERROR);
		else
			ingr++;
	}
	return (SUCCESS);
}


int	timer_game(sfEvent *event, sfRenderWindow **window, scene_m_t *i_game)
{
	int order = 0;
	int res = 0;
	menu_t tab_menu[4];
	int find_recipe = 0;

	create_tab_menu(tab_menu);
//	while () {
		find_recipe = rand() % 4;
		if ((res = done_recipe(event, window, i_game, &(tab_menu[find_recipe]))) == 0)
			order++;
		printf("order -> %d\n", order);
//	}
	return (SUCCESS);
}
