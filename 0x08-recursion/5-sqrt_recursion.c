#include "main.h"

/**
  *_sqrt_check - check the square root
  *@i: integer
  *@j: integer
  *
  *Return: square root
  */

int _sqrt_check(int i, int j)
{
	if (j * *2 == i)
	{
		return (j);
	}
	else if (j * *2 > i)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_check(i, j + 1));
	}
}

/**
  *_sqrt_recursion - finding the square root
  *@n: interger to find square root of
  *
  *Return: square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_check(n, 0));
}
