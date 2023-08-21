#include "main.h"

/**
  * puts2 - prints all even numbers
  *@str: string input
  */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
