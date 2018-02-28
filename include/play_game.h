/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** header of game
*/

#ifndef PLAY_GAME_H_
#define PLAY_GAME_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "object.h"
#include "scene.h"
#include "recipe.h"

int	init_scene(scene_t *i_menu, scene_t *i_pause, scene_t *i_htp,
		scene_m_t *i_game);
int	init_game_obj_uncatch(object_t **obj);
int	init_game_obj_catch(object_t **ingr);
void	game(all_scene_t *scenes, window_t *wind);
void	analyse_event_game(window_t *wind, all_scene_t *scene, int *second);
void	draw_sprite_game(scene_m_t *i_game, sfRenderWindow *window);
void	destroy_all_game(scene_m_t **i_game);
void	manege_mouse_menu(sfRenderWindow *window,
			int *change_window);
void	create_tab_menu(menu_t arr_menu[4]);
void	fill_tab_menu(char **tab_menu);
ingr_e	manege_mouse_ingredient(sfRenderWindow *window, scene_m_t *i_game);
int	timer_game(window_t *wind, all_scene_t *scenes,	menu_t *tab_menu,
	int *second);
void	time_elapse(int *second, sfTime time, sfClock *clock,
		    int *change_window);

#endif /* PLAY_GAME_H_ */
