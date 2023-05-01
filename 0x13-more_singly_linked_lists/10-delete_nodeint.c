#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *current = NULL;
	unsigned int input = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (input < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		input++;
	}


	current = ptr->next;
	ptr->next = current->next;
	free(current);

	return (1);
}
