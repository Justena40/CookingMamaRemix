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
	sfVector2i mouse_menu;
	sfColor color = {0, 0, 0, 255};

	sfMusic_play(wind->music);
	sfMusic_setLoop(wind->music, sfTrue);
	sfMusic_stop(wind->music_game);
	while (scenes->change_window == MENU_RESTO) {
		while (sfRenderWindow_pollEvent(wind->window, &(wind->event))) {
			analyse_events(&(wind->event), &(wind->window),
				       &(scenes->change_window));
		}
		mouse_menu = sfMouse_getPositionRenderWindow(wind->window);

		//if htp -> surligne
		sfRenderWindow_clear(wind->window, sfBlack);

		button_t *tmp = scenes->i_menu->button;
		if (play(mouse_menu) == 1) {
			sfRectangleShape_setOutlineThickness(tmp->next->next->rect, 2.0);
			sfRectangleShape_setOutlineColor(tmp->next->next->rect,
							 sfWhite);
			sfRenderWindow_drawRectangleShape(wind->window,
							  scenes->i_menu->button->rect, NULL);
		}
		if (htp(mouse_menu) == 1) {
			sfRectangleShape_setOutlineThickness(tmp->next->rect, 2.0);
			sfRectangleShape_setOutlineColor(tmp->next->next->rect,
							 sfWhite);
			sfRenderWindow_drawRectangleShape(wind->window,
							  scenes->i_menu->button->rect, NULL);
		}
		if (quit(mouse_menu) == 1) {
			sfRectangleShape_setOutlineThickness(tmp->rect, 2.0);
			sfRectangleShape_setOutlineColor(tmp->next->next->rect,
							 sfWhite);
			sfRenderWindow_drawRectangleShape(wind->window, scenes->i_menu->button->rect, NULL);
		}
			draw_all_sprite(scenes->i_menu, wind->window);
			sfRenderWindow_display(wind->window);
		}
	}
