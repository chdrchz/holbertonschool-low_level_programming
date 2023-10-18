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
	
	char *char_array = malloc(sizeof(char) * length + 1);
	
	if (str == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < length; i++)
	{
		char_array[i] = str[i];
	}
	
	char_array[length] = '\0';

	return (char_array);
}
