#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(size * nmemb);
	return (ptr);
}
