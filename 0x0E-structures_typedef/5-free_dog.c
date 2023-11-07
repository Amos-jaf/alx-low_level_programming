/**
 * free_dog - function that frees dogs
 * @d: input struct
 * Description: function to deallocate memmory from dog struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
