#include "main.h"

/**
 * reverse_array - function reverses an array
 * @a: input array
 * @n: size of the array
 * Description: swaps the values of the array from both ends while
 * incrementing
 * Return: (void);
 */

void reverse_array(int *a, int n)
{
	int i, mid, num;

	mid = n / 2;
	for (i = 0; i < mid; i++)
	{
		num = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = num;
	}
}
