#include "main.h"

/**
  *leet - function to replace
  *@s: string
  *Return: character
  */

char *leet(char *s)
{
	int i = 0, j = 0;
	char string[] = "a4e3o0t7l1";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j += 2)
			if (s[i] == string[j] || s[i] == string[j] - 32)
			{
				s[i] = string[j + 1];
				break;
			}
		i++;
	}
	return (s);
}
