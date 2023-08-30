#include "main.h"

int _strlen_recursion(char *s);
int _scan(char *c, char *d);

/**
  *is_palindrome - check if string is palindrome
  *@s: string
  *
  *Return: 1 if true else 0
  */

int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);
	char *c = s;
	char *d = s + (i - 1);

	if (i == 0)
		return (1);
	return (_scan(c, d));
}

/**
  *_strlen_recursion - length of string
  *@s: string
  *
  *Return: length of string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  *_scan - scans string
  *@c: character
  *@d: charcter
  *
  *Return: integer
  */

int _scan(char *c, char *d)
{
	if (*c != *d)
		return (0);
	else if (c >= d)
		return (1);
	else
		return (_scan(c + 1, d - 1));
}
