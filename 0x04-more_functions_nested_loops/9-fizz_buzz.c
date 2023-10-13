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

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
