#include <unistd.h>

/**
  *_putchar - writes character c in standard output
  *@c: the character to print
  *
  *Return: on success 1.
  *on error, -1 is returned, and errno is ser appropriatly
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
