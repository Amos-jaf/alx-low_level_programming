#include "main.h"
#include <unistd.h>

/**
 * print_sign - function that checks for postive, negative and zero number
 * @n: The number to be checked
 * Description: Uses conditional statement to check if number is positive,
 * negative or zero and returns 1, -1 or zero respectively
 * Return: (1) or (0) or (-1)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
