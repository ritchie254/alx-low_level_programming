#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#define MUL(a, b) (a * b)

/**
  *valid_number - function to check
  *if string contains only numbers
  *@str: constant string
  *
  *Return: 1 if true else 0
  */
int valid_number(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
  * main - entry point
  * @argc: arguement count
  * @argv: arguement array / vector
  *
  *Return: product of arguements passed
  */

int main(int argc, char *argv[])
{
	unsigned long long mul, num1, num2;
	char *num1_str, *num2_str;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1_str = argv[1];
	num2_str = argv[2];
	if (!valid_number(num1_str) || !valid_number(num2_str))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = strtoull(num1_str, NULL, 10);
	num2 = strtoull(num2_str, NULL, 10);
	mul = MUL(num1, num2);
	printf("%lld", mul);
	_putchar('\n');
	return (0);
}
