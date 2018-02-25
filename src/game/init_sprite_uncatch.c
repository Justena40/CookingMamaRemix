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

static int	init_pictures_game(object_t **obj)
{
	if (create_node(obj, BACK_GAME, 0, 0) == false)
		return (ERROR);
	if (create_node(obj, WHOOL, 0, 0) == false)
		return (ERROR);
	if (create_node(obj, CASH_REG, 0, 350) == false)
		return (ERROR);
	if (create_node(obj, TAB_ING, 530, 0) == false)
		return (ERROR);
	if (create_node(obj, SAUCE_P, 650, 450) == false)
		return (ERROR);
	return (SUCCESS);
}

int	init_game_obj_uncatch(object_t **obj)
{
	*obj = NULL;
	if (init_pictures_game(obj) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
