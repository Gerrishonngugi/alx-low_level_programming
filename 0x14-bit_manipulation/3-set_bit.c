#include"main.h"
/**
 * set_bit - Sets the value of a bit at a specified index to 1
 * @n: A pointer to the number in which the bit should be set
 * @index: The index of the bit to set to 1 (0-based)
 *
 * Return: 1 for success, -1 for failure (if index is out of range)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
