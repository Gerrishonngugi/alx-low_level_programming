include "main.h"

/**
 * _islower- lowercase character checks
 *
 * @c : character
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
