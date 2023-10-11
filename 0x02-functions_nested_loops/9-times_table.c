#include "main.h"

/**
 * times_table - Prints multiples from 1 - through 9
 * Description: Utilizes two loops for the multiplier function to print
 * the times table from 0 through 9
 * Return: (void)
 */

void times_table(void)
{
	int base, multiplier, value, tens, units;

	for (multiplier = 0; multiplier <= 9; multiplier++)
	{
		for (base = 0; base <= 9; base++)
		{
			value = base * multiplier;
			if (value <= 9)
			{
				_putchar(value + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((value > 9) && (value <= 81))
			{
				tens = value / 10;
				units = value % 10;
				_putchar(tens + '0');
				_putchar(units + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
