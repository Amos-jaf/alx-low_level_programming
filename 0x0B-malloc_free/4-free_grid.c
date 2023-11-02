#include "main.h"

/**
 * free_grid - functions that frees memory from a 2 D array
 * @grid: input 2 D array
 * @height: number of rows in the array
 * Description: loops through the rows of a 2 D array and frees the memory
 * Return: void
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
