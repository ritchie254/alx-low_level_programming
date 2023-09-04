#include "main.h"
#include <stddef.h>

/**
  *
  */
int _strlen_recursion(char *s);

char *_strdup(char *str)
{
	int i, j;
	char *pStr;

	if (*str == '\0')
		return ('\0');
	i = _strlen_recursion(str);
	pStr = (char *)malloc(i * sizeof(char));
	if (pStr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		pStr[j] = str[j];
	}
	return (pStr);
}

/**
  *_strlen_recursion - return length of string
  *@s: pointer sting
  *
  *Return: length of string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
