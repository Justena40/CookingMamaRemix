/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** ire
*/

#include <unistd.h>
#include "my.h"

int     my_strlen_1(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int	my_strcmp(char const *s1, char const *s2)
{
	int i = 0;
	int nb_s1 = my_strlen_1(s1);
	int nb_s2 = my_strlen_1(s2);

	while (s1[i] == s2[i]) {
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i = i + 1;
	}
	if (nb_s1 > nb_s2)
		return (1);
	else
		return (1);
}
