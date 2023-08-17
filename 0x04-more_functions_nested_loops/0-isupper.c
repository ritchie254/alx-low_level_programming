#include "main.h"

/**
  *_isupper - check for case
  *@c: integer value
  *
  *Return: 1 or 0
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}

	return (0);
}
