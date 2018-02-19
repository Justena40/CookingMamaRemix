/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** pause function
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"
#include "pause.h"

void	pause_game(scene_t *i_pause, sfRenderWindow **window, sfEvent *event,
		int *change_window)
{
	while (*change_window == PAUSE) {
		while (sfRenderWindow_pollEvent(*window, event))
			analyse_event_pause(event, window, change_window);
		sfRenderWindow_clear(*window, sfBlack);
		draw_sprite_pause(i_pause, *window);
		sfRenderWindow_display(*window);
	}
}
