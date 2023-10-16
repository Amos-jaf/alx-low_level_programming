#include "main.h"

/**
 * _puts - function prints out the entire string
 * @str: input string to function
 * Description: loops through enitire string while printing out each
 * character using _putchar()
 * Return: (void)
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
