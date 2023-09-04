#include "main.h"
#include <stddef.h>

/**
  *str_concat - concatinate two strings
  *@s1: first string
  *@s2: second string
  *
  *Return: pointer to string
  */

char *str_concat(char *s1, char *s2)
{
	int length1, length2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = 0;
	length2 = 0;
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	ptr = (char *)malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= length2; j++)
	{
		ptr[length1] = s2[j];
		length1++;
	}

	return (ptr);
}
