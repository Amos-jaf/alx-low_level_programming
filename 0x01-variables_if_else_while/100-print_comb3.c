#include <stdio.h>

/**
 * main - Print unique two digit numbers
 * Description: prints only numbers that are truly unique by excluding
 * repeating similar numbers or reversed patterns
 * Return: (0) for success
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i && i != j)
			{
				putchar(i);
				putchar(j);
				if (i < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
