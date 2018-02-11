/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init the struct
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include "game.h"
#include "tools_cook.h"
#include "my.h"

int	init_pictures_pause(scene_t *i_pause)
{
	int res = 0;

	if ((res == create_node(&(i_pause->obj), NIGHT_SKY, 0, 0)) == false)
		return (84);
	if ((res == create_node(&(i_pause->obj), GROUND, 0, 600)) == false)
		return (84);
	if ((res == create_node(&(i_pause->obj), RESTO_PA, 1000, 100)) == false)
		return (84);
	if ((res == create_node(&(i_pause->obj), LIGHT, 500, 610)) == false)
		return (84);
	if ((res == create_node(&(i_pause->obj), LIGHT, 300, 610)) == false)
		return (84);
	return (0);
}

int	all_init_pause(scene_t *i_pause)
{
	i_pause->obj = NULL;
	if (init_pictures_pause(i_pause) == 84)
		return (84);
	return (0);
}
