#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatonates two strings
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int n; 
	int i;
	dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i]; 
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
