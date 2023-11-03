#include "main.h"

/**
 * malloc_checked - function that returns an allocated memory
 * @b: input with type unsigned int for the memory allocation
 * Description: uses malloc function for memory allocation.
 * Return: pointer to memory allocated on success and 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
