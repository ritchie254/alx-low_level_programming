#include "main.h"

/**
  *_strcpy - copy string
  *@dest: destiny
  *@src: source
  *Return: dest pointer
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
		j++;
	return (dest);
}
