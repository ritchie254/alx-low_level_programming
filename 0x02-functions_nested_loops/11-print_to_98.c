#include <stdio.h>
#include "main.h"

/**
  *print_to_98 - print values with 98 as the last value
  *@n: integer values to begin at
  *
  */

void print_to_98(int n)
{
	int i;
	char m = ',', k = ' ';

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i == 98)
			continue;
		printf("%c%c", m, k);
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
		if (i == 98)
			continue;
		printf("%c%c", m, k);
		}
	}
	printf("\n");
}
