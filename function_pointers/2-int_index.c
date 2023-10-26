#include "function_pointers.h"
/**
 * int_index - finds an int in an array of integers
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		cmp(size);

		if (cmp != 0)
		{
			return(int_index);
		}
		if (cmp == NULL)
		{
			return(-1);
		}
		if (size <= 0)
		{
			return(-1);
		}
	}
}
