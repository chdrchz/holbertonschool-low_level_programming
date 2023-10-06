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
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += a[i];
		}	
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i != j)
			{
				sum2 += a[i * size + j];
			}
		}
	}

	printf("%d, ", sum1);
	printf("%d", sum2);
}

