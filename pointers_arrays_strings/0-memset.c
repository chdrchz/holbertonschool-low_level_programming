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
	unsigned char byteValue = (unsigned char)b;
	unsigned char bytePtr = (unsigned char *)s;

	if (s == NULL || n == 0)
	{
		return NULL;
	}

	for (i = 0; i < n; i++)
	{
		s[b] = s[n];
		i++;
	}
}
