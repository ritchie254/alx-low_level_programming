#include <stdio.h>
/**
  *main - the entry point to the program
  *Return: 0 when successful
  */
int main(void)
{
	/* declaration of variables */
	int i;

	/* looping to print the characters */
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	/* printing new line after loop ends */
	putchar('\n');

	/* return value */
	return (0);
}
