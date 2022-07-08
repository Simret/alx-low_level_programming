#include "lists.h"

/**
 * insert_dnodeint_at_index - func to insert node at index
 * @h: double ptr to the beginning of the list
 * @idx: index at which to add
 * @n: data to be added
 * Return: address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *newNode, *oldNode;
	unsigned int a;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	oldNode = *h;
	for (a = 0; old != NULL && a < idx; a++)
		oldNode = oldNode->next;
	if (oldNode == NULL && a == idx)
		return (add_dnodeint_end(h, n));
	else if (oldNode != NULL)
	{													new = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		oldNode->prev->next = newNode;
		newNode->prev = oldNode->prev;
		oldNode->prev = newNode;
		newNode->next = oldNode;
		return (new);
	}
	return (NULL);
}
