/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init struct how to play
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include "tools_cook.h"
#include "game.h"
#include "my.h"

int	init_pictures_htp(scene_t *i_htp)
{
	int res = 0;

	if ((res = create_node(&(i_htp->obj), SKY, 0, 0)) == false)
		return (84);
	if ((res = create_node(&(i_htp->obj), GROUND, 0, 600)) == false)
		return (84);
	if ((res = create_node(&(i_htp->obj), RESTO_MENU, -30, 100)) == false)
		return (84);
	if ((res = create_node(&(i_htp->obj), SIGNPOST, 600, 420)) == false)
		return (84);
	return (0);
}

int	all_init_htp(scene_t *i_htp)
{
	i_htp->obj = NULL;
	if (init_pictures_htp(i_htp) == 84)
		return (84);
	return (0);
}
