#include "main.h"

/**
 * _strspn - function that returns the number of characters in string
 * @s: input string
 * @accept: string that is checked against input string
 * Description: Functin checks input string against accept string and gives
 * the number of occurences of accept in input string
 * Return: (num)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, check;
	unsigned int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				check = 1;
				break;
			}
		}
		if (check == 0)
			break;
	}
	return (count);
}
