#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}

	return (element);
}

