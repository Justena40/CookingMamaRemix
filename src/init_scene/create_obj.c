/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** create node for object
*/

#include <stdlib.h>
#include "tools_cook.h"
#include "my.h"

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
