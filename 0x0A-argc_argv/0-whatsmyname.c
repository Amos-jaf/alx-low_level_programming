#include "main.h"

/**
 * main - function prints the name argument of the function
 * @argc: argument count
 * @argv: argument vector
 * Description: function prints out the name of argv[0]
 * Return: (0)
 */

int main(__attribute__((unused)) int argc, char  *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
