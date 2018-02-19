/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main function how to play
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "game.h"
#include "htp.h"

void	how_to_play(scene_t *i_htp, sfRenderWindow **window, sfEvent *event,
	int *change_window)
{
	while (*change_window == HTP) {
		while (sfRenderWindow_pollEvent(*window, event))
			analyse_event_htp(event, window, change_window);
		sfRenderWindow_clear(*window, sfBlack);
		draw_sprite_htp(i_htp, *window);
		sfRenderWindow_display(*window);
	}
}
