#include <stdio.h>

/**
 * main - function that prints the first 50 fibonacci numbers
 * Description: The function iterates through a loop of 50 iterations and
 * adds the two previous numbers to produce a current number.
 * Return: (void)
 */

int main(void)
{
	int i;
	long int place_holder, current, prev;

	current = 2;
	prev = 1;
	printf("%ld, %ld, ", prev, current);

	for (i = 1; i < 49; i++)
	{
		place_holder = current;
		current += prev;
		prev = place_holder;
		printf("%ld", current);
		if (i < 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}
