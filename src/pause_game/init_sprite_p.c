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
#include "pause.h"
#include "my.h"

int	init_pictures_pause(scene_t *i_pause)
{
	int res = 0;

	if ((res = create_node(&(i_pause->obj), NIGHT_SKY, 0, 0)) == false)
		return (ERROR);
	if ((res = create_node(&(i_pause->obj), GROUND, 0, 600)) == false)
		return (ERROR);
	if ((res = create_node(&(i_pause->obj), RESTO_PA, 600, 170)) == false)
		return (ERROR);
	if ((res = create_node(&(i_pause->obj), LIGHT, 400, 470)) == false)
		return (ERROR);
	if ((res = create_node(&(i_pause->obj), LIGHT, 50, 470)) == false)
		return (ERROR);
	return (SUCCESS);
}

int	all_init_pause(scene_t *i_pause)
{
	i_pause->obj = NULL;
	if (init_pictures_pause(i_pause) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
