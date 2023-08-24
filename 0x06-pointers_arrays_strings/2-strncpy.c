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
	int  i = 0, j, k;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	for (k = n; k < i; k++)
	{
		dest[k] = '*';
	}
	return (dest);
}
