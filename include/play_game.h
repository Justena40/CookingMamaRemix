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

#define	END_TIMER		5

int	init_scene(scene_t *i_menu, scene_t *i_pause, scene_t *i_htp,
		scene_m_t *i_game);
int	init_game_obj_uncatch(object_t **obj);
int	init_game_obj_catch(object_t **ingr);
void	game(all_scene_t *scenes, window_t *wind);
void	analyse_event_game(sfEvent *event, sfRenderWindow **window,
			int *change_window, int *second);
void	draw_sprite_game(scene_m_t *i_game, sfRenderWindow *window);
void	destroy_all_game(scene_m_t **i_game);
void	manege_mouse_menu(sfMouseButtonEvent *event, sfRenderWindow *window,
			int *change_window);
void	create_tab_menu(menu_t arr_menu[4]);
void	fill_tab_menu(char **tab_menu);
ingr_e	manege_mouse_ingredient(sfMouseButtonEvent *event,
				sfRenderWindow *window, scene_m_t *i_game);
int	timer_game(sfEvent *event, sfRenderWindow **window, scene_m_t *i_game,
	menu_t *tab_menu);

#endif /* PLAY_GAME_H_ */
