#include "main.h"
/**
 * get_bit - Retrieves value of a bit at specified index in a decimal number
 * @n: The decimal number to search within
 * @index: The index of the bit to retrieve 0-based
 *
 * Return: The value of the bit 0 or 1 at specified index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
