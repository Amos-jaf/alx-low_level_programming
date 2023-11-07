#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: The structure defines the properties of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


#endif /* DOG_H */
