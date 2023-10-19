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
	unsigned int counter_1, counter_2, length_1, length_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_1 = _strlen(s1);
	lenght_2 = _strlen(s2);
	
	if (n >= length_2)
		n = length_2;
	
	str_concat = malloc(length_1 + n + 1);

	if (str_concat)
	{
		for (counter_1 = 0; counter_1 < length_1; counter_1++)
		{
			str_concat[counter_1] = s1[counter_1];
		}
		for (counter_2 = 0; counter_2 < n; counter_2++)
		{
			str_concat[counter_1] = s2[counter_2];
			counter_1++;
		}
		str_concat[counter_1] = '\0';
		return (str_concat);
	}
	else 
		return (NULL);
}
