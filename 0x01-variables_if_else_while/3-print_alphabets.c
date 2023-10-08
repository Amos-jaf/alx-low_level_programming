#include <stdio.h>

/**
 * main - prints a-z in both lower and upper case
 * Description: loops through the ascii characters and prints each
 * character using putchar
 * Return: (0)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
