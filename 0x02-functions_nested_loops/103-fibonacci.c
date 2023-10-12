#include <stdio.h>

/**
 * main - function that prints the even fibonacci numbers.
 * Description: The function loops through a series of iterations less
 * than 4000000 and it add=s the two previous numbers to
 * produce a current number and prints out only the even term
 * Return: (void)
 */

int main(void)
{
	long int place_holder, current, prev;

	current = 2;
	prev = 1;
	printf("%ld", current);

	while (current < 4000000)
	{
		place_holder = current;
		current += prev;
		prev = place_holder;
		if (current % 2 == 0)
		{
			printf(", ");
			printf("%ld", current);
		}
	}
	printf("\n");
	return (0);
}
