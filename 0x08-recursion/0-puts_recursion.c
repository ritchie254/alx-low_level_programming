#include "main.h"

/**
  *_puts_recursion - function to print a string
  *@s: pointer to string
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')/*checks for null terminator*/
	{
		_putchar('\n');/*if null terminator put new line and return*/
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);/*add one and locates value at next address*/
}
