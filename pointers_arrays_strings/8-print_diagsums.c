#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_diagsums - printing the sum of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size) {
	
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", sum1);
	printf("%d", sum2);
	_putchar('\n');
}
