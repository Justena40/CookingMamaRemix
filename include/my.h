/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main header
*/

#ifndef MY_H_
#define MY_H_

#include "scene.h"
#include "menu.h"
#include "pause.h"
#include "how_to_play.h"
#include <SFML/Window/Event.h>

void	my_putstr(int out, char const *str);
int	my_strlen(char const *str);
int	my_strcmp(char const *s1, char const *s2);

//---------------------- function in the main_menu ------------------------

void	menu(void);
int	all_init(scene_t *i_menu);
void	draw_all_sprite(scene_t *i_menu, sfRenderWindow *window);
void	analyse_events(sfEvent *event, sfRenderWindow **window, int *state);
void	destroy_all_menu(scene_t **i_menu);



//--------------------- function in the how to play ----------------------------

/*void	init_sprite(sprite_htp_t *s_htp_t);
void	init_text(sprite_htp_t *s_htp_t);
void	init_htp(sprite_htp_t *s_htp_t);*/

#endif /*MY_H_*/
