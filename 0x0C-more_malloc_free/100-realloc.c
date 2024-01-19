#include "main.h"

/**
 * _realloc - function that reallocates memory of a pointer to a larger one
 * @ptr: Input buffer to be reallocated
 * @old_size: size of the input buffer
 * @new_size: size of the new buffer to be allocated
 *
 * Description: Function creates a new buffer with size char to ensure
 * every single byte is copied. The input buffer is cast to char and copied
 * into the new buffer. Necessary checks are put in place to make sure there
 * is enough space in the new buffer for the operation as well as a check for
 * correct initialization of th buffer
 * Return: The pointer to the new memory location with its copied content.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_buffer;
	char *old_buffer;

	old_buffer = (char *)ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_buffer = malloc(new_size);
	if (new_buffer == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			new_buffer[i] = old_buffer[i];
		free(ptr);
	}
	return (new_buffer);
}
