/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main header
*/

#ifndef MY_H_
#define MY_H_

#include "scene.h"
#include <stdbool.h>
#include <SFML/Window/Event.h>

void	my_putstr(int out, char const *str);
int	my_strlen(char const *str);
int	my_strcmp(char const *s1, char const *s2);
bool	create_node(object_t **obj, char const *pathname, int pos_x, int pos_y);

//---------------------- function in the main_menu ------------------------

void	menu(void);
int	init_pictures_menu(scene_t *i_menu);
int	all_init_menu(scene_t *i_menu);
void	draw_all_sprite(scene_t *i_menu, sfRenderWindow *window);
<<<<<<< HEAD
void	analyse_events(sfEvent *event, sfRenderWindow **window, int *state);
=======
void	analyse_events_menu(sfEvent *event, sfRenderWindow **window, int *change_window);
>>>>>>> 52b8e7d3fabdb1413c964b5cec04362ccc000c38
void	destroy_all_menu(scene_t **i_menu);

//--------------------- function in the how to play ----------------------------

/*void	init_sprite(sprite_htp_t *s_htp_t);
void	init_text(sprite_htp_t *s_htp_t);
void	init_htp(sprite_htp_t *s_htp_t);*/

//-------------------- function int the pause_menu -------------------------------

int	init_pictures_pause(scene_t *i_pause);
int	all_init_pause(scene_t *i_pause);
void	destroy_all_pause(scene_t *i_pause);
void	draw_sprite_pause(scene_t *i_pause, sfRenderWindow *window);
void	analyse_event_pause(sfEvent *event, sfRenderWindow **window, int *change_window);
void	pause_game(scene_t *i_pause, sfRenderWindow **window, sfEvent *event, int *change_window);

#endif /*MY_H_*/
