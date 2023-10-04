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
	int *p;
	int tmp;

	*p = *a;

	for (i = 1; i < n; i++)
	{
		p++;
	}
	for (j = 0; j < i / 2; j++)
	{
		tmp = a[j];
		a[j] = *p;
		*p = tmp;
		p--;
	}
}
