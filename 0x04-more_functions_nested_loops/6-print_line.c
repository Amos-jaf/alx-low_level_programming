#include "main.h"
#include <unistd.h>

/**
 * print_line - function that prints line in the terminal
 * @n: number of dashes to print
 * Description: utilizes the _putchar function to print n number of dashes
 * to the terminal
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
