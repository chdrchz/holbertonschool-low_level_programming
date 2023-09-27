#include "main.h"
#include <stdio.h>
/**
 * _isdigit - determines if variable is a digit between 1 and 9
 * @c: variable
 * Return: 1 if c is a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
