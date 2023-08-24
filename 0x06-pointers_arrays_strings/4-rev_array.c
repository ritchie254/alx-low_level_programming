#include "main.h"

/**
  *reverse_array - reverse
  *@a: array
  *@n: number of elements
  */

void reverse_array(int *a, int n)
{
	int b;
	int i;
	int j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;
	}
}
