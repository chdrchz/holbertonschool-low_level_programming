#include "main.h"
/**
 * *_memcpy - copies bytes from memory area to dest
 *
 * Return: dest with copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char tmp;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		tmp = src[i];
	       	src[i] = dest;
	}

	return (dest);
}
