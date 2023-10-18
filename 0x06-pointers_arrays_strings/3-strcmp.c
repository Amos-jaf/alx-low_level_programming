#include "main.h"

/**
 * _strcmp - function that returns an integer difference of two strings
 * @s1: first input string
 * @s2: second input string
 * Description: compares ascii values of s1 and s2. it returns the integer
 * value differece of the first encountered different value
 * Return: ascii value difference
 */

int _strcmp(char *s1, char *s2)
{
	int i, value;

	value = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			value = s1[i] - s2[i];
			break;
		}
	}
	return (value);
}
