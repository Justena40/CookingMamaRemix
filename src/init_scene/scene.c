/*
** EPITECH PROJECT, 2018
** scene.c
** File description:
** different scene are create
*/

#include "scene.h"

//VERIFIER LES SPRITES ET TEXTURE PDT INIT
//VERIFIER LES MUSIC AVANT DE COMMENCER LE JEU
//VERIFIER LE PATH ET LEXISTENCE DU TEXT AVANT D'ECRIRE

int	create_scene()
{
	basic_scn_t	*pause = malloc(sizeof(basic_scn_t));
	basic_scn_t	*menu = malloc(sizeof(basic_scn_t));
	basic_scn_t	*htp = malloc(sizeof(basic_scn_t));

	if (pause == NULL || menu == NULL || htp == NULL)
		return (ERROR);
	init_pause(pause);
	intit_menu(menu);
	init_htp(htp);
	return (SUCCESS);
}
