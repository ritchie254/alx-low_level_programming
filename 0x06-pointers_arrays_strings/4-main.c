#include "main.h"
#include <stdio.h>

/**
  *print_array - entry
  *@a: array
  *@n: integer
  */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
  * main - entry
  *Return: 0
  */

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5,  6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
