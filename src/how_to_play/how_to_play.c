/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main function how to play
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "htp.h"

void	how_to_play(all_scene_t *scenes, window_t *wind)
{
	while (scenes->change_window == HTP) {
		while (sfRenderWindow_pollEvent(wind->window, &(wind->event)))
			analyse_event_htp(&(wind->event), &(wind->window),
					&(scenes->change_window));
		sfRenderWindow_clear(wind->window, sfBlack);
		draw_sprite_htp(scenes->i_htp, wind->window);
		sfRenderWindow_display(wind->window);
	}
}
