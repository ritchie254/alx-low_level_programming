#include "main.h"

/**
  *string_toupper - upper
  *@value: string
  *Return: string
  */

char *string_toupper(char *value)
{
	int size = sizeof(value) - 1;
	int i;

	for (i = 0; i <= size; i++)
	{
		if (value[i] >= 'a' && value[i] <= 'z')
		{
			value[i] = value[i] - 32;
		}
	}
	value[size + 1] = '\n';
	return (value);
}

