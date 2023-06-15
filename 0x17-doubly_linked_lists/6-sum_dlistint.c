#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a linked list
 * @head: pointer to the head of the list
 *
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int summation = 0;

	while (head)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
