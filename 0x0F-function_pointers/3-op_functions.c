#include "3-calc.h"

/**
  *op_add - adds numbers
  *@a: interger
  *@b: interger
  *Return: results
  */

int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
  *op_sub - subtract numbers
  *@a: interger
  *@b: interger
  *Return: results
  */

int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
  *op_mul - multiply numbers
  *@a: interger
  *@b: interger
  *Return: results
  */

int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
  *op_div - divides numbers
  *@a: interger
  *@b: interger
  *Return: results
  */

int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a / b;
	return (result);
}

/**
  * op_mod - returns the modulus value of two numbers input
  *@a: integer
  *@b: interger
  *Return: result
  */

int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a % b;
	return (result);
}
