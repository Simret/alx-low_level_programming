#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	unsigned int i;
	listint_t *crnt, *nxt;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
		return (1);
	}
	crnt = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (crnt->next == NULL)
			return (-1);
		crnt = crnt->next;
	}
	nxt = crnt->next;
	crnt->next = nxt->next;
	free(nxt);
	return (1);
}
