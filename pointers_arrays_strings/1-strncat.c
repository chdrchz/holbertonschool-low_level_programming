#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatonate 2 strings at n bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	while (src[i] != '\0')
	{
		n = src[i];
		i++;
	}

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
