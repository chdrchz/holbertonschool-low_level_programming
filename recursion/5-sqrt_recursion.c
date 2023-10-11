#include <math.h>
#include <float.h>
#include "main.h"
/**
 * _sqrt_recursion - calculates the square root recursively
 * @n: input int
 * Return: square root
 */
int _sqrt_recursion_helper(int n, int num)
{
	if (num * num > n)
	{
		return (-1);
	}
	else if (num * num == n)
	{
		return (num);
	}
	else 
	{
		return (_sqrt_recursion_helper(n, num));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else 
	{
		return (_sqrt_recursion_helper(n, 1));
	}
}
