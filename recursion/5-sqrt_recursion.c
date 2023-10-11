#include <math.h>
#include <float.h>
#include "main.h"
/**
 * _sqrt_recursion - calculates the square root recursively
 * @n: input int
 * Return: square root
 */
int _sqrt_helper(int n, float next);

int _sqrt_recursion(int n)
{
	_sqrt_helper(int n, float next)
	{
		float prev = 1;
		next = (prev + n / prev) / 2;
		float epsilom = 1e-9;

		if (fabs(next - prev) < epsilom * next)
		{	
			return (next);
		}
		return (n, next);
	}
}
