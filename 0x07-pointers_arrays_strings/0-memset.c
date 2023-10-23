#include "main.h"

/**
 * _memset - function that copies a specific byte
 * @s: string to be filled by n bytes
 * @b: byte that is used to fill s
 * @n: amount of n bytes that fills s
 * Description: The function accepts a character and then fills a specific
 * amount of n bytes
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
