#include "function_pointers.h"
/**
 * int_index - finds an int in an array of integers
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array != NULL && cmp != NULL)
	{
		for (counter = 0; counter < size; counter++)
		{
			if (cmp(array[counter]) == 0)
			{
				return (counter);
			}
		}
	}

	return (-1);
}
