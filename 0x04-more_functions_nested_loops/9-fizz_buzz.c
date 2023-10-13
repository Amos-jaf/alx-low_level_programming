#include "main.h"

/**
 * main - function that does the fizzbuzz challenge
 * Description: The program prints from 1 - 100 but replaces multiples of
 * 3 and 5 by the words fizz and buzz respectively by using conditionals
 * Return: (0)
 */

int main(void)
{
	int i;

	printf("%d", 1);
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d ", i);
		}
	}
	printf("\n");
	return (0);
}
