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
	float epsilon = 1e-9;
	float prev;
	float next = (prev + n / prev) / 2;

	if (fabs(next - prev) < epsilon * next)
	{
		return (next);
	}
	return (_sqrt_recursion(n))
}
