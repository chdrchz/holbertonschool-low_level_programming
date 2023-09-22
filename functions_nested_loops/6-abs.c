#include "main.h"
/**
 * _abs - this computes the absolute value of an integer
 * 
 * @x: variable to calculate absolute value
 * Return: the calculated absolute variable
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}
