#include "main.h"

/**
  * swap_int - function to swip values of input
  *@a: first
  *@b: second
  */

void swap_int(int *a, int *b)
{
	int temp; /* variable that store the value of a temporarilry */

	temp = *a;
	*a = *b; /* changes the value of a to the value of b */
	*b = temp;
}
