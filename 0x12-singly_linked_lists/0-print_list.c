#include "lists.h"

/**
  * print_list - print values in a list
  * @h: struct
  *Return: number of items
  */

size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 1; h->next != NULL; count++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (count);
}
