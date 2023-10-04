#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @n: number of elements in array
 *
 * Return: the reversed array at n items in array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; (i < (n - 1) / 2); i++)
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
}
