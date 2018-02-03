/*
** EPITECH PROJECT, 2018
** game.h
** File description:
** different struct for my game object
*/

#ifndef	GAME_H_
#define	GAME_H_

#include <SFML/Graphics.h>
#include <SFML/Window/Window.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio.h>

typedef enum menu_enum {
	CHIKEN,
	KEBAB,
	PIZZA,
	CARBO,
}menu_enum_e;

typedef enum ingr {
	SALAD,
	OIGNON,
	STEACK,
	POTATOES,
	PASTA,
}ingr_e;

typedef struct object
{
	sfSprite	*sprite;
	sfTexture	*Texture;
	sfVector2f	pos_object;
	struct object	*next;
}object_t;

typedef struct text
{
	sfFont		*font;
	sfVector2f	pos_text;
	sfColor		color;
}text_t;

typedef struct button
{
	sfVector2f		pos;
	sfVector2f		size;
	sfRectangleShape	*rect;
	struct button		*next;
}button_t;

typedef struct music
{
	sfMusic		*piece;
	struct music	*next;
}music_game_t;

#endif		/*GAME_H_*/
