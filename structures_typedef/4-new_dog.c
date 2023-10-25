#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *new_dog - creates a new dog
 * @age: age of doggo
 * @owner: owner of doggo
 * @name: name of doggo
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggy;
		if (name == NULL || age < 0 || owner == NULL)
		{
			return (NULL);
		}
		new_doggy = malloc(sizeof(dog_t));
	if (new_doggy)
	{
		new_doggy->name = (char *)malloc(strlen(name) + 1);
		if (new_doggy->name == NULL)
		{
			free(new_doggy);
			return (NULL);
		}
		new_doggy->owner = (char *)malloc(strlen(owner) + 1);
		if (new_doggy->owner == NULL)
		{
			free(new_doggy->name);
			free(new_doggy);
			return (NULL);
		}
		new_doggy->name = strcpy(new_doggy->name, name);
		new_doggy->owner = strcpy(new_doggy->owner, owner);
		new_doggy->age = age;
		return (new_doggy);
	}
	else
	{
		return (new_doggy);
	}
}
