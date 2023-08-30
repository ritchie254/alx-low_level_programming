#include "main.h"

/**
  *_print_rev_recursion - prints a string a reverse order
  *@s: pointer to string
  *
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);/* if not null terminator moves to the next char*/
	_putchar(*s);/*after recursion is completed the char are put in reverse */
}
