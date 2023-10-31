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
	int count, i;
	char *str;

	str = NULL;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	count = str_count(s1, s2);
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
 * @s1: first input string
 * @s2: second input string
 * Description: loops through two strings while incrementing count
 * Return: the lenghth of the two strings combined
 */

int str_count(char *s1, char *s2)
{

	int count, i, j;

	count = 0;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		count++;
		i++;
	}
	while (s2[j] != '\0')
	{
		count++;
		j++;
	}
	return (count);
}
