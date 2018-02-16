/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** header of game
*/

#ifndef PLAY_GAME_H_
#define PLAY_GAME_H_

#include "object.h"
#include "scene.h"

int	all_init_game(object_t **obj);
void	game(scene_t *i_game, sfRenderWindow **window, sfEvent *event, int *change_window);
void	analyse_event_game(sfEvent *event, sfRenderWindow **window, int *change_window);
void	draw_sprite_game(scene_t *i_game, sfRenderWindow *window);
void	destroy_all_game(scene_t **i_game);

#endif /* PLAY_GAME_H_ */
