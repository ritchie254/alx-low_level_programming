#include "lists.h"

/**
  * free_list - frees allocated memory
  *@head: head node
  */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
