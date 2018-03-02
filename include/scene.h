/*
** EPITECH PROJECT, 2018
** scene.h
** File description:
** scene structure
*/

#ifndef	SCENE_H_
#define SCENE_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "button.h"
#include "object.h"

typedef enum scene {
	MENU_RESTO,
	HTP,
	GAME,
	PAUSE,
}scene_e;

typedef struct basic_scene
{
	scene_e			type;
	button_t		*button;
	object_t		*obj;
}scene_t;

typedef struct menu_scene
{
	scene_e			type;
	button_t		*button;
	object_t		*ingr;
	object_t		*obj;
	object_t		*menu_cart;
}scene_m_t;

typedef struct all_scene
{
	scene_t			*i_menu;
	scene_t			*i_pause;
	scene_t			*i_htp;
	scene_m_t		*i_game;
	int			change_window;
}all_scene_t;

typedef struct window_s
{
	sfRenderWindow		*window;
	sfEvent			event;
	sfMusic			*music;
	sfMusic			*music_game;
	sfFont			*score_font;
	sfText			*score_order;
	char			tab_score[3];
	sfVector2f		pos_score;
}window_t;

#endif 	/*SCENE_H_*/
