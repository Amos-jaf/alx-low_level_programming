#include <stdio.h>

/**
 * main - Print all the digits of the hexadecimal system
 * Description: Use first loop to iterate throught the numbers 0-9
 * then use the second loop to iterate from a-f
 * Return: (0) for success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
