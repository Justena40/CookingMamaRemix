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

void	pause_game(all_scene_t *scenes, window_t *wind)
{
	while (scenes->change_window == PAUSE) {
		while (sfRenderWindow_pollEvent(wind->window, &(wind->event)))
			analyse_event_pause(&(wind->event), &(wind->window),
					&(scenes->change_window));
		sfRenderWindow_clear(wind->window, sfBlack);
		draw_sprite_pause(scenes->i_pause, wind->window);
		sfRenderWindow_display(wind->window);
	}
}
