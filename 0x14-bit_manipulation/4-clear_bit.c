#include"main.h"
/**
 * clear_bit - Clears (sets to 0) the value of a bit at a specified index
 * @n: A pointer to the number in which the bit should be cleared
 * @index: The index of the bit to clear (0-based)
 *
 * Return: 1 for success, -1 for failure (if index is out of range)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
