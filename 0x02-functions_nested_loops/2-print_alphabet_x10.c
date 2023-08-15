#include "main.h"

/**
  *print_alphabet_x10 - prints alphabets in lowercase 10 time
  */

void print_alphabet_x10(void)
{
	/* delcaration of variables */
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
