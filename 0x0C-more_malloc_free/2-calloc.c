#include "main.h"
#include <stdlib.h>

/**
  *_calloc - function that allocates memory for an array
  *using malloc
  *@nmemb: memory bytes
  *@size: size of array
  *
  *Return: void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *set_ptr;
	size_t i, total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	total = nmemb * size;
	set_ptr = (char *)ptr;
	for (i = 0; i < total; i++)
	{
		set_ptr[i] = 0;
	}
	return (ptr);
}
