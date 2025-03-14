#include <stdio.h>
#include "dog.h"

/**
 *free_dog - function that frees dogs
 *@d: structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}
}
