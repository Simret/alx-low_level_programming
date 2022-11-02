#include "search_algos.h"

/**
 * linear_search - use linear search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: -1 if value is not found else return the first index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
