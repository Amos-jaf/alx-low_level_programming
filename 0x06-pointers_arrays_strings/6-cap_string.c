#include "main.h"

/**
 * cap_string - function that capitalizes the first letters of words
 * @s: input string
 * Description: The function capitalizes all words separated by separators
 * already defined in an array
 * Return: (s)
 */

char *cap_string(char *s)
{
	int i, j, arr_size;

	char separators[] = {
		'\n', ' ', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};
	arr_size = sizeof(separators) / sizeof(separators[0]);
	i = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; j < arr_size; j++)
		{
			if (s[i - 1] == separators[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
				}
			}
		}
	}
	return (s);
}
