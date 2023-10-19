#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - ?
 *
 * Return: a pointer to the array
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
