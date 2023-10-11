#include "main.h"

/**
 * jack_bauer - function that prints each minute of 24 hours
 * Description: Utilizes nested loops to print 24 hours
 * Return: (void)
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (i <= '2' && j <= '3' && k <= '5' && l <= '9')
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
					else
						break;
				}
			}
		}
	}
}
