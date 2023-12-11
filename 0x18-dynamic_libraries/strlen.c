#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: string to measure
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		++len;
	return (len);
}
