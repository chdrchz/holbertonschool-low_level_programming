#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *array_range - allocates memory to an array of integers
 * @min: start point for array range
 * @max: end point for array range
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *int_array;
	int total_size, counter_1;

	total_size = ((max + 1) - min);

	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(int) * total_size);

	if (int_array)
	{
		for (counter_1 = 0; counter_1 < total_size; counter_1++)
		{
			int_array[counter_1] = min + counter_1;
		}
		return (int_array);
	}
	else 
		return (NULL);
}
