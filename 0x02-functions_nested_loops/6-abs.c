#include "main.h"

/**
 * _abs - function that transforms number to absolute value
 * @c: parameter to convert to absolute value
 * Description: Accepts integer and multiples by either 1 or -1 if the
 * number is positive or negative respectively
 * Return: (c)
 */

int _abs(int c)
{
	if (c >= 0)
		return (c * 1);
	else if (c < 0)
		return (c * (-1));
	else
		return (0);
}
