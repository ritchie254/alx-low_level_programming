#include "main.h"

/**
  * print_diagonal - prints backslashes
  *@n: input
  */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			if (j != 1)
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
