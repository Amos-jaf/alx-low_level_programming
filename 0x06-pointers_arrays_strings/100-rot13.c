#include "main.h"

/**
 * rot13 - function that rotates characters 13 places
 * @s: input string
 * Description: The function encodes characters by shifting it 13 places
 * Return: (s)
 */

char *rot13(char *s)
{
	int i, j;

	char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM"
		"abcdefghijklmnopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = str[j + 13];
				break;
			}
		}
	}
	return (s);
}
