#include "main.h"
#include "3-alloc_grid.c"
/**
 * free_grid - freeing the previously allocated grid
 *
 * Return: void
 */
int **alloc_grid(int width, int height);

void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}
	free(grid);
}
