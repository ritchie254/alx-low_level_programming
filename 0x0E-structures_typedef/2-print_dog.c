#include "dog.h"
#include <stdio.h>

/**
  * print_dog - struct function
  *@d: struct
  *
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
