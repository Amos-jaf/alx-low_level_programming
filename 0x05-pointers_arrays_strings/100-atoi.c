#include "main.h"

/**
 * _atoi - function that returns integer from a string
 * @s: input string
 * Description: loops through the string until integer characters are found.
 * The integer is then converted to an integer after which the signs are
 * evaluated to give a positive or a negative number
 * Return: (num)
 */

int _atoi(char *s)
{
	int  num, i, sign_count;

	num = 0;
	sign_count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + (s[i] - '0');
			if (!(s[i + 1] >= 48 && s[i + 1] <= 57))
			{
				break;
			}
		}
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			break;
		}
		if (s[i] == '-')
		{
			sign_count++;
		}
	}
	if (sign_count % 2 == 0)
	{
		return (num);
	}
	else
	{
		return (0 - num);
	}
}
