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
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
