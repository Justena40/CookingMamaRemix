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
#include "tools_cook.h"
#include "pause.h"
#include "my.h"

int	init_pictures_pause(object_t **obj)
{
	int res = 0;

	if ((res = create_node(obj, NIGHT_SKY, 0, 0)) == false)
		return (ERROR);
	if ((res = create_node(obj, GROUND, 0, 600)) == false)
		return (ERROR);
	if ((res = create_node(obj, RESTO_PA, 600, 170)) == false)
		return (ERROR);
	if ((res = create_node(obj, LIGHT, 400, 470)) == false)
		return (ERROR);
	if ((res = create_node(obj, LIGHT, 50, 470)) == false)
		return (ERROR);
	return (SUCCESS);
}

int	all_init_pause(object_t **obj)
{
	*obj = NULL;
	if (init_pictures_pause(obj) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
