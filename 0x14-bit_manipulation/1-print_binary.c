#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base ^ power)
 **/

unsigned long int _pow(unsigned int base, unsigned int power)

{
	unsigned long int x;
	unsigned int i;

	x = 1;

	for (i = 1; i <= power; i++)
		x *= base;
	return (x);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Return: void
 **/

void print_binary(unsigned long int n)

{
	unsigned long int div, i;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		i = n & div;
		if (i == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
