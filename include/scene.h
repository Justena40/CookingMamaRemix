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


typedef struct basic_scene
{
	scene_e		type;
	button_t	*button;
	object_t	*obj;
}basic_scn_t;



/************Scene game************/


typedef struct menu_card
{
//	menu_e		type; //ENUM À GERER MAIS COMMENT ?
	object_t	*ingr;
	struct menu	*next;
}menu_card_t;

/*
typedef struct ingr
{
	ingr_e		type;
	object_t	*ingr;
	struct ingr	*next;
}ingr_t;
*/

typedef struct game
{
	basic_scn_t	*game_scene;
	menu_card_t	*menu;
//	ingr_t		*ingr;
	music_game_t	*music;
	text_t		*game_text;
}game_t;



























/*
/************Scene pause************/
/*
typedef struct pause
{
	basic_scn_t	*pause_scene;
}pause_t;
*/


/************Scene menu************/
/*
typedef struct menu
{
	basic_scn	*menu_scene;
}menu_t;
*/

/************Scene how to play************/
/*
typedef struct htp
{
	basic_scn_t	*htp_scene;
	sfText		*text;
}htp_t;
*/


#endif		/*SCENE_H_*/
