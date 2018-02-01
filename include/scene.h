/*
** EPITECH PROJECT, 2018
** scene.h
** File description:
** structure for differents scenes
*/

#ifndef	SCENE_H_
#define SCENE_H_

#include "game.h"

// E FOR ENUM
// HTP => HOW TO PLAY

typedef enum scene {
	MENU,
	HTP,
	GAME,
	PAUSE,
}scene_e;





typedef struct menu
{
	scene_e		type;
	button_t	*menu_button;
	object_t	*menu_obj;
}menu_t;






typedef struct htp
{
	scene_e		type;
	button_t	*menu;
	object_t	*htp_obj;
	sfText		*text;
}htp_t;






typedef struct menu
{
	menu_e		type;
	object_t	*ingr;
	struct menu	*next;
}menu_t;

typedef struct ingr
{
	ingr_e		type;
	object_t	*ingr;
	struct ingr	*next;
}ingr_t;

typedef struct game
{
	scene_e		type;
	button_t	*game_button;
	menu_t		*menu;
	ingr_t		*ingr;
	object_t	*game_obj;
	music_game_t	*music;
	text_t		*game_text;
}game_t;





typedef struct pause
{
	scene_e		type;
	button_t	*pause_button;
	object_t	*pause_obj;
}pause_t;


#endif		/*SCENE_H_*/
