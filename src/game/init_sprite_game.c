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

int	init_pictures_game(scene_t *i_game)
{
	int res = 0;

	if ((res = create_node(&(i_game->obj), BACK_GAME, 0, 0)) == false)
		return (ERROR);
	if ((res = create_node(&(i_game->obj), WHOOL, 0, 0)) == false)
		return (ERROR);
	if ((res = create_node(&(i_game->obj), CASH_REG, 900, 600)) == false)
		return (ERROR);
	return (SUCCESS);
}

int	all_init_game(scene_t *i_game)
{
	i_game->obj = NULL;
	if (init_pictures_game(i_game) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
