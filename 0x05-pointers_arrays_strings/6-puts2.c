#include "main.h"

/**
 * puts2 - function prints alternate characters starting from the first
 * @str: input string
 * Description: Prints alternate characters using loop
 * Return: (void)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
