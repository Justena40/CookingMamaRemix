/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** draw prite in the function pause
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include "scene.h"
#include "pause.h"

void	draw_sprite_pause(scene_t *i_pause, sfRenderWindow *window)
{
	object_t *tmp = i_pause->obj;
	button_t *tmp_b = i_pause->button;

	while (tmp != NULL) {
		sfSprite_setPosition(tmp->sprite, tmp->pos);
		sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
		tmp = tmp->next;
	}
	while (tmp_b != NULL) {
		sfRenderWindow_drawRectangleShape(window, tmp_b->rect, NULL);
		sfRenderWindow_drawText(window, tmp_b->text->text, NULL);
		tmp_b = tmp_b->next;
	}
}
