#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - assigns memory
  *@b: integer
  *
  *Return: void pointer
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);/* terminates with stayus code 98 */
	}
	return (ptr);
}
