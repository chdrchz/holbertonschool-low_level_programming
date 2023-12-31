#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creating an array and initializing its memory
 * @size: size of array
 * @c: char to initialize array
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *char_array = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (char_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		char_array[i] = c;
	}

	return (char_array);
}
