/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** event og the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "tools_cook.h"
#include "play_game.h"

static void	close_event(sfEvent *event, sfRenderWindow **window,
			    int *change_window)
{
	if (event->type == sfEvtClosed ||
	    sfKeyboard_isKeyPressed(sfKeyQ) == 1) {
		*change_window = -1;
		sfRenderWindow_close(*window);
	}
}

static void	pause_event(sfEvent *event, int *change_window)
{
	if (event->type == sfEvtKeyPressed) {
		if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
			*change_window = PAUSE;
	}
}

void	analyse_event_game(sfEvent *event, sfRenderWindow **window,
			   int *change_window, int *second)
{
	while (sfRenderWindow_pollEvent(*window, event)) {
		pause_event(event, change_window);
		close_event(event, window, change_window);
		if (!sfRenderWindow_isOpen(*window))
			*second = END_TIMER;
	}
}
