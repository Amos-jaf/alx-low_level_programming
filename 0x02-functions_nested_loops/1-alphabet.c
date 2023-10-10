#include "main.h"

/**
 * print_alphabet - function prints a-z in small letters
 * Description: The function loops through all the letters and utilizes
 * custom _putchar function to print each of the characters
 * Return: (0)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
