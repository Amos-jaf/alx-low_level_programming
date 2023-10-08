#include <stdio.h>

/**
 * main - prints a-z in lower case with exceptions
 * Description: loops through the ascii characters and prints each
 * character using putchar except letters e and q
 * Return: (0)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
