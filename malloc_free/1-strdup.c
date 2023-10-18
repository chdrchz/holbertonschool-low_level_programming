#include <stdlib.h>
#include "main.h"
#include "_strlen.c"
/**
 * *_strdup - duplicates a string in memory
 *
 * Return: pointer to array
 */
char *_strdup(char *str)
{
	int length = _strlen(str);
	int i;
	char *new_array;
	
	char *char_array = malloc(sizeof(str) * length + 1);
	
	if (str == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < length; i++)
	{
		char_array[i] = *new_array;
	}

	return (new_array);

	free(new_array);

}
