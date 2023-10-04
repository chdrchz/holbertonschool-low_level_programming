#include "main.h"
#include <stdio.h>
/**
 * *cap_string - capitalizes the first letter of a word in a string
 * @k: string variable
 *
 * Return: k (the capitalized string)
 */
char *cap_string(char *k)
{
	int i = 0;
	int j;
	int cspc = 13;
	int spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (k[i])	
	{
		j = 0;

		while (j < cspc)
		{
			if ((i == 0 || k[i] - 1 == spc[j]) && (k[i] >= 97 && k[i] <= 122))
			{
				k[i] -= 32;
			}

			j++;
		}
	i++;
	
	}

	return (k);
}
