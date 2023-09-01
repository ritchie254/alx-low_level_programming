#include "main.h"

/**
  * main - entry point
  *@argc: arguement count
  *@argv: arguement array or vector
  *
  *Return: 0
  */

int main(int argc, char *argv[])
{
	(void)argv;/* since not using the argv parameter */

	printf("%d\n", (argc - 1));
	return (0);
}
