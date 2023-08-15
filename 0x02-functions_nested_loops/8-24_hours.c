#include "main.h"
/**
  * jack_bauer - function to print time
  *
  */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i >= 2 && j >= 4)
						break;
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(58);
					_putchar(k + 48);
					_putchar(l + 48);
					_putchar('\n');
				}
			}
		}
	}
}
