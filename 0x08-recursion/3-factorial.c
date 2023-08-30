#include "main.h"

/**
  *factorial - finds the factorial of a number
  *@n: interger
  *
  *Return: factorial value
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
