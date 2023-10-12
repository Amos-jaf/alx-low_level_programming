#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_times_table - prints the multiplication tables of number
 * @n: input arguement
 * Description: function prints the multiplication table of numbers specified
 * by the input argument
 * Return: (void)
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j);
			if (j < n && n <= 9)
				printf(",   ");
			else if ((j < n) && (n > 9) && (n <= 99))
				printf(",  ");
			else if ((j < n) && (n > 99) && (n <= 999))
				printf(", ");

		}
		printf("\n");
	}
	}
}
