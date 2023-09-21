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
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = length(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
