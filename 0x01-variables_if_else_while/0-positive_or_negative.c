#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - the entry point to the program
  *Return: 0 if succesfull exited
  */
int main(void)
{
	/* declaration of variables */
	int n;

	/* initialization */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* checking for different if conditions for validation*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	/* return value */
	return (0);
}
