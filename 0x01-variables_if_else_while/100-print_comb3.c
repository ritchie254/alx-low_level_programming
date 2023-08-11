#include <stdio.h>
/**
  *main - entry point
  *Return: 0 success
  */
int main(void)
{
	/* decalration of variables */
	int i, j;

	/*intializiation */
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i >= j)
			{
				continue;
				j++;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	/* return value */
	return (0);
}
