#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: the given string
 * Return: a pointer to the duplicated string. Otherwise, NULL.
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *arrStr;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	arrStr = malloc((len + 1) * sizeof(char));

	if (arrStr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arrStr[i] = str[i];
	arrStr[len] = '\0';

	return (arrStr);
}

/**
 * new_dog - a function that creates a new dog by allocating memory
 * for a dog structure and copying the provided name
 * and owner strings into the allocated memory
 * @name: a pointer to the dog name
 * @age: the age of the dog
 * @owner: the name of the dog owner
 * Return: a pointer to the newly created dog structure new_dog (ON SUCCESS)
 * or NULL if the function fails to allocate memory (ON FAILURE)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
