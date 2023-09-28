#include "main.h"
#include <unistd.h>
/**
 * _putchar - Outputs a single character to the standard output (stdout)
 * @c: The character to be printed
 *
 * Return: On success, 1 is returned.
 * On error, -1 is returned, and the errno variable is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
