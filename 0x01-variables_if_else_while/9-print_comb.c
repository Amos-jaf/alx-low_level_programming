#include <stdio.h>

/**
 * main - prints numbers from 0-9 separated by ,
 * Description: loops through 0-9 adds space and , after ever digit
 * Return: (0) for success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' '); 
		}
	}
	putchar('\n');
	return (0);
}
