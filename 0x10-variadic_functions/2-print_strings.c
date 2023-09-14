#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_strings - print string
  *@separator: separate
  *@n: No of arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list names;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(names, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(names, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i == n - 1)
			continue;
		printf("%s", separator);
	}
	va_end(names);
	printf("\n");
}
