#include <stdio.h>
#include "search_algos.h"

/**
  * linear_search - performs a linear search
  *@array: first element
  *@size: size of the array
  *@value: search value
  *
  *Return: value of the index
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
		{
			return (i);
		}
		array++;
		i++;
	}
	return (-1);
}
