#include "main.h"

/**
  */

char *_strchr(char *s, char c)
{
	int i, j, k;

	/* length of string */
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			for (k = j, k < i; k++)
			{
				s[k] = s[i];
			}
			return (s);
		}
		else
			return (NULL);
	}


