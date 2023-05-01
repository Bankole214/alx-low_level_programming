#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of an index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node of nth else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;
	listint_t *temp = head;

	while (temp && nth < index)
	{
		temp = temp->next;
		nth++;
	}

	return (temp ? temp : NULL);
}

