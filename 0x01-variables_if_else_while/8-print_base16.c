#include <stdio.h>
/**
  *main - entry point
  *Return: 0 success
  */
int main(void)
{
	/* declaration of variables */
	int i = 97;
	int j = 48;

	/* intializiation of loop */
	while (j <= 57)
	{
		putchar(j);
		j++;
	}
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	/* return value */
	return (0);
}
