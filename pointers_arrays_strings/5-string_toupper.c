#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - returns an uppercase value of a character
 * @p: input character
 *
 * Return: uppercase value
 */
char *string_toupper(char *p)	
{
	int i = 0;

	while (p[i])
	{

		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}

		i++;
	}

	return (p);
}
