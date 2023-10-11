#include <math.h>
#include <float.h>
#include "main.h"

int _sqrt_recursion_helper(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion_helper - finds the natural square root
 * @num: the number we are finding the square root of
 * @root: the root to be tested if natural or not
 * Return: if natural square root, root. if not, -1
 */

int _sqrt_recursion_helper(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
		return (_sqrt_recursion_helper(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: if n has a natural sqrt, root. if not, -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion_helper(n, root));
}
