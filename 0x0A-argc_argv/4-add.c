#include "main.h"

/**
 * main - function that adds positive integer arguments
 * @argc: number of arguments
 * @argv: argument vector
 * Description: Function adds only positive arguments.
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int added_num, num, i;

	added_num = 0;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			num = to_int(argv[i]);
			if (num == -1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				added_num += num;
			}
			i++;
		}
	printf("%d\n", added_num);
	return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
}

/**
 * to_int - functiont that converts a string number to an integer
 * @s: input string for conversion
 * Description: it converts the string to an integer
 * Return: an integer when successful
 */


int to_int(char *s)
{
	int num;

	num = 0;
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			return (-1);
		}
		num = num * 10 + (*s - '0') % 10;
		s++;
	}
	return (num);
}
