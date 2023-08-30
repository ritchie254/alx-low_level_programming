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
	int s;

	s = j * j;
	if (s > i)
		return (-1);
	if (s == i)
		return (j);
	return (_sqrt_check(i, j + 1));
}

/**
  *_sqrt_recursion - finding the square root
  *@n: interger to find square root of
  *
  *Return: square root
  */

int _sqrt_recursion(int n)
{
	return (_sqrt_check(n, 1));
}
