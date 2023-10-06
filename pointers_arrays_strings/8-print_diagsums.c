#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_diagsums - printing the sum of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += a[i];
		}
		if (i % (size - 1) == 0 && i != 0 && i != (size - 1) * size)
		{
			sum2 += a[i];
		}
	}
	_putchar(sum1);
	_putchar(sum2);
}
