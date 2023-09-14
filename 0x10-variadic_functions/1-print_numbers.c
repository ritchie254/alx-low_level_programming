#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
  * print_numbers - print nums
  *@separator: sep
  *@n:integer
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list string;

	if (separator == NULL)
		separator = "";
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(string, int));
		if (i == (n - 1))
			continue;
		printf("%s", separator);
	}
	va_end(string);
	printf("\n");
}
