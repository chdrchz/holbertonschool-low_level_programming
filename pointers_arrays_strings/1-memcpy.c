#include "main.h"
/**
 * *_memcpy - copies bytes from memory area to dest
 * @dest: destination to copy memory to
 * @src: source of memory to copy
 * @n: number of bytes
 *
 * Return: dest with copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
