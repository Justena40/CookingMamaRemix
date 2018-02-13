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
void	define_button(int *arr_but, button_t *but);
bool	init_button(int *arr_but, button_t **but);

#endif /*MY_H_*/
