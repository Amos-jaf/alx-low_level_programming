#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - function that prints a diagonal line
 * @n: number of dashes to print
 * Description: function utilizes _putchar function and loops
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
