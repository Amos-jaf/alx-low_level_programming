#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function for program that prints positive or negative number
 * Description: The function generates a random number and prints
 * the number whilst stating whether it is negative or positive
 * Return: (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
