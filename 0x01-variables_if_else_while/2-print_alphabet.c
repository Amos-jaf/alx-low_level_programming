#include <stdio.h>

/**
 * main - prints all the letters of the alphabet in lower case
 * Description: loops through the ascii characters and prints each
 * character using putchar
 * Return: (0)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
