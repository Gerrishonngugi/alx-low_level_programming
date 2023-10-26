#include "main.h"

/**
 * set_bit - set bit at a given index to 1
 * @n: points to changed number
 * @index: index of the bit to set to 1
 *
 * Return: 1 for pass, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
