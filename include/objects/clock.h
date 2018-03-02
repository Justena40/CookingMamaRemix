/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** struc for clock
*/

#ifndef	CLOCK_H_
#define CLOCK_H_

typedef struct clock_object
{
	sfClock         *clock;
	sfTime          time;
	int		second;
}clocks_t;

#endif		/*CLOCK_H_*/
