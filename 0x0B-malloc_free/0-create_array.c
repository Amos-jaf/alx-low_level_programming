#include "main.h"

/**
 * create_array - function that passes a character into an array
 * @size: Size of the buffer
 * @c: character to be populated in the buffer
 * Description: A buffer is created dynamically using the malloc function
 * based on the size argument passed into the function
 * Using a loop the character denoted by 'c' is populated into all the bytes
 * of the buffer.
 * Return: buffer string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
