#include "main.h"

/**
 * _strdup - function that returns a pointer to a duplicated input string
 * @str: input string
 * Description: Initializes a new string using malloc and assigns its
 * value to the input string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, count;

	i = 0;
	count = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	new_str = malloc((sizeof(char) * count) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		new_str[i] = str[i];
	}
	new_str[count] = '\0';

	return (new_str);
}
