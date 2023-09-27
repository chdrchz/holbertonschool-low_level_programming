#include "main.h"
#include <stdio.h>
/**
 * isupper - reads if the value is an uppercase letter
 *
 * Return: 1 if it is an uppercase letter, 0 if it is not
 */
int isupper(int c)
{
	if (c <= 'A' || c >= 'Z') 
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
