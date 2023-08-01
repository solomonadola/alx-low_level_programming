#include "lists.h"

/**
 * pop_listint - a program that deletes the head node of
 * the linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	headnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (headnode);
}
