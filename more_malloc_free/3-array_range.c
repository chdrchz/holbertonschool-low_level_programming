#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *array_range - allocates memory to an array of integers
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *int_array;
	int size, counter_1;
	
	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(int) * size)

	if (int_array)
	{
		for (counter_1 = min; counter_1 < max; counter_1++)
		{
			return (int_array[counter_1]);
		}
	}
	else 
		return (NULL);
}
