#include "main.h"

/**
 * _strpbrk - function that returns a pointer after finding the first occurence
 * @s: input string
 * @accept: string that is being checked
 * Description: checks for first occurence of accept in input string
 * Return: s for success and null if no character is found
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
