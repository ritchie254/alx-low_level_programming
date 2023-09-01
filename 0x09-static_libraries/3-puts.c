#include "main.h"

/**
  *_puts - returns a string
  *@str: string pointer
  *
  */

void _puts(char *str)
{
	int count = 0;
	char c; /* characters corresponding to index */

	while (str[count] != '\0')
	{
		c = str[count];
		_putchar(c);
		/* increasing count to print next character*/
		count++;
	}
	_putchar('\n');
}
