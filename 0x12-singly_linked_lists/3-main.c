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
	add_node_end(&head," Alexandro");
	add_node_end(&head, "asai");
	add_node_end(&head, "Augustin");
	add_node_end(&head,"bilala");
	print_list(head);
	return (0);
}
