/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** event of htp
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "htp.h"

void	analyse_event_htp(sfEvent *event, sfRenderWindow **window,
			int *change_window)
{
	if (event->type == sfEvtClosed ||
	sfKeyboard_isKeyPressed(sfKeyQ) == 1) {
		*change_window = -1;
		sfRenderWindow_close(*window);
	}
	if (event->type == sfEvtMouseButtonPressed)
		manege_mouse_htp(&event->mouseButton, window, change_window);
}
