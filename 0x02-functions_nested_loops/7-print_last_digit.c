#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: specified input argument
 * Description: Function accepts an argument and keeps dividing integer by
 * 10 until it can no longer divide
 * Return: (last_digit);
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit >= 0)
	{
		_putchar('0' + last_digit);
		return (0);
	}
	else if (last_digit < 0)
	{
		last_digit *= (-1);
		_putchar('0' + last_digit);
		return (0);
	}
	else
		return (1);
}
