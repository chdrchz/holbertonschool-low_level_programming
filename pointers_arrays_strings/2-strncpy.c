#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * *_strncpy - copies a string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0; i < n && src[i]; i++)
	{
		dest[dest_len] = src[i];
	}

	return (dest);
}
