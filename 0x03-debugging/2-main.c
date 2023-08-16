#include <stdio.h>
#include "main.h"
/**
  * main - prints largest number
  *Return: 0
  */

int main(void)
{
	int a, b, c;
	int largest;

	a = -2;
	b = -98;
	c = 1000;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
