#include <stdio.h>
/**
  *main - entry point
  *Return: 0 if succes
  */
int main(void)
{
	/*delcalration */
	int a = '0';
	int b, c;

	/* intialization */
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return (0);
}
