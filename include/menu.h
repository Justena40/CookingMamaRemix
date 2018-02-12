/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** header menu
*/

#ifndef MENU_H_
#define MENU_H_
#include "scene.h"

void	menu(void);
int	init_pictures_menu(scene_t *i_menu);
int	all_init_menu(scene_t *i_menu);
void	draw_all_sprite(scene_t *i_menu, sfRenderWindow *window);
void	analyse_events(sfEvent *event, sfRenderWindow **window, int *state);
void	analyse_events_menu(sfEvent *event, sfRenderWindow **window, int *change_window);
void	destroy_all_menu(scene_t **i_menu);
void	main_menu(scene_t *i_menu, sfRenderWindow **window, sfEvent *event,
		  int *change_window);

#endif /* MENU_H_ */
