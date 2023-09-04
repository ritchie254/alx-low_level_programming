#include "main.h"
#include <stdlib.h>

/**
  *
  */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(char) * ac);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		ptr[i] = av[i];
	}
	return (ptr);
}
