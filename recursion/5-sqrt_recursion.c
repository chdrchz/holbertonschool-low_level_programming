#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - calculates the square root recursively
 * @n: input int
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int est;
	int new_est;

	if (n < 0)
	{
		return (-1);
	}

	est = n;
	new_est = 0.5 * (est + n / est);

	return (_sqrt_recursion(new_est));
}
