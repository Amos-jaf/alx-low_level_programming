#include "main.h"

/**
 * main - function that multiplies two arguments passed to a program
 * @argc: argument count
 * @argv: argument vector
 * Description: Checks for if the arguments passed == 2, then multiplies
 * the arguments
 * Return: (0) for success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a_num, b_num;
		char *a, *b;

		a = argv[1];
		b = argv[2];
		a_num = to_int(a);
		b_num = to_int(b);
		printf("%d\n", a_num * b_num);
	}
	return (0);
}

/**
 * to_int - helper function to convert arguments to integers
 * @s: string argument to to be converted to integer
 * Description: function converts string to integer
 * Return: (num)
 */

int to_int(char *s)
{
	int num, check;

	num = 0;
	check = 1;
	if (s[0] == '-')
	{
		check = -1;
		s++;
	}
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			return (-1);
		}
		num = num * 10 + (*s - '0') % 10;
		s++;
	}
	return (num * check);
}
