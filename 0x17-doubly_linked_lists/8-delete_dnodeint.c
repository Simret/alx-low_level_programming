#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: ptr to the begining of the list
 * @index: index to be deleted
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	dlistint_t *oldNode;
	unsigned int a;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		oldNode = *head;
		*head = oldNode->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(oldNode);
		return (1);
	}
	oldNode = *head;
	for (a = 0; oldNode != NULL && a < index; a++)
		oldNode = oldNode->next;
	if (oldNode == NULL)
		return (-1);
	oldNode->prev->next = oldNode->next;
	if (oldNode->next != NULL)
		oldNode->next->prev = oldNode->prev;
	free(oldNode);
	return (1);
}
