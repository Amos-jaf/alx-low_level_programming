#include "main.h"
#include <unistd.h>

/**
 * print_numbers - function that prints numbers form 0 - 9
 * Description: loops through the numeric characters and uses _putchar
 * function to print each followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
