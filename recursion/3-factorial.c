#include <stdio.h>
#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to caculate factorial
 * Return: factorial of an int
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
