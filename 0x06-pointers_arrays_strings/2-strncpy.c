#include "main.h"

/**
  *_strncpy - cpy number of characters
  *@dest: destination
  *@src: source
  *@n: integer
  *Return: character
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
		while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
