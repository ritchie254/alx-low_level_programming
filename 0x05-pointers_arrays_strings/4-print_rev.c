#include "main.h"

/**
  *print_rev - print a reversed string
  *@s: string
  */

void print_rev(char *s)
{
	int count = 0;
	int i;

	/* first i find the length of the string using while loop */
	while (s[count] != '\0')
	{
		count++;
	}
	count -= 1;
	for (i = 0; i <= count; i++)
	{
		/*printing characters from reverse */
		_putchar(s[count - i]);
	}
	_putchar('\n');
}
