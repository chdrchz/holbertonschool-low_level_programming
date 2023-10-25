#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints the elements of the structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name <= 0)
		printf("Name: (nil)\n");
	else 
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)\n");
	else 
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	
}
