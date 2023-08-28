#include "main.h"

/**
  *_strspn - strspn
  *@s: string
  *@accept: accept
  *Return: integer
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (l);
	}
	return (l);
}
