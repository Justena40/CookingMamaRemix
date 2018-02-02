/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main header
*/

#ifndef MY_H_
#define MY_H_
#include "menu.h"
#include "pause.h"
#include "how_to_play.h"

//---------------------- function in the main_menu ------------------------

int	main(int ac, char **av, char **ae);
int	check_env(char **env);
void	menu(void);
int	my_strlen_1(char const *str);
int	my_strcmp(char const *s1, char const *s2);
void	display_usage(void);
void	all_init(sprite_menu_t *i_menu);
void	draw_all_sprite(sprite_menu_t *i_menu);
void	analyse_events(sfEvent event, sprite_menu_t *i_menu);
void	destroy_all_menu(sprite_menu_t *i_menu);

//--------------------- function in the how to play ----------------------------

void	init_sprite(sprite_htp_t *s_htp_t);
void	init_text(sprite_htp_t *s_htp_t);
void	init_htp(sprite_htp_t *s_htp_t);

#endif /* MY_H_ */
