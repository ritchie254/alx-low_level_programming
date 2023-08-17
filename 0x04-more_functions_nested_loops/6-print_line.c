#include "main.h"

/**
  *print_line - prints underscore
  *@n: integer input
  */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
