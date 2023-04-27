#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: linked list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
