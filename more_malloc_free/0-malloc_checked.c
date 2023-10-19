#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - ?
 *
 * Return: a pointer to the array
 */
void *malloc_checked(unsigned int b)
{
	unsigned int i;
	int *int_array;

	int_array = malloc(sizeof(int) * b);

	if (int_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < b; i++)
	{
		int_array[i] = 0;
	}
	return (int_array);
}
