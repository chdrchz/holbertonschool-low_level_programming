#include "main.h"
#include <stdio.h>
/**
 * _atoi - returns the ASCII conversion of a string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t')
	{
		s++;
	}

	if (*s == '-');
	{
		sign = -1;
		s++;
	}
	
	while (*s >= '0' && *s <= '9' )
	{
		i = i * 10 + (*s - '0');
		s++;
	}

	return (i * sign);
}
