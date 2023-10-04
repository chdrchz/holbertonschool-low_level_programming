#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatonates two strings
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len;
	dest_len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i]; 
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
