#include "main.h"

/**
 * _isdigit - function checks if character is a digit or not
 * @c: input character
 * Description: checks if input is an ascii digit and returns 1 if positive
 * and 0 is negative
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
