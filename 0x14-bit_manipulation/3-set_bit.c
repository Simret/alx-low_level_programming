#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to set to 1
 * @index: index at which to set bit to 1
 * Return: 1 if it is setted to 1, or -1 if an error occurred
 **/

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	*n = *n | x;
	return (1);
}
