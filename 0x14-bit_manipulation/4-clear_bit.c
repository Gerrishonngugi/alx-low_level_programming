#include "main.h"

/**
 * clear_bit - set value of bit to 0
 * @n: point to changed number
 * @index: cleared bit index
 *
 * Return: 1 for pass, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
