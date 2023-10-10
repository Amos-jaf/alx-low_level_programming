#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - function prints a-z 10 times
 * Description: This function utilizes loops and custoom putchar function
 * to print a-z 10 times
 * Return: (0)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
