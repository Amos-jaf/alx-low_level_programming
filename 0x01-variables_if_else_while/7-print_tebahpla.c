#include <stdio.h>

/**
 * main - Prints letters from z-a
 * Description: Loops throught the alphabet in reverse and prints each
 * character using the putchar function
 * Return: (0) for success
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
