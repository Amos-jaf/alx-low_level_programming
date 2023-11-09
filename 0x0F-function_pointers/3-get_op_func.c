#include "3-calc.h"

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

/**
 * get_op_func - function that calls function that carries out operation
 * @a: first input number
 * @b: second input number
 * Description:
 * Return: a pointer to function operations
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s) 
	{
		i++;
	}
	return (ops[i].f);
}
