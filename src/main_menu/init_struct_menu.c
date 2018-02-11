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
#include "my.h"

bool	create_node(object_t **obj, char const *pathname,
                        int pos_x, int pos_y)
{
	object_t	*tmp = *obj;
	object_t	*new_object = malloc(sizeof(object_t));

        if (new_object == NULL)
                return (false);
        new_object->sprite = sfSprite_create();
        new_object->texture = sfTexture_createFromFile(
                pathname, NULL);
	if (new_object->texture == NULL)
		return (false);
        new_object->pos.x = pos_x;
        new_object->pos.y = pos_y;
	new_object->next = NULL;
	if (*obj == NULL)
		*obj = new_object;
	else {
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_object;
	}
	sfSprite_setTexture(new_object->sprite, new_object->texture, sfTrue);
	return (true);
}

int	init_pictures_menu(scene_t *i_menu)
{
	int	res = 0;

	if ((res = create_node(&(i_menu->obj), SKY, 0, 0)) == false)
		return (84);
	if ((res = create_node(&(i_menu->obj), GROUND, 0, 600)) == false)
		return (84);
	if ((res = create_node(&(i_menu->obj), RESTO_MENU, -30, 100)) == false)
		return (84);
	if ((res = create_node(&(i_menu->obj), SIGNPOST, 600, 420)) == false)
		return (84);
	return (0);
}

int	all_init_menu(scene_t *i_menu)
{
	i_menu->obj = NULL;
	if (init_pictures_menu(i_menu) == 84)
		return (84);
	return (0);
}
