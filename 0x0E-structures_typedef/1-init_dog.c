#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: variable of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
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
