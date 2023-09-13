#include "function_pointers.h"

/**
  * array_iterator - prints values of an array in new line
  *@array: array
  *@size: size of array
  *@action: pointer to a function
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}
