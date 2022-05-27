#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 * Return: number of bits you would need to flip
 * to get from one number to another.
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int dif, i;
	unsigned int count, j;

	count = 0;
	i = 1;
	dif = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (i == (dif & i))
			count++;
		i <<= 1;
	}
	return (count);
}
