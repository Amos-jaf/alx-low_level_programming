#include <stdio.h>

/**
 * main - program prints the name of a file
 * Description: utilizes the in-built file macro to print name of file
 * Return: (0)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
