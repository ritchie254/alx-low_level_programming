#include "main.h"

/**
  *_strchr - find a character in a string
  *@s: string
  *@c: charcter
  *Return: string
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
		return ('\0');
}
