/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main header
*/

#ifndef MY_H_
#define MY_H_
#include "menu.h"

//---------------------- function in the main_menu ------------------------

int	main(int ac, char **av, char **ae);
int	check_env(char **env);
void	menu(void);
int	my_strlen_1(char const *str);
int	my_strcmp(char const *s1, char const *s2);
void	display_usage(void);
void	all_init(sprite_menu_t *i_menu);
void	draw_pictures_menu(sprite_menu_t *i_menu);
void	destroy_all_menu(sprite_menu_t *i_menu);

//--------------------- function in the game ----------------------------


#endif /* MY_H_ */
