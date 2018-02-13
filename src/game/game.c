/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main function of the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"
#include "play_game.h"

void	game(scene_t *i_game, sfRenderWindow **window, sfEvent *event,
	int *change_window)
{
	while (*change_window == GAME) {
		while (sfRenderWindow_pollEvent(*window, event))
//			analyse_event_game(event, window, change_window);
		sfRenderWindow_clear(*window, sfBlack);
//		draw_sprite_game(i_game, *window);
		sfRenderWindow_display(*window);
	}
//	destroy_all_game(&i_game);
}
