#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the node
 * @index: index of the node, starting from 0
 *
 * Return: NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (!head)
		return (NULL);

	while (head && a < index)
	{
		head = head->next;
		a++;
	}

	if (head)
		return (head);
	else
		return (NULL);
}
