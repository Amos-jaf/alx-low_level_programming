#include "main.h"

/**
 * array_range - function that creates an array of numbers
 * @min: starting number
 * @max: last number in the array
 * Description: creates an array and initializes the array with numbers
 * from min to max
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int arr_count, i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	arr_count = (max - min) + 1;
	array = malloc(sizeof(int) * arr_count);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < arr_count; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
