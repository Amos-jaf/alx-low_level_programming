#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print opcodes
 * @argc: arguement count
 * @argv: argument vector
 * Description: Converts the argument of the main function into an int and
 * prints each byte in hex format
 * Return: opcode
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	func_ptr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", *(func_ptr + i));
		if (i < bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}

