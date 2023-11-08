#include "function_pointers.h"

/**
 * int_index - function that checks for a particular number match
 * @array: input array
 * @size: size of the array
 * @cmp: function pointer to helper function that checks for a specific
 * number
 * Description: function checks a number in array to match the number
 * specified by the helper function
 * Return: the index of the number match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
