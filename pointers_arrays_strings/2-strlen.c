#include "main.h"
/**
 *  _strlen - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != 0)
	{
		i++;
	}

	return (i);
}
