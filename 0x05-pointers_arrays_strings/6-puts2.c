#include "main.h"

/**
  * puts2 - prints all even numbers
  *@str: string input
  */

void puts2(char *str)
{
	int count = 0;
	int i;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
