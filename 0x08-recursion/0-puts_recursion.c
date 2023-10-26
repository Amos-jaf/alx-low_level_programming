#include "main.h"

/**
 * _puts_recursion - function that prints string characters
 * @s: input string
 * Description: The function uses recursion to print the characters of a
 * string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
