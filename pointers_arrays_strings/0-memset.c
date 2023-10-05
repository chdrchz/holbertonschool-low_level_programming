#include "main.h"
#include <stdio.h>
/**
 * *_memset - stores memory from a variable
 * @s: pointer to a char
 * @b: location for memory to be stored
 * @n: byte size
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
