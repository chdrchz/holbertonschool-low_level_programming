#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * *_strcpy - copies a string from source to destination
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;	

	len = _strlen(src);

	for (i = 0; i <= len; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
