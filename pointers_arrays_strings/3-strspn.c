#include "main.h"
#include <stdio.h>
/**
 * _strspn - matches string prefix
 * @s: string
 * @accept: number of bytes
 *
 * Return: returns number of initial bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
			
	}

	return (j);
}
