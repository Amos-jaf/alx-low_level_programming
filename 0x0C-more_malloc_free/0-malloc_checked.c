#include "main.h"

/**
 * malloc_checked - function that allocates a specific number of passed
 * @b: The specified number of bytes to be allocated
 *
 * Description: Using malloc, the function allocates to a void pointer a
 * specified number of bytes determined by the argument passed into the
 * functiont.
 *
 * Return: the void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
