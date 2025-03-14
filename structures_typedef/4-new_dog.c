#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *_strlen - return length of a string
 *@s: string
 *Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s)
	len++;

	return (len);
}


/**
 *_strcpy - copy the string
 *@dest: destination of the string
 *@src: source of the string
 *Return: return the value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 **new_dog - function that creates a new dog
 *@name: char
 *@age: float
 *@owner: char
 *Return: Always success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	if (name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	ndog->age = age;
	if (owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->owner, owner);
	return (ndog);
}
