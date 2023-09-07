#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  *string_nconcat - concertinates two stings
  *@s1: first string
  *@s2: second string
  *@n: number of bytes to be copied
  *
  *Return: pointer to character string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	size_t s1_length, s2_length, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_length = 0;
	while (s1[s1_length] != '\0')
	{
		s1_length++;
	}
	s2_length = 0;
	while (s2[s2_length] != '\0' && s2_length < n)
	{
		s2_length++;
	}
	if (n >= s2_length)
	{
		n = s2_length;
	}
	string = malloc(sizeof(char) * (s1_length + n + 1));
	if (string == NULL)
		return (NULL);
	for (i = 0; i < s1_length; i++)
	{
		string[i] = s1[i];
	}
	for (j = 0; j < s2_length; j++)
	{
		string[s1_length + j] = s2[j];
	}
	string[s1_length + s2_length] = '\0';
	return (string);
}
