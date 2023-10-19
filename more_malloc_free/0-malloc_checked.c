#include "main.h"
/**
 * *malloc_checked - ?
 *
 * Return: a pointer to the array
 */
void *malloc_checked(unsigned int b)
{
	int i;

	int *int_array = malloc(sizeof(int) * 4);

	for (i = 0; i < b; i++)
	{
		int_array[i] = b[i];
	}
	return (int_array);
}
