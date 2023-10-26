#include "function_pointers.h"
/**
 * int_index - finds an int in an array of integers
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size < 0 || cmp == NULL || array == NULL)
		return (-1);
	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
			return (counter);
	}
	return (-1);
}
