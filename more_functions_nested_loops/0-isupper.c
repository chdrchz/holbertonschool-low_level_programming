#include "main.h"
#include <stdio.h>
/**
 * _isupper - reads if the value is an uppercase letter
 * @c: variable
 * Return: 1 if it is an uppercase letter, 0 if it is not
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
