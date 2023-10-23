#include "main.h"

/**
 * _memcpy - function that copies a certain number of bytes
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes to be copied
 * Description: This function copies n number of bytes form src to dest
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
