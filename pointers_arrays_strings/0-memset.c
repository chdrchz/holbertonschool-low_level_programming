#include "main.h"
#include <stdio.h>
/**
 * *_memset - ?
 *
 * Return: ?
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	if (s == NULL || n == 0)
	{
		return NULL;
	}

	for (i = 0; i < n; i++)
	{
		b = b + '0';
		s[n] = s[i];
		s[i] = s[b];
		i++;
	}
	return s;
}
