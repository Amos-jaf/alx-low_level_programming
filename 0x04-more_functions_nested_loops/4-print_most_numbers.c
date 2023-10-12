#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - function that prints 0 - 9 excluding 2 and 4
 * Description: The function iterates through the numeric characters and
 * prints only desired characters
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}

int main(void)
{
    print_most_numbers();
    return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
