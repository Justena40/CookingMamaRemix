/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** function menu
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include "menu.h"
#include "tools_cook.h"
#include "scene.h"

void	main_menu(all_scene_t *scenes, window_t *wind)
{
	sfMusic_play(wind->music);
	sfMusic_setLoop(wind->music, sfTrue);
	sfMusic_stop(wind->music_game);
	while (scenes->change_window == MENU_RESTO) {
		while (sfRenderWindow_pollEvent(wind->window, &(wind->event))) {
			analyse_events(&(wind->event), &(wind->window),
				&(scenes->change_window));
		}
		sfRenderWindow_clear(wind->window, sfBlack);
		draw_all_sprite(scenes->i_menu, wind->window);
		sfRenderWindow_display(wind->window);
	}
}
