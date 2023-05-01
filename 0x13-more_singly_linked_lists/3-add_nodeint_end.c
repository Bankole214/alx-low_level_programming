#include "lists.h"

/**
 * add_nodeint_end - append a node to a linked list
 * @head: pointer to the first element in the list
 * @n: data to append in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *append;
	listint_t *temp = *head;

	append = malloc(sizeof(listint_t));
	if (!append)
		return (NULL);

	append->n = n;
	append->next = NULL;

	if (*head == NULL)
	{
		*head = append;
		return (append);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = append;

	return (append);
}

