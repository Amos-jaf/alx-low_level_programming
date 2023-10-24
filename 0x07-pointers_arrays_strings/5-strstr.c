#include "main.h"

/**
 * _strstr - function that returns a pointer to the first occurence of string
 * @haystack: parent string to be checked
 * @needle: string against which haystack is checked
 * Description: function iterates through haystack while checking through
 * individual characters of string.
 * Return: pointer to first occurence of needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			p = &haystack[i];
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					p = NULL;
					break;
				}
			}
			if (p)
			{
				return (p);
			}
		}
	}
	return (NULL);
}
