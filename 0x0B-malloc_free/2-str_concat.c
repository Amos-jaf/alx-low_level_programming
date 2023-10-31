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
	int count, i, j;
	char *str;

	str = NULL;
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
