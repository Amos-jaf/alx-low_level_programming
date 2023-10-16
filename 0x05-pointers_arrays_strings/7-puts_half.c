#include "main.h"

/**
 * puts_half - function that prints the later half of a string
 * @str: input string
 * Description: finds length of the string then prints out the later half
 * Return: (void)
 */

void puts_half(char *str)
{
	int str_len, i, mid;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}

	mid = str_len / 2;
	if (str_len % 2 == 1)
	{
		mid++;
	}
	for (i = mid; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
