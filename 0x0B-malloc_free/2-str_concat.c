#include "main.h"

/**
 * str_concat - function that returns a pointer to a concatenated string
 * @s1: first input string
 * @s2: second input string
 * Description: Function creates a pointer to a new memory location and
 * then fills up the space with the s1 and s2 strings
 * Return: pointer to the new memory location
 */

char *str_concat(char *s1, char *s2)
{
	int count, s1_count, s2_count, i;
	char *str;

	str = NULL;
	s1_count = str_count(s1);
	s2_count = str_count(s2);
	count = s1_count + s2_count;
	printf("%d\n", count);
	str = malloc((sizeof(char) * count) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		if (*s1 != '\0')
		{
			str[i] = *s1;
			s1++;
			continue;
		}
		else
		{
			str[i] = *s2;
			s2++;
		}
	}
	str[i] = '\0';
	return (str);
}

/**
 * str_count - function that counts the characters of two input strings
 * @s: first input string
 * Description: loops through two strings while incrementing count
 * Return: the lenghth of the two strings combined
 */

int str_count(char *s)
{

	int  i;

	i = 0;
	if (s == NULL)
	{
		return (i);
	}
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
