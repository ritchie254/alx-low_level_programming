#include "main.h"
/**
  *print_sign - prints the sign of a number
  *@n: integer input
  *
  *Return: 1,0 or -1
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}

