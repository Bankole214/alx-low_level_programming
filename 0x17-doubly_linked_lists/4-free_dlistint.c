#include "lists.h"

/**
 * free_dlistint - that frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;

		free(temporary);
	}
}
