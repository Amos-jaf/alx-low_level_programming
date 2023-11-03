#include "main.h"

/**
 * string_nconcat - function that returns a concatenated string
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of bytes of s2 to be concatenated
 * Description: The function concatenates s1 and n bytes of s2
 * Return: pointer to the concatenated string in memory provided by malloc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, count_s1, count_s2, total_count;

	count_s1 = s_count(s1);
	count_s2 = s_count(s2);
	if (n >= count_s2)
	{
		total_count = count_s1 + count_s2 + 1;
	}
	else
	{
		total_count = count_s1 + n + 1;
	}
	str = malloc(sizeof(char) * total_count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] && s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	j = 0;
	for (j = 0; s2[j] && j < n && s2[j] != '\0'; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}

/**
 * s_count - function to count the number of a string for concatenation
 * @s: input string
 * Description: The helper function loops through a string and provides its
 * length
 * Return: length of the string
 */

unsigned int s_count(char *s)
{
	unsigned int str_count, i;

	str_count = 0;
	if (s == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			str_count++;
		}
		return (str_count);
	}
}
