#include <stdio.h>
/**
  *main - entry point
  *
  *Return: 0 success
  */

int main(void)
{
	int i = 1, j = 2, total = 0, k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total = total + j;

		k = j;
		j = j + i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
