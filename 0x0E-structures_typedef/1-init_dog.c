#include "dog.h"

/**
 * init_dog - a function initializes the members of
 * a struct dog with the provided values
 * @d: a pointer to struct dog
 * @name: a pointer to the dog's name
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
