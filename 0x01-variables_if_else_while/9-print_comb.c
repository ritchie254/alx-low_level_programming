#include <stdio.h>
/**
  *main - entry point to program
  *Return: 0 success
  */
int main(void)
{
	/* declaration */
	int i;

	/* initializiation */
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	/* return value */
	return (0);
}
