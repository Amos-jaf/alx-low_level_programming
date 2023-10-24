#include "main.h"

/**
 * print_diagsums - function prints the sum of diagonal
 * @a: input array
 * @size: the size of the array
 * Description: The function prints the diagonal sums in both directions
 * of an array
 * Return: (void)
 */

void print_diagsums(int *a, int size)
{
	int i, j, count1, count2;

	count1 = 0;
	count2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				count1 += a[i * size + j];
			}
			if (j == size - i - 1)
			{
				count2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", count1, count2);
}
