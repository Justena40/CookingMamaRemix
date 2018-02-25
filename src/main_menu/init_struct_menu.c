/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** initialisation of the menu struct
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "tools_cook.h"
#include "menu.h"

static bool	init_obj(object_t *new_object, char const *pathname,
			int pos_x, int pos_y)
{
	new_object->sprite = sfSprite_create();
	new_object->texture = sfTexture_createFromFile(
		pathname, NULL);
	if (new_object->texture == NULL)
		return (false);
	new_object->pos.x = pos_x;
	new_object->pos.y = pos_y;
	new_object->next = NULL;
	new_object->save_pos.x = new_object->pos.x;
	new_object->save_pos.y = new_object->pos.y;
	return (true);
}

bool	create_node(object_t **obj, char const *pathname,
		int pos_x, int pos_y)
{
	object_t	*tmp = *obj;
	object_t	*new_object = malloc(sizeof(object_t));

	if (new_object == NULL)
		return (false);
	if (init_obj(new_object, pathname, pos_x, pos_y) == false)
		return (false);
	new_object->next = NULL;
	if (*obj == NULL)
		*obj = new_object;
	else {
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_object;
	}
	sfSprite_setTexture(new_object->sprite, new_object->texture, sfTrue);
	sfSprite_setPosition(new_object->sprite, new_object->pos);
	return (true);
}

int	init_pictures_menu(object_t **obj)
{
	int	res = 0;

	if ((res = create_node(obj, SKY, 0, 0)) == false)
		return (84);
	if ((res = create_node(obj, WELCOME, 480, 30)) == false)
		return (84);
	if ((res = create_node(obj, GROUND, 0, 600)) == false)
		return (84);
	if ((res = create_node(obj, RESTO_MENU, -30, 100)) == false)
		return (84);
	if ((res = create_node(obj, SIGNPOST, 600, 370)) == false)
		return (84);
	return (0);
}

int	all_init_menu(object_t **obj)
{
	*obj = NULL;
	if (init_pictures_menu(obj) == 84)
		return (84);
	return (0);
}
