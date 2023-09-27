#include "main.h"
#include <stdio.h>
/**
 * isupper - reads if the value is an uppercase letter
 *
 * Return: 1 if it is an uppercase letter, 0 if it is not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90) 
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
