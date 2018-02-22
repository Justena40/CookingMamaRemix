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
#include "game.h"
#include "tools_cook.h"
#include "my.h"
#include "play_game.h"

int	init_ingredients(object_t **obj)
{
	int res = 0;

	if ((res = create_node(obj, CHEESE, 600, 50)) == false)
		return (ERROR);
	if ((res = create_node(obj, DOUGH, 750, 50)) == false)
		return (ERROR);
	if ((res = create_node(obj, EGG, 900, 50)) == false)
		return (ERROR);
	if ((res = create_node(obj, PEPE, 600, 150)) == false)
		return (ERROR);
	if ((res = create_node(obj, TOMATO, 750, 150)) == false)
		return (ERROR);
	if ((res = create_node(obj, BACON, 900, 150)) == false)
		return (ERROR);
	if ((res = create_node(obj, BREAD, 600, 250)) == false)
		return (ERROR);
	if ((res = create_node(obj, SALAD, 750, 250)) == false)
		return (ERROR);
	if ((res = create_node(obj, STEAK, 900, 250)) == false)
		return (ERROR);
	return (SUCCESS);
}

int	init_pictures_game(object_t **obj)
{
	int res = 0;

	if ((res = create_node(obj, BACK_GAME, 0, 0)) == false)
		return (ERROR);
	if ((res = create_node(obj, WHOOL, 0, 0)) == false)
		return (ERROR);
	if ((res = create_node(obj, CASH_REG, 0, 350)) == false)
		return (ERROR);
	if ((res = create_node(obj, TAB_ING, 530, 0)) == false)
		return (ERROR);
	if (init_ingredients(obj) == ERROR)
		return (ERROR);
	if ((res = create_node(obj, SAUCE_P, 650, 450)) == false)
		return (ERROR);
	return (SUCCESS);
}

int	all_init_game(object_t **obj)
{
	*obj = NULL;
	if (init_pictures_game(obj) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
