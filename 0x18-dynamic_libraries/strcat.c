#include <stdio.h>
#include "main.h"

/**
 * _strcat - updates value it points to 98
 * @dest : array
 * @src : numbers of elements array
 * Return: s length
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
