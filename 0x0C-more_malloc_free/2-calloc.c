#include "main.h"

/**
 * _calloc - function that simulates the calloc function
 * @nmemb: The number of array elements to be assigned memory
 * @size: The size of each element in the array
 *
 * Description: Utilizes the malloc function to assign the
 * specific amount of memmory that is enough for the array while
 * taking into consideration the size of each element. After allocating
 * the memory, it is initialized to zero
 * Return: The size of the memory to be allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
