#include "3-calc.h"

/**
 * op_add - function that adds two numbers
 * @a: first integer
 * @b: second integer
 * Description: simple addition
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract two numbers
 * @a: first number
 * @b: second number
 * Description: subtract b from a
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply two numbers
 * @a: first multiplier
 * @b: second multiplier
 * Description: multiplies a and b
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @a: dividend
 * @b: divisior
 * Description: function divides a by b
 * Return: fraction
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that returns the remainder
 * @a: first integer
 * @b: factor
 * Description: finds the remainder after dividing a and b
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
