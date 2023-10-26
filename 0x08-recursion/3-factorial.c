#include "main.h"

/**
 * factorial - function that prints the factorial of a number
 * @n: input number
 * Description: The function recursively calculates the factorial of a given
 * number
 * Return: num
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
