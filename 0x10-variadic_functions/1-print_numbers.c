#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers of variable arguments
 * @separator: string or character that separates printed arguments
 * @n: number of arguments
 * ...: variable number of arguments
 * Description: the function uses stdarg.h and its funtions to  print all
 * arguments (intergers) passed into it
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(arg, int));
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(arg);
}
