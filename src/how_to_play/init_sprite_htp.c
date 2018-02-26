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
#include "htp.h"
#include "my.h"

int	init_pictures_htp(object_t **obj)
{
	int res = 0;

	if ((res = create_node(obj, SKY_HTP, 0, 0)) == false)
		return (84);
	if ((res = create_node(obj, COOKER, 600, 200)) == false)
		return (84);
	if ((res = create_node(obj, PARCHMENT, 100, 80)) == false)
		return (84);
	if ((res = create_node(obj, HTP_TEXT, 200, 180)) == false)
		return (84);
	if ((res = create_node(obj, ARROW, 0, 0)) == false)
		return (84);
	return (0);
}

int	all_init_htp(object_t **obj)
{
	*obj = NULL;
	if (init_pictures_htp(obj) == 84)
		return (84);
	return (0);
}
