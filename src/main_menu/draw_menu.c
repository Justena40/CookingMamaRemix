/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** draw all sprite
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include "menu.h"
#include "scene.h"

void	draw_all_sprite(scene_t *i_menu, sfRenderWindow *window)
{
	int		count = 0;
	object_t	*tmp = i_menu->obj;

	while (tmp != NULL) {
		sfSprite_setPosition(tmp->sprite, tmp->pos);
		sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
		tmp = tmp->next;
	}
	sleep(1);
}
