#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: byte size
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
