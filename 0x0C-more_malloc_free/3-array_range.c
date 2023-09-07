#include "main.h"
#include <stdlib.h>

/**
  * array_range - prints numbers in array
  *@min: minimum value
  *@max: maximum value
  *
  *Return: array pointer
  */

int *array_range(int min, int max)
{
	int *array_ptr, i, elements;

	if (min > max)
	{
		return (NULL);
	}
	elements = max - min + 1;
	array_ptr = malloc(sizeof(int) * elements);
	if (array_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < elements; i++)
	{
		array_ptr[i] = min + i;
	}
	return (array_ptr);
}
