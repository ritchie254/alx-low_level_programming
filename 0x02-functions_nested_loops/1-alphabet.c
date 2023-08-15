#include "main.h"
/**
  *print_alphabet - fujction that prints all lowercase alphabets
  *
  */

void print_alphabet(void)
{
	/* variable declaration */
	int i;

	/* intializiation of loop to print all lower case alphabets */
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
