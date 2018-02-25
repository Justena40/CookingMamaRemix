/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** header menu
*/

#ifndef MENU_H_
#define MENU_H_
#include "scene.h"

int	menu(void);
int	init_pictures_menu(object_t **obj);
int	all_init_menu(object_t **obj);
void	draw_all_sprite(scene_t *i_menu, sfRenderWindow *window);
void	analyse_events(sfEvent *event, sfRenderWindow **window, int *state);
void	analyse_events_menu(sfEvent *event, sfRenderWindow **window, int *change_window);
void	destroy_all_menu(scene_t **i_menu);
void	main_menu(scene_t *i_menu, sfRenderWindow **window, sfEvent *event,
		  int *change_window);
int	init_button_menu(button_t **but);
void	destroy_all(scene_t **i_htp, scene_t **i_pause, scene_t **i_menu, scene_m_t **i_game);

#endif /* MENU_H_ */
