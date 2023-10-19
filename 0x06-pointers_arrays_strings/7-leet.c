#include "main.h"

/**
 * leet - encoding function
 * @s: input string
 * Description: encondes specific characters of a string
 * Return: (s)
 */

char *leet(char *s)
{
	int i, j;

	char small[] = {
		'a', 'e', 'o', 't', 'l'
	};
	char large[] = {
		'A', 'E', 'O', 'T', 'L'
	};
	char num[] = {
		'4', '3', '0', '7', '1'
	};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (small[j] == s[i] || large[j] == s[i])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
