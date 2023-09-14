#include "variadic_functions.h"

/**
  *sum_them_all - summ numbers
  *@n: number of arguments
  *Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list numbers;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
