/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** object structure
*/

#ifndef OBJECT_H_
#define OBJECT_H_

#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/System/Vector2.h>

typedef enum ingr_enum {
	CHEESE_E,
	DOUGH_E,
	EGG_E,
	PEPERONI_E,
	TOMATO_E,
	BACON_E,
	BREAD_E,
	SALAD_E,
	STEAK_E,
}ingr_e;

typedef struct object
{
	ingr_e		type;
	sfSprite	*sprite;
	sfTexture	*texture;
	sfVector2f	pos;
	sfVector2f	save_pos;
	struct object	*next;
}object_t;

#endif /*OBJECT_H_*/
