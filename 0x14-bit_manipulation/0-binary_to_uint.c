#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @p: Pointer to a string of 0 and 1 chars.
 * Return: Integer.
 **/

unsigned int binary_to_uint(const char *b)

{
	unsigned int decimal = 0, rem = 0, weight = 1;

	if(b == NULL)
		return (0);

	while (b != 0)
	{
		rem = binary % 10;
		decimal = decimal + rem*weight;
		binary = binary / 10;
		weight = weight*2;
	}	
	return (decimal);
}	
