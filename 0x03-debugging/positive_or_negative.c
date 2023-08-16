#include "main.h"
#include <stdio.h>
/**
  *positive_or_negative - check if a number is negative or positve
  *@i: an integer inputto be checked
  */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if  (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
		printf("%d is zero\n", i);
}
