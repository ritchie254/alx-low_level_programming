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
	int rem;

	/* initialization */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10; /* finding the modulus of the number*/

	/* checking for different if conditions for validation*/
	if (rem > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	}
	else if (rem == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rem);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);
	}

	/* return value */
	return (0);
}
