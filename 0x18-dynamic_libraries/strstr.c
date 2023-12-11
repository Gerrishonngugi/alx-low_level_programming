#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds first incident of substring needle in haystack
 * @haystack : string
 * @needle : string
 * Return:  pointer to beginning of the located substring,
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		j = 0;

		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return ('\0');
}
