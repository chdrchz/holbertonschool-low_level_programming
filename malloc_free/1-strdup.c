#include <stdlib.h>
#include "main.h"
#include "_strlen.c"
/**
 * *_strdup - duplicates a string in memory
 * @str: string to be copied in memory
 * Return: pointer to array
 */
char *_strdup(char *str)
{
	int i;
	char *char_array;

	if (!str)
	{
		return (0);
	}

	char_array = malloc(_strlen(str) + 1);

	if (!char_array)
	{
		return (0);
	}

	for (i = 0; i <= _strlen(str); i++)
	{
		char_array[i] = str[i];
	}

	return (char_array);
}
