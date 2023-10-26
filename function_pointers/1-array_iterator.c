#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates through an array
 * @array: array to be iterated through 
 * @size: size of array 
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter;

	if (array != NULL && action != NULL)
	{
		for (counter = 0; counter < size; counter++)
		{
			action(array[counter]);
		}
	}
}
