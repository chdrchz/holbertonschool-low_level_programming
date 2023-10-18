#include "main.h"
#include "3-alloc_grid.c"
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
		free(grid[i]);
	}
	free(grid);
}
