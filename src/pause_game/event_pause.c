/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** event of the function pause
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "pause.h"

void	analyse_event_pause(sfEvent *event, sfRenderWindow **window,
			int *change_window)
{
	if (event->type == sfEvtClosed ||
	sfKeyboard_isKeyPressed(sfKeyQ) == 1) {
		*change_window = -1;
		sfRenderWindow_close(*window);
	}
	//return;
}
