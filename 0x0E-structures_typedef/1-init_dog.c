#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - function that initializes a dog structure
  * @d: A dog structure.
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The person who owns the dog.
  *
  * Return: Nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
