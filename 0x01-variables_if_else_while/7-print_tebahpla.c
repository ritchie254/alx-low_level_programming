#include <stdio.h>
/**
  *main - entry point
  *Return: 0 when successful
  */
int main(void)
{
	/* declaration of variables */
	int k = 122;

	/*intializing the reverse loop */
	while (k >= 97)
	{
		putchar(k);
		k--;
	}
	putchar('\n');

	/* return value */
	return (0);
}
