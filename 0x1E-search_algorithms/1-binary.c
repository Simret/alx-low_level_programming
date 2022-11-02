#include "search_algos.h"
/**
 * binary_search - func
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:is the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, x, y, z;

	if (array == NULL)
		return (-1);
	x = 0;
	y = size - 1;
	while (x <= y)
	{
		z = (x + y) / 2;
		printf("Searching in array:");
		printf(" %d", array[x]);
		for (i = x + 1; i <= y; i++)
			printf(", %d", array[i]);
		printf("\n");
		if (array[z] < value)
			x = z + 1;
		else if (array[z] > value)
			y = z - 1;
		else
			return (z);
	}
	return (-1);
}
