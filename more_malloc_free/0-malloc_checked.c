#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocating memory to an unkown data type
 * @b: the data type to be specified 
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return(ptr);
}
