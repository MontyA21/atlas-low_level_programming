#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees grid from prev task
 * @grid: grid to free
 * @height: height of grid
 * Return: Void
*/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
