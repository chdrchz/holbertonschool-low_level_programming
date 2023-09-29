#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_array - printing an array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	if (i < n - 1)
	{
		printf(", ");
	}
	_putchar('\n');
}
