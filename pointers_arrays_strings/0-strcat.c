#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatonates two strings
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		*ptr = '\0';
	}

	return (dest);
}
