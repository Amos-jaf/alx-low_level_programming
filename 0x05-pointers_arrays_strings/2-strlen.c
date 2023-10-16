#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: input string
 * Description: Loops through characters of a string while counting each
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i,  count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
