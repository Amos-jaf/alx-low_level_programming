#include "main.h"

/**
 * main - function prints all the arguemnts passed to a program
 * @argc: argument count
 * @argv: argument vector
 * Description: Loops through all the arguments passed and prints each
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (argc)
	{
		printf("%s\n", argv[i]);
		i++;
		argc--;
	}
	return (0);
}
