#include "main.h"

/**
  * print_diagonal - prints backslashes
  *@n: input
  */

void print_diagonal(int n)
{
	int l, c;

	for (l = 0; l < n; l++)
	{
		for (c = 0; c <= l; c++)
		{
			if (c != l)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}

		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
