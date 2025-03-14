#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - function that creates a new dog
 *@name: name of the new dog
 *@age: age of the new dog
 *@owner: owner's new dog
 *Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = (char *)malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		return (NULL);
		free(new_dog);
	}
	strcpy(new_dog->name, name);

	new_dog->owner = (char *)malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	printf("My name is %s, and I am %.1f :) - Woof!\n", name, age);

	return (0);
}
