#include <stdio.h>

/**
 * main - print unique 3 digits
 * Description: loop through 3 digits whilst printing unique combinations
 * of these numbers and avoid repeating reverse sequences
 * Return: (0) for success
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i != j && j != k && i != k)
				{
					if (i < j && j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i < '7')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}	
			}
		}
	}
	putchar('\n');
	return (0);
}
