#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * free_list - sets free a linked list
  * @head: start of the list
  * Return 0 : success
  */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
