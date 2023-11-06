#include <stdio.h>

/**
 * init_dog - function to initilize struct dog
 * @d: the name of the struct
 * @name: pointer to name
 * @age: age of the dog
 * @owner: the owner of the dog
 * Description: The function initializes a struct when the function is
 * called with the following parameter
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
