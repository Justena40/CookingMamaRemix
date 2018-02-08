/*
** EPITECH PROJECT, 2018
** game.h
** File description:
** game structure
*/

#ifndef	GAME_H_
#define	GAME_H_

#include "button.h"
#include "object.h"
#include "text.h"
#include "music.h"
#include "scene.h"

/*typedef enum menu_enum {
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
	}ingr_e;*/

typedef struct game
{
	scene_t	*scenes;
	music_t	*musics;
	text_t	*texts;
}game_t;

#endif		/*GAME_H_*/
