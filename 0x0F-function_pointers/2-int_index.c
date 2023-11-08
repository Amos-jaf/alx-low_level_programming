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

int is_98(int elem)
{
    return (98 == elem);
}

int is_strictly_positive(int elem)
{
    return (elem > 0);
}

int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
  return (0);
}
