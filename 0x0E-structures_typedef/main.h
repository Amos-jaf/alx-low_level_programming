#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - structure to declare propertes of a dog
 * @name: pointer to name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: define the characteristics of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* MAIN_H */
