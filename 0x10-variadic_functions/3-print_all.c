#include "variadic_functions.h"

/**
 * print_all - function to print all kinds of arguments
 * @format: the specified formats for the arguments to be printed
 * ...: variable number of arguments to be printed
 * Description: function checks for the format and prints it out
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str;
	char *separator = "";
	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg, double));
					break;

				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
		printf("\n");
	}
}
