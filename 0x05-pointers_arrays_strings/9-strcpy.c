#include "main.h"

/**
 * _strcpy - function copies one string into another string
 * @dest: pointer to destination string copied into
 * @src: pointer to string which is copied
 * Description: Function loops through a source string and copies its
 * content into another string
 * Return: (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
