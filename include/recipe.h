/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** headerof the recipe
*/

#ifndef RECIPE_H_
#define RECIPE_H_

#include "object.h"

typedef enum menu {
	PIZZA,
	LASAGNA,
	ENG_BRE,
	BURGER,
}menu_e;

typedef struct all_menu
{
	menu_e		type;
	ingr_e		ingr[6];
}menu_t;

#endif /* RECIPE_H_ */
