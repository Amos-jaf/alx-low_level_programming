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
			if (j < n)
				printf(", ");
		}
		printf("\n");
	}
	}
}

int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
