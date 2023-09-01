#include "main.h"

/**
  *_memset - prints bytes b, n times
  *@s: buffer
  *@b: bytes
  *@n: number of bytes
  *
  *Return: string s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
