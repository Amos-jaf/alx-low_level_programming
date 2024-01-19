#include "main.h"

/**
 * array_range - function that creates an array of ranges dynamically
 * @min: Minimum value in the array
 * @max: Maximum value in the array
 *
 * Description: The array is declared and memory is set dynamically
 * to have a size appropriate to contain values ranging from min to max
 * Return: The pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr_int;
	int i;

	if (min > max)
		return (NULL);
	arr_int = malloc(sizeof(int) * ((max - min) + 1));
	if (arr_int == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		arr_int[i] = min;
	}

	return (arr_int);
}
