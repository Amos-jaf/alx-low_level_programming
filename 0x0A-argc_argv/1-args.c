#include "main.h"

/**
 * main - print the count of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector
 * Description: This displays the number of arguments passed excluding
 * function name
 * Return: (count)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count;

	while (argc > 1)
	{
		count++;
		argc--;
	}
	printf("%d\n", count);
	return (0);
}
