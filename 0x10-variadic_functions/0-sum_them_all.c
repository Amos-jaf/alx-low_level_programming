#include "variadic_functions.h"

/**
 * sum_them_all - variadic function that sums all the arguments
 *@n: number of arguments
 *...: other numbers in argument
 * Description: Function utilizes stdarg to iterate through n number of
 * arguments and prints the sum of all of them
 * Return: (sum);
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list arg;

	sum = 0;
	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
