#include "main.h"

/**
 * print_number - function that uses putchar to print numbers
 * @n: input number
 * Description: Reduces the input number by dividing by 10
 * Return: (void)
 */

void print_number(int n)
{
	int i, factor, n_factor;

	n_factor = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n_factor < 0)
	{
		n_factor *= -1;
	}

	for (factor = 1; n_factor / factor > 0; factor *= 10)
	{
		continue;
	}
	factor /= 10;

	if (n < 0)
	{
		_putchar('-');
	}
	while (factor >= 1)
	{
		i = n_factor / factor;
		n_factor = n_factor % factor;
		_putchar(i + '0');
		factor /= 10;
	}
}
