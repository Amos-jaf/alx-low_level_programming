#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - function that allocates memory to buffer for concatenation
 * @s1: First input string
 * @s2: Second input string
 * @n: Number of characters of s2 to be concatenated with s1
 *
 * Description: Uses malloc function to allocate memory to a buffer
 * Calls helper concatenating function str_n
 * Return: The concatenated buffer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int total_len;
	char *buffer, *final_buffer;

	if (s1 == NULL && s2 == NULL)
	{
		total_len = 0;
	}
	if (n > strr_len(s2))
		n = str_len(s2);

	if (s1 != NULL && s2 == NULL)
		total_len = str_len(s1)  + 1;
	else if (s1 == NULL && s2 != NULL)
		total_len = n + 1;
	else if (s1 != NULL && s2 != NULL)
	{
		total_len = str_len(s1)	+ n + 1;
	}
	buffer = malloc(sizeof(char) * (total_len + 1));
	if (buffer == NULL)
		return (NULL);
	final_buffer = str_n(buffer, total_len, s1, s2, n);
	return (final_buffer);
}

/**
 * cpy_str - function that copies a string into a buffer
 * @buffer: The input buffer into which a string is to be copied
 * @str: The string that is being copied
 * @n_chars: The number of characters to be copied
 *
 * Description: The function iterates through str and copies the each
 * character into the buffer until the maximum number of specified
 * character (n_chars) is reached
 * Return: The copied string in the buffer
 */

char *cpy_str(char *buffer, char *str, unsigned int n_chars)
{
	unsigned int i;

	for (i = 0; str[i] != '\0' && i < n_chars; i++)
	{
		buffer[i] = str[i];
	}
	buffer[i] = '\0';
	return (buffer);
}

/**
 * str_n - function that co-ordinates the concatenation of strings
 * @buf: The buffer that saves the concatenated string
 * @b_len: The length of the buffer
 * @s1: first input string
 * @s2: second input string
 * @n: number of characters from s2 to be concatenated
 *
 * Description: The function calls copies a string by cally cpy_str function
 * based based on whether s1 or s2 is null.
 * Return: concatenated string
 */

char *str_n(char *buf, unsigned int b_len, char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *buffer;

	j = 0;
	if (b_len == 0)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL && s2 == NULL)
		buffer = cpy_str(buf, s1, str_len(s1));
	else if (s1 == NULL && s2 != NULL)
		buffer = cpy_str(buf, s2, n);
	else if (s1 != NULL && s2 != NULL)
	{
		buffer = cpy_str(buf, s1, str_len(s1));
		for (i = str_len(s1); i < b_len && j < n; i++, j++)
		{
			buffer[i] = s2[j];
		}
		buffer[i] = '\0';
	}
	return (buffer);
}

/**
 * str_len - Function that determines the length of a string
 * @str: string for which the length is to be determined
 *
 * Descriptiion: Loops through the characters of the string until the null
 * terminator.
 * Return: the length of the string
 */

unsigned int str_len(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
