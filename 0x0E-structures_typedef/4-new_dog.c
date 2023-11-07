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
	dog_t *create_dog;

	create_dog = malloc(sizeof(dog_t));
	if (create_dog == NULL)
	{
		return (NULL);
	}
	create_dog->name = malloc(_strlen(name) + 1);
	if (create_dog->name == NULL)
	{
		free(create_dog);
		return (NULL);
	}
	_strcpy(create_dog->name, name);
	create_dog->owner = malloc(_strlen(owner) + 1);
	if (create_dog->owner == NULL)
	{
		free(create_dog->name);
		free(create_dog);
		return (NULL);
	}
	_strcpy(create_dog->owner, owner);
	create_dog->age = age;
	return (create_dog);
}

/**
 * _strlen - function to determine the length of a string
 * @str: input string
 * Description: Loops through the string and returns the count
 * Return: a count with type int
 */

int _strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * _strcpy - function that copies the content of one buffer into another
 * @dest: destination string to be copied into
 * @src: source string to be copied form
 * Description: The function copies every character from src to dest
 * Return: pointer to dest string
 */

char *_strcpy(char *dest, char *src)
{
	int s_count;

	s_count = 0;
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[s_count] != '\0')
	{
		dest[s_count] = src[s_count];
		s_count++;
	}
	dest[s_count] = '\0';
	return (dest);
}
