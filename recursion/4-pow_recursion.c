#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - prints a number to the power of another number recursively
 *
 * Return: the power of a number to a number
 */
int _pow_recursion(int x, int y)
{
	int p;

	if (y == 0)
	{
		return (1);
	}
	else 
	{
		p = x * _pow_recursion(x, y - 1);
	}
	return (p);
}
