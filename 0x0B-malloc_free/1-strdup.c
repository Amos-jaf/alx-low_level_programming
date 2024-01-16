#include "main.h"

/**
 * _strdup - Duplicates an input string into another string
 * @str: Input string
 *
 * Description: Memory is allocated dynamically using the length of the
 * input string as its size, then each character is copied by index
 * into the new string
 * Return: Duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
