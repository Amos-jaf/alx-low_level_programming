#include "main.h"
#include <unistd.h>

/**
 * print_square - function prints a square
 * @size: input to specify the number of # used for the square
 * Description: function utilizes loops and #
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
