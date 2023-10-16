#include "main.h"

/**
 * print_array - function to print array in sequential format
 * @a: input array of numbers
 * @n: numbers of stored numbers to be printed
 * Description: Prints all numbers less than n stored in the array using
 * a loop
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
