#include <stdio.h>

/**
  *main - entry point
  *Return: 0
  */

int main(void)
{
	/* fizzbuzz game */
	int i;
	char a[25] = "Fizz";
	char b[25] = "Buzz";
	char c[25] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s", b);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", c);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", a);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
