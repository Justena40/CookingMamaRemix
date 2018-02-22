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

int	all_init_game(object_t **obj);
void	game(scene_t *i_game, sfRenderWindow **window, sfEvent *event, int *change_window);
//void	analyse_event_game(sfEvent *event, sfRenderWindow **window, int *change_window);
void	draw_sprite_game(scene_t *i_game, sfRenderWindow *window);
void	destroy_all_game(scene_t **i_game);
//void	manege_mouse_menu(sfMouseButtonEvent *event, sfRenderWindow *window, int *change_wind//ow);
void	create_tab_menu(void);
void	fill_tab_menu(char **tab_menu);
//void	manege_mouse_ingredient(sfMouseButtonEvent *event, sfRenderWindow *window);

#endif /* PLAY_GAME_H_ */
