#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - allocates memory to a 2D array
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int w_counter;
	int h_counter;
	int *width_array;
	int *height_array;

	if (width_array <= 0 || height_array <= 0)
	{
		return (0);
	}

	width_array = malloc(sizeof(int) * width);
	height_array = malloc(sizeof(int) * height);
	
	if (width_array && height_array)
	{	
		for (w_counter = 0; w_counter <= width; w_counter++)
		{
			width_array[w_counter] = width[w_counter];
		}
		for (h_counter = 0; h_counter <= height; h_counter++)
		{
			height_array[h_counter] = height[h_counter];
		}
		return (width_array);
		return (height_array);
	}
	else 
	{
		return (0);
	}
}
