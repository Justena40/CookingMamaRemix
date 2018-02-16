/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** event og the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "play_game.h"

void	analyse_event_game(sfEvent *event, sfRenderWindow **window,
			int *change_window)
{
	if (event->type == sfEvtClosed ||
	    sfKeyboard_isKeyPressed(sfKeyQ) == 1) {
		*change_window = -1;
		sfRenderWindow_close(*window);
	}
}
