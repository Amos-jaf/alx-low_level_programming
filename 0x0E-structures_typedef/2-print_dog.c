#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function to print the details of a dog
 * @d: input struct
 * Description: A structure is passed into the function and the properties
 * are printed
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d ? d->name : "(nil)");
	if (d->age < 0)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	printf("Owner: %s\n", d ? d->owner : "(nil)");
}
