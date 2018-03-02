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
#include "pause.h"

void	pause_game(all_scene_t *scenes, window_t *wind, int *pause)
{
	while (*pause == PAUSE) {
		while (sfRenderWindow_pollEvent(wind->window, &(wind->event)))
			analyse_event_pause(wind, &(scenes->change_window),
					pause);
		sfRenderWindow_clear(wind->window, sfBlack);
		draw_sprite_pause(scenes->i_pause, wind->window);
		sfRenderWindow_display(wind->window);
	}
}
