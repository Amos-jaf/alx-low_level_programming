#include "main.h"

/**
 * main - checks for remaining change
 * @argc: argument count
 * @argv: argument vector
 * Description: same
 * Return: (0) for sucess
 */

int main(int argc, char *argv[])
{
	char *s;
	int change_count;


	s = argv[1];
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change_count = check_change(s);
	if (change_count == -1)
	{
		printf("%d\n", 0);
	}
	printf("%d\n", change_count);
	return (0);
}

/**
 * check_change - function checks the change of an argument
 * @s: input string
 * Description: same
 * Return: (coint_count)
 */

int check_change(char *s)
{
	int num, i, coin_count;
	int arr_num[5] = {25, 10, 5, 2, 1};

	i = 0;
	coin_count = 0;
	num = atoi(s);
	if (num < 0)
	{
		return (-1);
	}
	while (i < 5)
	{
		if (num >= arr_num[i])
		{
			num -= arr_num[i];
			coin_count++;
			continue;
		}
		else
		{
			i++;
		}
	}
	return (coin_count);
}
