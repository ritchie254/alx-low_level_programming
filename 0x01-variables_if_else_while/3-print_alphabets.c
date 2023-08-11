#include <stdio.h>
/**
  *main - the entry point to the program
  *Return: 0 when successful
  */
int main(void)
{
	/* declaration of variables */
	int i = 97;
	int j = 65;

	/* looping to print the characters */
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}

	/* printing new line after loop ends */
	putchar('\n');

	/* return value */
	return (0);
}
