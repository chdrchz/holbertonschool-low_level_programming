#include "search_algos.h"
/**
 * linear_search - searches an array for value using linear search
 *
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: On Success: 1
 * On Failure: -1
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			printf("Found at index: %ld\n", value);
	}
	return (1);
}
