#include <stdlib.h>
#include "_strlen.c"
#include "main.h"
/**
 * *string_nconcat - concatonates two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes
 * Return: a ptr to a new spot in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	int length_1, length_2, counter_1, counter_2;

	str_concat = malloc(_strlen(s1) + (_strlen(s2) - n));

	if (str_concat)
	{
		for (counter_1 = 0; counter_1 < length_1; counter_1++)
		{
			str_concat[counter_1] = s1[counter_1];
		}
		for (counter_2 = 0; counter_2 < length_2; counter_2++)
		{
			str_concat[counter_2] = s2[counter_2];
			counter_1++;
		}
		str_concat[counter_2] = '\0';
		return (str_concat);
	}
	else 
	{
		return (NULL);
	}
}
