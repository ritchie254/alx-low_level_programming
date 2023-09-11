#include "dog.h"

/**
  *init_dog - intialize struct values
  *@d: struct pointer
  *@name: name
  *@age: age
  *@owner: owner
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d) /* check if ponter is not null */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
