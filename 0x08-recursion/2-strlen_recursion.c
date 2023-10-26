#include "main.h"

/**
 * _strlen_recursion - function that prints the length of a string
 * @s: input string
 * Description: The function uses recursion to print the length of a string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
