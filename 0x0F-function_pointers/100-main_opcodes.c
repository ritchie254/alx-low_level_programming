#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  *@argc: arguement count
  *@argv: vector
  *
  *Return: 0 0n succes
  */

int main(int argc, char *argv[])
{
	int a, b;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *)main;
	for (b = 0; b < a - 1; b++)
		printf("%02hhx ", s[b]);
	printf("%02hhx\n", s[b]);
	return (0);
}
