#include "main.h"

/**
 * rev_string - function reverses string
 * @s: input string
 * Description: Function swaps characters from the front and back of the
 * string
 * Return: (void)
 */

void rev_string(char *s)
{
	int count, mid, i;
	char c;

	count = 0;
	i = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	count--;
	mid = count / 2;
	while (i <= mid)
	{
		c = s[i];
		s[i] = s[count  - i];
		s[count  - i] = c;
		i++;
	}
}
