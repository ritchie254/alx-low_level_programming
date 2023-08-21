#include "main.h"

/**
  *rev_string - reverse string
  *@s: string
  *
  */

void rev_string(char *s)
{
	int i = 0, j;
	char c, d;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;
	for (j = 0; j < i; j++)
	{
		c = s[j];
		d = s[i];
		s[j] = d;
		s[i] = c;
		i--;
	}
}
