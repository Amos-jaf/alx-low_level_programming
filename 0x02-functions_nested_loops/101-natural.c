#include <stdio.h>

/**
 * main - function that computes and prints sum of factors of 3 and 5
 * Description: The function checks for if the loop value is a factor of 3
 * or 5 and divides sums that value with the sum of the previous factors
 * Return: (0)
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 102424; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
