#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Start a struct dog
 * @d: Pointer to the struct dog to start
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: None
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
