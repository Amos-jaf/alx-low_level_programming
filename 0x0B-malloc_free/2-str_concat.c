#include "main.h"

/**
 * str_concat - function that concatenates two string into a third string
 * @s1: first input string
 * @s2: second input string
 *
 * Description: Dynamically allocates memory to buffer based on the number of
 * cummulative bytes in s1 and s2. Calls the copy function
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *buffer, *final_buffer;
	unsigned int total_len;

	if (s1 == NULL && s2 == NULL)
		total_len = 0;
	else if (s1 != NULL && s2 == NULL)
		total_len = len_str(s1) + 1;
	else if (s2 != NULL && s1 == NULL)
		total_len = len_str(s2) + 1;
	else
	{
		total_len = len_str(s1) + len_str(s2);
	}

	buffer = malloc(sizeof(char) * (total_len + 1));

	final_buffer = cpy_str(buffer, total_len, s1, s2);

	return (final_buffer);
}

/**
 * cpy_str - function to copy two strings in sequence into a new buffer
 * @buffer: new concatenated string
 * @len: length of buffer
 * @str1: first input string for concatenation
 * @str2: second string for concatenation
 *
 * Description: Copies serially the character at increasing indices of s1
 * and s2 into new string
 * Return: new buffer
 */

char *cpy_str(char *buffer, unsigned int len, char *str1, char *str2)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	if (buffer == NULL)
		return (NULL);
	if (str1)
	{
		while (str1[i] != '\0')
		{
			buffer[i] = str1[i];
			i++;
		}
	}
	if (str2 == NULL)
		buffer[i] = '\0';
	if (str2)
	{
		while (i < len)
		{
			buffer[i] = str2[j];
			i++;
			j++;
		}
	}

	return (buffer);
}

/**
 * len_str - function to find the length of a string
 * @str: input character string
 *
 * Description: Increments the counter while iterating through the string
 * Return: length of the sting
 */

unsigned int len_str(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
