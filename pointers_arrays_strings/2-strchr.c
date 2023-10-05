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

	while (s[i])
	{
		if (*s == c)
		{
			break;
		}

		*s++;
	}
	return (s);
}
