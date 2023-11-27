#include "main.h"

/**
 * binary_to_uint - function that converts string in binary to decimal
 * @b: input string
 * Description: This function copies buffer and converts using helper
 * functions
 * Return: Decimal number representation of binary string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number, factor, i;
	char *a;

	number = 0;
	factor = 1;

	if (b == NULL)
	{
		return (0);
	}
	a = copy_buffer(b);
	a = swap_str(a);
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '1')
		{
			number += factor;
			factor *= 2;
		}
		else if (a[i] == '0')
		{
			factor *= 2;
			continue;
		}
		else
		{
			return (0);
		}
	}
	free(a);
	return (number);
}

/**
 * copy_buffer - function copies a buffer
 * @s: input string
 * Description: allocates memory and copies each to new memory location
 * Return: returns new string
 */

char *copy_buffer(const char *s)
{
	char *a;
	int i;

	a = malloc(_str_len_const(s) + 1);
	if (a == NULL)
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		a[i] = s[i];
	}
	a[i] = '\0';
	return (a);
}

/**
 * swap_str - function interchanges the buffer from front to back
 * @s: input string
 * Description: uses the swap method of interchanging string i.e uses temp
 * Return: return the swapped string
 */

char *swap_str(char *s)
{
	char c;
	int i, len_str;

	i = 0;
	len_str = _str_len(s);

	while (i < (len_str / 2))
	{
		c = s[i];
		s[i] = s[len_str - i - 1];
		s[len_str - i - 1] = c;
		i++;
	}
	return (s);
}

/**
 * _str_len - custom function to determine the length of a string
 * @s: input string
 * Description: counts the characters of a string
 * Return: the length of the strng
 */

int _str_len(char *s)
{
	int len, i;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * _str_len_const - custom modification of _str_len function
 * @s: const input string
 * Description: counts the number of characters in string argument
 * Return: length of const string
 */

int _str_len_const(const char *s)
{
	int len, i;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
