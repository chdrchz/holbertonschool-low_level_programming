#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees the dogs
 * @d: pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
		free(d->owner);
		free(d->name);
		free(d);
}
