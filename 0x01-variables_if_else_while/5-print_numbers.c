#include <stdio.h>

/**
 * main - Print all digits of the decimal system
 * Description: Loop through all the numbers and print each using putchar
 * Return: (0) for success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
