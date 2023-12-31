#include "main.h"

/**
 * alloc_grid - function that creates a 2 x 2 grid
 * @width: number of colums
 * @height: number of rows
 * Description: function returns a pointer to a matrix
 * Return: 2 D array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(array[k]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
