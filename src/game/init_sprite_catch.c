/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init the sprite of the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include "tools_cook.h"
#include "my.h"
#include "play_game.h"

int	init_ingredients_one(object_t **ingr)
{
	if (create_node(ingr, CHEESE, 600, 50) == false)
		return (ERROR);
	if (create_node(ingr, DOUGH, 750, 50) == false)
		return (ERROR);
	if (create_node(ingr, EGG, 900, 50) == false)
		return (ERROR);
	if (create_node(ingr, PEPE, 600, 150) == false)
		return (ERROR);
	if (create_node(ingr, TOMATO, 750, 150) == false)
		return (ERROR);
	if (create_node(ingr, BACON, 900, 150) == false)
		return (ERROR);
	return (SUCCESS);
}

int	init_ingredients_second(object_t **ingr)
{
	if (create_node(ingr, BREAD, 600, 250) == false)
		return (ERROR);
	if (create_node(ingr, SALAD, 750, 250) == false)
		return (ERROR);
	if (create_node(ingr, STEAK, 900, 250) == false)
		return (ERROR);
	return (SUCCESS);
}

int	init_game_obj_catch(object_t **ingr)
{
	object_t *tmp = NULL;
	int	count = 0;

	*ingr = NULL;
	if (init_ingredients_one(ingr) == ERROR ||
	init_ingredients_second(ingr) == ERROR)
		return (ERROR);
	tmp = *ingr;
	while (tmp != NULL) {
		tmp->type = (ingr_e) count;
		tmp = tmp->next;
		count++;
	}
	return (SUCCESS);
}
