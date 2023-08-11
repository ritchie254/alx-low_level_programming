#include <stdio.h>
/**
  * main - entry point to the program
  * Return: 0 when successful
  */
int main(void)
{
	/* declaration of variables */
	int i = 97;

	/* the do while loop */
	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');

	/* return value */
	return (0);
}
