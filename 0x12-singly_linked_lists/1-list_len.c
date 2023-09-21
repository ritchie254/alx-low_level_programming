#include "lists.h"

/**
  * list_len - number of elements in a list
  *@h: pointer to struct
  *Return: number of elements in struct
  */

size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 1; h->next != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
