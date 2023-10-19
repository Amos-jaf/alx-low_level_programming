#include "main.h"

/**
 * string_toupper - function that converts lower case letters to upper case
 * @s: input string
 * Description: using ascii value to convert lower case to upper
 * Return: upper case string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		else
		{
			continue;
		}
	}
	return (s);
}
