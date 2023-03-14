#include "main.h"
/**
 * free_grid - function to free a 2 dimensional grid.
 * @grid: int parameter.
 * @height: int parameter.
 * Return: grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
