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

	int *int_array = malloc(sizeof(int) * b);

	for (i = 0; i < b; i++)
	{
		b = int_array[i];
	}
	return (int_array);
}
