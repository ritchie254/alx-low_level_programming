#include "main.h"

/**
  *puts_half - returns the last part of a string
  *@str: string
  */

void puts_half(char *str)
{
	int count = 0;
	int half_string, i;

	while (str[count] != '\0')
	{
		count++;
	}
	count -= 1;
	half_string = count / 2 + 1;
	for (i = half_string; i <= count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
