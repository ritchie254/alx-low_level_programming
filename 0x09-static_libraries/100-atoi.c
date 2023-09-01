#include "main.h"
#include <stdio.h>

/**
  *_atoi - convert sting to int
  *@s: string
  *Return: 0
  */

int _atoi(char *s)
{
	int n, i, m;

	m = 1;
	i = 0, n = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			m *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	m *= -1;
	return (n * m);
}
