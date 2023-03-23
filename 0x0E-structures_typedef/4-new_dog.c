#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int name_length, owner_length, i;

	dog1 = malloc(sizeof(*dog1));

	if (dog1 == NULL || name == NULL || owner == NULL)
	{
		free(dog1);
		return (NULL);
	}

	name_length = owner_length = 0;

	while (*(name + name_length) != '\0')
		name_length++;

	while (*(owner + owner_length) != '\0')
		owner_length++;

	dog1->name = malloc(name_length + 1);
	dog1->owner = malloc(owner_length + 1);

	if (dog1->name == NULL || dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1->owner);
		free(dog1);
		return (NULL);
	}

	dog1->age = age;

	for (i = 0; i < name_length; i++)
		dog1->name[i] = name[i];
	dog1->name[i] = '\0';

	for (i = 0; i < owner_length; i++)
		dog1->owner[i] = owner[i];
	dog1->name[i] = '\0';

	return (dog1);
}
