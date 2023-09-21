#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
   * main - check the code
    *
     * Return: Always 0.
      */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head," Alexandro");
	add_node(&head, "asai");
	add_node(&head, "Augustin");
	add_node(&head,"bilala");
	print_list(head);
	return (0);
}
