#include "main.h"

/**
 * _isupper - function to check for upper case letters
 * @c: input character
 * Description: The function compares the input character to the ascii
 * value and returns 1 if it is in the upper case range and 0 if it is in
 * the lower case range
 * Return: 1 or 2
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
