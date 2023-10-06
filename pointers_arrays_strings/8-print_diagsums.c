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
	int i, j;

	i = 0;
	
	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar(a[i][j]);
			j++;
		}

		_putchar('\n');
		i++;
	}

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i][i];
		size = size + a[i][size - i - 1]
	}
}
