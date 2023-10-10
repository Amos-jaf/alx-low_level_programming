#include "main.h"

/**
 * _isalpha - function that checks for lower and upper case characters
 * @c: parameter that is checked by function
 * Description: utilizes a conditional to check for whether argument is a
 * lower or upper case character.
 * Return: (1) if lower or upper case character
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
