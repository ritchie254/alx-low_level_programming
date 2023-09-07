#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - reallocates a memry block
  *@ptr: pointer to previous memory block
  *@old_size: previous allocated memory size
  *@new_size: new to be allcated memory size
  *
  *Return: pointer to new allocated memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i;

	i = 0;
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (new_size < old_size)
		old_size = new_size;
	while (i < old_size)
	{
		*((char *)ptr2 + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (ptr2);
}
