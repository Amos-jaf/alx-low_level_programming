#include "main.h"

/**
 * _strchr - function that returns a pointer to the first occurence of a string
 * @s: input string
 * @c: The charater to be found
 * Description: Loops through the input string and searches for the first
 * character c
 * Return: (s) for success and NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
