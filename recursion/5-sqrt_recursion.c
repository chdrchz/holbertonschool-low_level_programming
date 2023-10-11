#include <math.h>
#include <float.h>
#include "main.h"
/**
 * _sqrt_recursion - calculates the square root recursively
 * @n: input int
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int num = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else 
	{
		n = n - num;
		num = num + 2;
	}
	return (1 + _sqrt_recursion(n));
}
