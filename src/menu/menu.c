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

static void	surlign_quit(sfRectangleShape *rect, sfVector2i mouse_menu)
{
	if (quit(mouse_menu) == 1) {
		sfRectangleShape_setOutlineThickness(rect, 2.0);
		sfRectangleShape_setOutlineColor(rect,
						sfWhite);
	} else {
		sfRectangleShape_setOutlineThickness(
			rect, 2.0);
		sfRectangleShape_setOutlineColor(rect,
						sfTransparent);
	}
}

static void	surlign_htp(sfRectangleShape *rect, sfVector2i mouse_menu)
{
	if (htp(mouse_menu) == 1) {
		sfRectangleShape_setOutlineThickness(rect, 2.0);
		sfRectangleShape_setOutlineColor(rect,
						sfWhite);
	} else {
		sfRectangleShape_setOutlineThickness(
			rect, 2.0);
		sfRectangleShape_setOutlineColor(rect,
						sfTransparent);
	}
}

static void	surlign_play(sfRectangleShape *rect, sfVector2i mouse_menu)
{
	if (play(mouse_menu) == 1) {
		sfRectangleShape_setOutlineThickness(
			rect, 2.0);
		sfRectangleShape_setOutlineColor(rect,
						sfWhite);
	} else {
		sfRectangleShape_setOutlineThickness(
			rect, 2.0);
		sfRectangleShape_setOutlineColor(rect,
						sfTransparent);
	}
}

void	main_menu(all_scene_t *scenes, window_t *wind)
{
	sfVector2i mouse_menu;
	sfColor color = {0, 0, 0, 255};
	button_t *tmp = scenes->i_menu->button;

	sfMusic_play(wind->music);
	sfMusic_setLoop(wind->music, sfTrue);
	sfMusic_stop(wind->music_game);
	while (scenes->change_window == MENU_RESTO) {
		mouse_menu = sfMouse_getPositionRenderWindow(wind->window);
		while (sfRenderWindow_pollEvent(wind->window, &(wind->event))) {
			analyse_events(&(wind->event), &(wind->window),
				&(scenes->change_window));
		}
		sfRenderWindow_clear(wind->window, sfBlack);
		surlign_play(tmp->next->next->rect, mouse_menu);
		surlign_htp(tmp->next->rect, mouse_menu);
		surlign_quit(tmp->rect, mouse_menu);
		draw_all_sprite(scenes->i_menu, wind->window);
		sfRenderWindow_display(wind->window);
	}
}
