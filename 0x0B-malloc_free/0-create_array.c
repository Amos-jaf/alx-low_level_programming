#include "main.h"

/**
 * create_array - function to create an array and initialize it with a value
 * @size: size of the created array
 * @c: value that elements of the array are initialized with
 * Description: utilizes malloc function to initialize an array of size
 * "size" with a value of c
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	i = 0;
	buffer = NULL;
	buffer = malloc(sizeof(*buffer) * size);

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
