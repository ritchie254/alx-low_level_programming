#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
  *length - function to check
  *if string contains only numbers
  *@str: constant string
  *
  *Return: 1 if true else 0
  */
int length(const char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

/**
  *array - create an array
  *@size: size of array
  *
  *Return: pointer to array
  */

char *array(int size)
{
	char *arr;
	int index;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		exit(98);
	for (index = 0; index < (size - 1); index++)
		arr[index] = 'x';
	arr[index] = '\0';
	return (arr);
}

/**
  *iterate_zeros - checks for characters which have leading zeros
  *@str: string being checked
  *
  *Return: pointer
  */

char *iterate_zeros(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}

/**
  *
  */



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
