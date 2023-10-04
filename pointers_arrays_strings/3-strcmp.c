#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compare two strings
 *
 * Return: ?
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			if (*s1 < *s2)
			{
				return (-1);
			}
			else
			{
				return (1);
			}
		}
	}	
}
