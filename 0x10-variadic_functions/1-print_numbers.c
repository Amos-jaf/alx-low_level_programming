#include "variadic_functions.h"

/**
 * print_strings - function that prints string
 * @separator: string or character that separates the arguments
 * @n: number of arguments
 * ...: variable number of arguments
 * Description: The function prints a variable number of strings separated
 * by a separator
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg;
	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
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
