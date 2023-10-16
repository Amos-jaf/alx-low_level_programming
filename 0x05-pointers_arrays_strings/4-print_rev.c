#include "main.h"

/**
 * print_rev - function that prints in reverse a string
 * @s: input string
 * Description: starts printing characters from the end of the string
 * Return: (void)
 */

void print_rev(char *s)
{
	int  count;

	for (count = 0; s[count] != '\0'; count++)
	{
		continue;
	}

	count--;
	while (count >= 0)
	{
		printf("%d", count);
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
