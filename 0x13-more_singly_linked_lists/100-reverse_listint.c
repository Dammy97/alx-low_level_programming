#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in place.
 * @head: A pointer to the head of the linked list.
 *
 * This function reverses the order of the nodes in the linked list.
 * It iterates through the list, changing the direction of each node's
 * 'next' pointer to point to the previous node
 * effectively reversing the list.
 *
 * Return: A pointer to the new head of the reversed linked list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
