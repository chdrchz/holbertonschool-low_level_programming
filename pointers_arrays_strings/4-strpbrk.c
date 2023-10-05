#include "main.h"
/**
 * *_strpbrk - locates first occur of char from bytes in accept
 * @s: string
 * @accept: bytes
 * Return: pointer to the byte in s if matches accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
