#include "main.h"
#include <stdio.h>

/**
  * main - entry point
  *Return: 0
  */

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the probelm. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
