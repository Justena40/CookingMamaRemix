/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** display the usage of the game
*/

#include <unistd.h>
#include "my.h"

void	display_usage(void)
{
	write(1, "It's time to cook !\n\n", 21);
	write(1, "USAGE\n", 6);
	write(1, "    ./my_cook\n\n\n", 17);
	write(1, "OPTION\n", 7);
	write(1, "-h  -> print the usage and quit.\n\n\n", 36);
	write(1, "USER INTERACTIONS\n", 19);
	write(1, "ESCAPE -> pause the game.\n", 27);
}
