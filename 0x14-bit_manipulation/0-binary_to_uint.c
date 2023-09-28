#include "main.h"

/**
  * binary_to_uint - convert to binary
  *@b: string literal
  *
  *Return:corresponding value
  */

unsigned int binary_to_uint(const char *b)
{
	size_t int_n;

	int_n = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		int_n <<= 1;
		if (*b & 1)
			int_n += 1;
		b++;
	}
	return (int_n);
}
