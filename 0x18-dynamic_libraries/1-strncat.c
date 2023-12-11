#include "main.h"

/**
  * _strncat - a function that concertinates two strings
  *@dest: destination
  *@src: source
  *@n: integer
  *Return: final concertinated sting
  */

char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0;
	int count2;

	/* finding the length of string dest */
	while (dest[count1] != '\0')
	{
		count1++;
	}
	for (count2 = 0; count2 < n; count2++)
	{
		if (src[count2] == '\0')
			break;
		dest[count1] = src[count2];
		/* count1 will start at the last value of string dest */
		count1++;
	}
	return (dest);
}
