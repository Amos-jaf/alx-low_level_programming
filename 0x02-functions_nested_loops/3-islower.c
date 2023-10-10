#include "main.h"

/**
 * _islower - function returns 1 or 0 for lower case letter or not
 * @c: integer for lower or upper case
 * Description: If the argument c is lower case the function returns 1
 * Return: (1) for lower case
 */

int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
