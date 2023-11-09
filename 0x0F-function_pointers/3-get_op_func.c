#include "3-calc.h"

/**
 * get_op_func - function calls another function that performs operation
 * @s: operator
 * Description: function checks for operator match and returns calls the
 * corresponding function
 * Return: pointer to the function operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
