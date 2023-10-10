#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees the memory allocated for the dog_t struct
 * @d: a pointer to struct dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
