#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that returns a pointer to a new definition of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: function defines characteristics of a new dog
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(new_dog));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
