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

int	done_recipe(int *recipe) {

	int res = 0;
	int ingr = 0;

	while () {
		//prendre ing
		if ((res = check_bad_order) == 84 || (res = check_bad_ing) == 84)
			*recipe = random() % 4;
		ingr++;
	}
	return (SUCCESS);
}

int	timer_game()
{
	int order = 0;
	int recipe = 0;
	menu_t recipe;

	create_tab_menu(&recipe);
	while (timer) {
		recipe = rand() % 4;
		if ((res = done_recipe(&recipe )) == 0)
			order++;
	}
	return (SUCCESS);
}
