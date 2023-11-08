#include "function_pointers.h"

/**
 * array_iterator - function iterates through arrays and prints the items
 * @array: input array
 * @size: size of the array
 * @action: function pointer
 * Description: action function pointer calls the function that displays the
 * elements after passing each element in the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
