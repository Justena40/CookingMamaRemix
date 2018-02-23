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

typedef struct object
{
	sfSprite	*sprite;
	sfTexture	*texture;
	sfVector2f	pos;
	sfVector2f	save_pos;
	struct object	*next;
}object_t;

#endif /*OBJECT_H_*/
