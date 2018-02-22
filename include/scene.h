/*
** EPITECH PROJECT, 2018
** scene.h
** File description:
** scene structure
*/

#ifndef	SCENE_H_
#define SCENE_H_

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
	object_t		*;
	object_t		*obj;
}scene_m_t;


#endif 	/*SCENE_H_*/
