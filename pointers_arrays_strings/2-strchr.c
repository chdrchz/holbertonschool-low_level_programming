#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string 
 * @c: char to be found in string
 *
 * Return: a pointer to the first occurence of c in a string, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else 
		{
			return NULL;
		}
	}
}
