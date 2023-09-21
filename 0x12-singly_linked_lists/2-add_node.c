#include "lists.h"


/**
  * length - reurn length of a string
  *@str: string
  *Return: lemgth
  */

int length(const char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}
/**
  * add_node - add a new node
  *@head: head node
  *@str: string
  *Return: struct
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = length(str);
		*head = new_node;
	return (*head);
}
