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
	unsigned char byteValue = (unsigned char)n;
	unsigned char bytePtr = (unsigned char *)s;

	if (s == NULL || n == 0)
	{
		return NULL;
	}

	for (i = 0; i < byteValue; i++)
	{
		bytePtr[i] = bytePtr[b];
		i++;
	}
}
