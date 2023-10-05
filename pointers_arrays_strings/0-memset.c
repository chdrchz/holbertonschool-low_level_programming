#include "main.h"
#include <stdio.h>
/**
 * *_memset - ?
 *
 * Return: ?
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;
}
