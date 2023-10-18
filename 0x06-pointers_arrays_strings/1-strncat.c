#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: final concatenated string
 * @src: string added to destination string
 * @n: number of characters to be concatenated from src
 * Description: The function adds n characters of src string to
 * destination string
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int end, i, j;

	j = 0;
	for (end = 0; dest[end] != '\0'; end++)
	{
		continue;
	}
	for (i = end; src[j] != '\0' && j < n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
