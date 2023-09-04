#include "main.h"
#include <stdlib.h>

/**
  * create_array - replicates the a characeter size times
  *and return the pointer to character
  *@size: non negative number
  *@c: character to be replicated
  *
  *Return: pointer to character
  */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *pC;

	if (size == 0)
	{
		return ('\0');
	}
	pC = (char *)malloc(size * sizeof(char));
	i = 0;
	if (pC == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		pC[i] = c;
		i++;
	}
	return (pC);
}
