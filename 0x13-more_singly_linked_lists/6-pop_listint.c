#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)

{
	listint_t *t;
	int data;

	if (*head == NULL)
		return (0);

	t = *head;
	*head = t->next;
	data = t->n;
	free(t);
	return (data);
}
