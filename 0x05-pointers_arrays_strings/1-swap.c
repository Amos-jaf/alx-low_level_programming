#include "main.h"

/**
 * swap_int - function that swaps the values of 2 variables
 * @a: first variable
 * @b: second variable
 * Description: Utilizes a third variable to swap the numbers pointed to by
 * the pointer variables
 * Return: (void)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
