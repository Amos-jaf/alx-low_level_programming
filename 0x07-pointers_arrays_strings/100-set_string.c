#include "main.h"

/**
 * set_string - function that uses a pointer to point to another pointer
 * @s: pointer to pointer
 * @to: pointer
 * Description: function sets a pointer to another pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
