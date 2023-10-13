#include "main.h"
#include <unistd.h>

/**
 * more_numbers - function that prints 0 - 14
 * Description - utilizes _putchar function
 * Return: void
 */

void more_numbers(void)
{
	int i, j, tens, units;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			tens = i / 10;
			units = i % 10;

			if (units >= 0)
			{
				if (tens == 1)
				{
					_putchar(tens + '0');
				}
				_putchar(units + '0');
			}
		}
		_putchar('\n');
	}
}
