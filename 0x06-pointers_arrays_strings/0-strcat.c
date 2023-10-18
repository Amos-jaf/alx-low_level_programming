#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: final concatenated string
 * @src: string added to destination string
 * Description: The function add src string to destination string
 * Return: (dest)
 */

char *_strcat(char *dest, char *src)
{
	int end, i, j;

	j = 0;
	for (end = 0; dest[end] != '\0'; end++)
	{
		continue;
	}
	for (i = end - 1; src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
