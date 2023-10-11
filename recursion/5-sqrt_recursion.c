#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - calculates the square root recursively
 * @n: input int
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	int est = n;
	new_est = 0.5 * (est + n / est);

	return (_sqrt_recursion(n));
}
