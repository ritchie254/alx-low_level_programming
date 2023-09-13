#include "function_pointers.h"

/**
  * int_index - a function that returns the index of a number
  *@array: an array
  *@size: size of the array
  *@cmp: pointer to a function
  *
  *Return: -1 and exits
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0;  i < size; i++)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
	}
	return (-1);
}
