#include <stdlib.h>
#include "_strlen.c"
#include "main.h"
/**
 * *str_concat - concatonates 2 strings
 *
 * Return: pointer to combined strings
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *char_array;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	char_array = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (char_array)
	{
	
		for (i = 0; i <= _strlen(s1); i++)
		{
			char_array[i] = s1[i];
		}
		for (j = 0; j <= _strlen(s2); j++)
		{
			char_array[i] = s2[j];
			i++;
		}

		return (char_array);
	}
	else
	{
		return (0);
	}
}
