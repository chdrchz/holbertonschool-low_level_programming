#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creating an array and initializing its memory
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	int *char_array;

	char_array = (char*) malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	free(char_array);

	return (*char_array);
}
