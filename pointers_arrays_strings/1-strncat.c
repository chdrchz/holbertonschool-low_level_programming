#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * *_strncat - concatonate 2 strings at n bytes
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
