/*
** EPITECH PROJECT, 2017
** my_strndup
** File description:
** l
*/

#include <stdlib.h>
#include "my.h"

char	*my_strndup(char const *src)
{
	char	*dest;
	int	count = 0;
	int	lenght = 0;

	lenght = my_strlen(src);
	dest = malloc(sizeof(char) * (lenght + 1));
	if (dest == NULL)
		return (NULL);
	while (count < lenght) {
	dest[count] = src[count];
	count = count + 1;
	}
	dest[count] = '\0';
	return (dest);

}
