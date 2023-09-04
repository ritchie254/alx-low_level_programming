#include "main.h"
#include <stddef.h>

/**
  *_strdup - copy a character string
  *@str: string input
  *
  *Return: character pointer
  */
int _strlen_recursion(char *str);

char *_strdup(char *str)
{
	int i, j;
	char *pStr;

	if (str == NULL)
	{
		return (NULL);
	}
	i = _strlen_recursion(str);
	pStr = (char *)malloc((i + 1) * sizeof(char));
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
  *@str: pointer sting
  *
  *Return: length of string
  */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(str + 1));
}
