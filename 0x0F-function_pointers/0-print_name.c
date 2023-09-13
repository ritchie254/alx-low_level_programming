#include "function_pointers.h"

/**
  * print_name - prints a string aurguement
  *@name: string
  *@f: pointer to a function
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
