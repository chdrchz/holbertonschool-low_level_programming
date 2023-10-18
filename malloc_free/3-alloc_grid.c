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
	int w_counter, h_counter, i, **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid)
	{
		for (h_counter = 0; h_counter < height; h_counter++)
		{
			grid[h_counter] = (int *)malloc(sizeof(int) * width);
			if (!grid[h_counter])
			{
				for (i = 0; i < h_counter; i++)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
		}
		for (h_counter = 0; h_counter < height; h_counter++)
		{
			for (w_counter = 0; w_counter < width; w_counter++)
			{
				grid[h_counter][w_counter] = 0;
			}
		}
		return (grid);
	}
	else
		return (NULL);
}
