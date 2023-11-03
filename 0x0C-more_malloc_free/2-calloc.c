#include "main.h"

/**
 * _calloc - function that returns a pointer to memory enough for an array
 * @nmemb: number of elements in the array
 * @size: number of bytes contained in each element
 * Description: function reserves enough space using malloc function for
 * nmemb number of elements in the array which contains "size" amount of
 * bytes each
 * Return: void pointer to the memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return ((void *)ptr);
}
