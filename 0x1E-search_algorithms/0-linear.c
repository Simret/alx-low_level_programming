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
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}