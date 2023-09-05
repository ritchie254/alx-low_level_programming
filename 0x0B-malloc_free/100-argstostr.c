#include "main.h"
#include <stdlib.h>

/**
  * argstostr - prints aurguements passed in a function
  *@ac: aurguement counts
  *@av: array
  *
  *Return: pointer to character
  */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, n = 0, length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}
	length += ac;
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[n] = av[i][j];
			n++;
		}
		if (ptr[n] == '\0')
		{
			ptr[n++] = '\n';
		}
	}
	return (ptr);
}
