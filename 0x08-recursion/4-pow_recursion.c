#include "main.h"

/**
 * _pow_recursion - function calculates the power of a number
 * @x: number
 * @y: the power
 * Description: The function uses recursion to iterate through the power
 * of a number
 * Return: a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
