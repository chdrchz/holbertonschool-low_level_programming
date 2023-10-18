#include <stdlib.h>
#include "main.h"
/**
 * free_grid - freeing the previously allocated grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}
	free(grid);
}
