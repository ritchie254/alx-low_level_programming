#include <stdio.h>
#include "main.h"

/**
  * main - entry point
  * Return: 0
  */

int main(void)
{
	int month, day, year;

	month = 4;
	day = 01;
	year = 1997;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining=days(month, day, year);

	return (0);
}
