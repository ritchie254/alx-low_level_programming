#include "main.h"

/**
  *_strcmp - comapres two strings
  *@s1: first string
  *@s2: second string
  *
  *Return: 0 or 15 or -15
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (s1 == s2)
		return (0);
	else if (i > j)
	{
		return (15);
	}
	else if (i < j)
	{
		return (-15);
	}
	return (0);
}
