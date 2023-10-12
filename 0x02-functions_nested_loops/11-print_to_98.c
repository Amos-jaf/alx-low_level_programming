#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function prints all numbers up to 98
 * @n: input argument
 * Description: function iterates from input number up to 98 via a loop
 * that counts upwards or downwards depending on the initial number
 * Return: (void)
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", 98);
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", 98);
	}
	else if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", 98);
	}

}
